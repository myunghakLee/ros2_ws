# hangman_game/progress_action.py

import rclpy
from rclpy.node import Node
from hangman_interfaces.action import GameProgress
from hangman_interfaces.msg import Progress
from rclpy.action import ActionServer, ActionClient
from rclpy.executors import MultiThreadedExecutor
import threading

class ProgressActionNode(Node):

    def __init__(self):
        super().__init__('progress_action_node')

        # Initialize the action server
        self._action_server = ActionServer(
            self,
            GameProgress,
            'game_progress',
            self.execute_callback
        )

        # Initialize the action client
        self._action_client = ActionClient(self, GameProgress, 'game_progress')

        # Subscribe to the 'progress' topic
        self.progress_subscription = self.create_subscription(
            Progress,
            'progress',
            self.progress_callback,
            10
        )

        self.current_progress = Progress()

        # Start the action client in a separate thread
        threading.Thread(target=self.send_goal, daemon=True).start()

    def progress_callback(self, msg):
        self.current_progress = msg

    async def execute_callback(self, goal_handle):
        self.get_logger().info('Action Server: Game Progress Action has been called.')
        feedback_msg = GameProgress.Feedback()

        while not self.current_progress.game_over:
            feedback_msg.current_state = self.current_progress.current_state
            feedback_msg.attempts_left = self.current_progress.attempts_left
            goal_handle.publish_feedback(feedback_msg)
            self.get_logger().info(f'Action Server Feedback: {feedback_msg.current_state}, Attempts left: {feedback_msg.attempts_left}')
            await rclpy.sleep(1.0)

        result = GameProgress.Result()
        result.game_over = self.current_progress.game_over
        result.won = self.current_progress.won
        goal_handle.succeed()
        return result

    def send_goal(self):
        self._action_client.wait_for_server()

        goal_msg = GameProgress.Goal()
        self._send_goal_future = self._action_client.send_goal_async(
            goal_msg,
            feedback_callback=self.feedback_callback
        )
        self._send_goal_future.add_done_callback(self.goal_response_callback)

    def feedback_callback(self, feedback_msg):
        feedback = feedback_msg.feedback
        self.get_logger().info(f'Action Client Feedback: Current State: {feedback.current_state}, Attempts Left: {feedback.attempts_left}')

    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Action Client: Goal rejected')
            return

        self.get_logger().info('Action Client: Goal accepted')
        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)

    def get_result_callback(self, future):
        result = future.result().result
        if result.won:
            self.get_logger().info('Action Client: Congratulations! You won!')
        else:
            self.get_logger().info('Action Client: Game Over. You lost.')
        # Shutdown after the game is over
        rclpy.shutdown()

def main(args=None):
    rclpy.init(args=args)
    node = ProgressActionNode()
    # Use MultiThreadedExecutor to handle callbacks in separate threads
    executor = MultiThreadedExecutor()
    rclpy.spin(node, executor=executor)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
