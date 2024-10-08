// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hangman_interfaces:action/GameProgress.idl
// generated code does not contain a copyright notice

#ifndef HANGMAN_INTERFACES__ACTION__DETAIL__GAME_PROGRESS__BUILDER_HPP_
#define HANGMAN_INTERFACES__ACTION__DETAIL__GAME_PROGRESS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hangman_interfaces/action/detail/game_progress__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hangman_interfaces
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hangman_interfaces::action::GameProgress_Goal>()
{
  return ::hangman_interfaces::action::GameProgress_Goal(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace hangman_interfaces


namespace hangman_interfaces
{

namespace action
{

namespace builder
{

class Init_GameProgress_Result_won
{
public:
  explicit Init_GameProgress_Result_won(::hangman_interfaces::action::GameProgress_Result & msg)
  : msg_(msg)
  {}
  ::hangman_interfaces::action::GameProgress_Result won(::hangman_interfaces::action::GameProgress_Result::_won_type arg)
  {
    msg_.won = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hangman_interfaces::action::GameProgress_Result msg_;
};

class Init_GameProgress_Result_game_over
{
public:
  Init_GameProgress_Result_game_over()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GameProgress_Result_won game_over(::hangman_interfaces::action::GameProgress_Result::_game_over_type arg)
  {
    msg_.game_over = std::move(arg);
    return Init_GameProgress_Result_won(msg_);
  }

private:
  ::hangman_interfaces::action::GameProgress_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hangman_interfaces::action::GameProgress_Result>()
{
  return hangman_interfaces::action::builder::Init_GameProgress_Result_game_over();
}

}  // namespace hangman_interfaces


namespace hangman_interfaces
{

namespace action
{

namespace builder
{

class Init_GameProgress_Feedback_game_over
{
public:
  Init_GameProgress_Feedback_game_over()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hangman_interfaces::action::GameProgress_Feedback game_over(::hangman_interfaces::action::GameProgress_Feedback::_game_over_type arg)
  {
    msg_.game_over = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hangman_interfaces::action::GameProgress_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hangman_interfaces::action::GameProgress_Feedback>()
{
  return hangman_interfaces::action::builder::Init_GameProgress_Feedback_game_over();
}

}  // namespace hangman_interfaces


namespace hangman_interfaces
{

namespace action
{

namespace builder
{

class Init_GameProgress_SendGoal_Request_goal
{
public:
  explicit Init_GameProgress_SendGoal_Request_goal(::hangman_interfaces::action::GameProgress_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::hangman_interfaces::action::GameProgress_SendGoal_Request goal(::hangman_interfaces::action::GameProgress_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hangman_interfaces::action::GameProgress_SendGoal_Request msg_;
};

class Init_GameProgress_SendGoal_Request_goal_id
{
public:
  Init_GameProgress_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GameProgress_SendGoal_Request_goal goal_id(::hangman_interfaces::action::GameProgress_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_GameProgress_SendGoal_Request_goal(msg_);
  }

private:
  ::hangman_interfaces::action::GameProgress_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hangman_interfaces::action::GameProgress_SendGoal_Request>()
{
  return hangman_interfaces::action::builder::Init_GameProgress_SendGoal_Request_goal_id();
}

}  // namespace hangman_interfaces


namespace hangman_interfaces
{

namespace action
{

namespace builder
{

class Init_GameProgress_SendGoal_Response_stamp
{
public:
  explicit Init_GameProgress_SendGoal_Response_stamp(::hangman_interfaces::action::GameProgress_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::hangman_interfaces::action::GameProgress_SendGoal_Response stamp(::hangman_interfaces::action::GameProgress_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hangman_interfaces::action::GameProgress_SendGoal_Response msg_;
};

class Init_GameProgress_SendGoal_Response_accepted
{
public:
  Init_GameProgress_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GameProgress_SendGoal_Response_stamp accepted(::hangman_interfaces::action::GameProgress_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_GameProgress_SendGoal_Response_stamp(msg_);
  }

private:
  ::hangman_interfaces::action::GameProgress_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hangman_interfaces::action::GameProgress_SendGoal_Response>()
{
  return hangman_interfaces::action::builder::Init_GameProgress_SendGoal_Response_accepted();
}

}  // namespace hangman_interfaces


namespace hangman_interfaces
{

namespace action
{

namespace builder
{

class Init_GameProgress_GetResult_Request_goal_id
{
public:
  Init_GameProgress_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hangman_interfaces::action::GameProgress_GetResult_Request goal_id(::hangman_interfaces::action::GameProgress_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hangman_interfaces::action::GameProgress_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hangman_interfaces::action::GameProgress_GetResult_Request>()
{
  return hangman_interfaces::action::builder::Init_GameProgress_GetResult_Request_goal_id();
}

}  // namespace hangman_interfaces


namespace hangman_interfaces
{

namespace action
{

namespace builder
{

class Init_GameProgress_GetResult_Response_result
{
public:
  explicit Init_GameProgress_GetResult_Response_result(::hangman_interfaces::action::GameProgress_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::hangman_interfaces::action::GameProgress_GetResult_Response result(::hangman_interfaces::action::GameProgress_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hangman_interfaces::action::GameProgress_GetResult_Response msg_;
};

class Init_GameProgress_GetResult_Response_status
{
public:
  Init_GameProgress_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GameProgress_GetResult_Response_result status(::hangman_interfaces::action::GameProgress_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_GameProgress_GetResult_Response_result(msg_);
  }

private:
  ::hangman_interfaces::action::GameProgress_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hangman_interfaces::action::GameProgress_GetResult_Response>()
{
  return hangman_interfaces::action::builder::Init_GameProgress_GetResult_Response_status();
}

}  // namespace hangman_interfaces


namespace hangman_interfaces
{

namespace action
{

namespace builder
{

class Init_GameProgress_FeedbackMessage_feedback
{
public:
  explicit Init_GameProgress_FeedbackMessage_feedback(::hangman_interfaces::action::GameProgress_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::hangman_interfaces::action::GameProgress_FeedbackMessage feedback(::hangman_interfaces::action::GameProgress_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hangman_interfaces::action::GameProgress_FeedbackMessage msg_;
};

class Init_GameProgress_FeedbackMessage_goal_id
{
public:
  Init_GameProgress_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GameProgress_FeedbackMessage_feedback goal_id(::hangman_interfaces::action::GameProgress_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_GameProgress_FeedbackMessage_feedback(msg_);
  }

private:
  ::hangman_interfaces::action::GameProgress_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hangman_interfaces::action::GameProgress_FeedbackMessage>()
{
  return hangman_interfaces::action::builder::Init_GameProgress_FeedbackMessage_goal_id();
}

}  // namespace hangman_interfaces

#endif  // HANGMAN_INTERFACES__ACTION__DETAIL__GAME_PROGRESS__BUILDER_HPP_
