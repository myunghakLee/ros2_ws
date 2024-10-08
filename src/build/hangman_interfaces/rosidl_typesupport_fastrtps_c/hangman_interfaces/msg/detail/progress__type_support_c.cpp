// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from hangman_interfaces:msg/Progress.idl
// generated code does not contain a copyright notice
#include "hangman_interfaces/msg/detail/progress__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "hangman_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "hangman_interfaces/msg/detail/progress__struct.h"
#include "hangman_interfaces/msg/detail/progress__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // current_state
#include "rosidl_runtime_c/string_functions.h"  // current_state

// forward declare type support functions


using _Progress__ros_msg_type = hangman_interfaces__msg__Progress;

static bool _Progress__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Progress__ros_msg_type * ros_message = static_cast<const _Progress__ros_msg_type *>(untyped_ros_message);
  // Field name: current_state
  {
    const rosidl_runtime_c__String * str = &ros_message->current_state;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: attempts_left
  {
    cdr << ros_message->attempts_left;
  }

  // Field name: game_over
  {
    cdr << (ros_message->game_over ? true : false);
  }

  // Field name: won
  {
    cdr << (ros_message->won ? true : false);
  }

  return true;
}

static bool _Progress__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Progress__ros_msg_type * ros_message = static_cast<_Progress__ros_msg_type *>(untyped_ros_message);
  // Field name: current_state
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->current_state.data) {
      rosidl_runtime_c__String__init(&ros_message->current_state);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->current_state,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'current_state'\n");
      return false;
    }
  }

  // Field name: attempts_left
  {
    cdr >> ros_message->attempts_left;
  }

  // Field name: game_over
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->game_over = tmp ? true : false;
  }

  // Field name: won
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->won = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hangman_interfaces
size_t get_serialized_size_hangman_interfaces__msg__Progress(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Progress__ros_msg_type * ros_message = static_cast<const _Progress__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name current_state
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->current_state.size + 1);
  // field.name attempts_left
  {
    size_t item_size = sizeof(ros_message->attempts_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name game_over
  {
    size_t item_size = sizeof(ros_message->game_over);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name won
  {
    size_t item_size = sizeof(ros_message->won);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Progress__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_hangman_interfaces__msg__Progress(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hangman_interfaces
size_t max_serialized_size_hangman_interfaces__msg__Progress(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: current_state
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: attempts_left
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: game_over
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: won
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = hangman_interfaces__msg__Progress;
    is_plain =
      (
      offsetof(DataType, won) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Progress__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_hangman_interfaces__msg__Progress(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Progress = {
  "hangman_interfaces::msg",
  "Progress",
  _Progress__cdr_serialize,
  _Progress__cdr_deserialize,
  _Progress__get_serialized_size,
  _Progress__max_serialized_size
};

static rosidl_message_type_support_t _Progress__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Progress,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hangman_interfaces, msg, Progress)() {
  return &_Progress__type_support;
}

#if defined(__cplusplus)
}
#endif
