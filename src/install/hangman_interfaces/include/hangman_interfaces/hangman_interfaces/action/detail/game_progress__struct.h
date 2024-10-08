// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hangman_interfaces:action/GameProgress.idl
// generated code does not contain a copyright notice

#ifndef HANGMAN_INTERFACES__ACTION__DETAIL__GAME_PROGRESS__STRUCT_H_
#define HANGMAN_INTERFACES__ACTION__DETAIL__GAME_PROGRESS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/GameProgress in the package hangman_interfaces.
typedef struct hangman_interfaces__action__GameProgress_Goal
{
  uint8_t structure_needs_at_least_one_member;
} hangman_interfaces__action__GameProgress_Goal;

// Struct for a sequence of hangman_interfaces__action__GameProgress_Goal.
typedef struct hangman_interfaces__action__GameProgress_Goal__Sequence
{
  hangman_interfaces__action__GameProgress_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hangman_interfaces__action__GameProgress_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/GameProgress in the package hangman_interfaces.
typedef struct hangman_interfaces__action__GameProgress_Result
{
  bool game_over;
  bool won;
} hangman_interfaces__action__GameProgress_Result;

// Struct for a sequence of hangman_interfaces__action__GameProgress_Result.
typedef struct hangman_interfaces__action__GameProgress_Result__Sequence
{
  hangman_interfaces__action__GameProgress_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hangman_interfaces__action__GameProgress_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/GameProgress in the package hangman_interfaces.
typedef struct hangman_interfaces__action__GameProgress_Feedback
{
  bool game_over;
} hangman_interfaces__action__GameProgress_Feedback;

// Struct for a sequence of hangman_interfaces__action__GameProgress_Feedback.
typedef struct hangman_interfaces__action__GameProgress_Feedback__Sequence
{
  hangman_interfaces__action__GameProgress_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hangman_interfaces__action__GameProgress_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "hangman_interfaces/action/detail/game_progress__struct.h"

/// Struct defined in action/GameProgress in the package hangman_interfaces.
typedef struct hangman_interfaces__action__GameProgress_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  hangman_interfaces__action__GameProgress_Goal goal;
} hangman_interfaces__action__GameProgress_SendGoal_Request;

// Struct for a sequence of hangman_interfaces__action__GameProgress_SendGoal_Request.
typedef struct hangman_interfaces__action__GameProgress_SendGoal_Request__Sequence
{
  hangman_interfaces__action__GameProgress_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hangman_interfaces__action__GameProgress_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/GameProgress in the package hangman_interfaces.
typedef struct hangman_interfaces__action__GameProgress_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} hangman_interfaces__action__GameProgress_SendGoal_Response;

// Struct for a sequence of hangman_interfaces__action__GameProgress_SendGoal_Response.
typedef struct hangman_interfaces__action__GameProgress_SendGoal_Response__Sequence
{
  hangman_interfaces__action__GameProgress_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hangman_interfaces__action__GameProgress_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/GameProgress in the package hangman_interfaces.
typedef struct hangman_interfaces__action__GameProgress_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} hangman_interfaces__action__GameProgress_GetResult_Request;

// Struct for a sequence of hangman_interfaces__action__GameProgress_GetResult_Request.
typedef struct hangman_interfaces__action__GameProgress_GetResult_Request__Sequence
{
  hangman_interfaces__action__GameProgress_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hangman_interfaces__action__GameProgress_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "hangman_interfaces/action/detail/game_progress__struct.h"

/// Struct defined in action/GameProgress in the package hangman_interfaces.
typedef struct hangman_interfaces__action__GameProgress_GetResult_Response
{
  int8_t status;
  hangman_interfaces__action__GameProgress_Result result;
} hangman_interfaces__action__GameProgress_GetResult_Response;

// Struct for a sequence of hangman_interfaces__action__GameProgress_GetResult_Response.
typedef struct hangman_interfaces__action__GameProgress_GetResult_Response__Sequence
{
  hangman_interfaces__action__GameProgress_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hangman_interfaces__action__GameProgress_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "hangman_interfaces/action/detail/game_progress__struct.h"

/// Struct defined in action/GameProgress in the package hangman_interfaces.
typedef struct hangman_interfaces__action__GameProgress_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  hangman_interfaces__action__GameProgress_Feedback feedback;
} hangman_interfaces__action__GameProgress_FeedbackMessage;

// Struct for a sequence of hangman_interfaces__action__GameProgress_FeedbackMessage.
typedef struct hangman_interfaces__action__GameProgress_FeedbackMessage__Sequence
{
  hangman_interfaces__action__GameProgress_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hangman_interfaces__action__GameProgress_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HANGMAN_INTERFACES__ACTION__DETAIL__GAME_PROGRESS__STRUCT_H_
