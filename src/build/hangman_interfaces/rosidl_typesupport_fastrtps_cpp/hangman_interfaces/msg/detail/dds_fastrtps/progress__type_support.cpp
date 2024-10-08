// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from hangman_interfaces:msg/Progress.idl
// generated code does not contain a copyright notice
#include "hangman_interfaces/msg/detail/progress__rosidl_typesupport_fastrtps_cpp.hpp"
#include "hangman_interfaces/msg/detail/progress__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace hangman_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hangman_interfaces
cdr_serialize(
  const hangman_interfaces::msg::Progress & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: current_state
  cdr << ros_message.current_state;
  // Member: attempts_left
  cdr << ros_message.attempts_left;
  // Member: game_over
  cdr << (ros_message.game_over ? true : false);
  // Member: won
  cdr << (ros_message.won ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hangman_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  hangman_interfaces::msg::Progress & ros_message)
{
  // Member: current_state
  cdr >> ros_message.current_state;

  // Member: attempts_left
  cdr >> ros_message.attempts_left;

  // Member: game_over
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.game_over = tmp ? true : false;
  }

  // Member: won
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.won = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hangman_interfaces
get_serialized_size(
  const hangman_interfaces::msg::Progress & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: current_state
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.current_state.size() + 1);
  // Member: attempts_left
  {
    size_t item_size = sizeof(ros_message.attempts_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: game_over
  {
    size_t item_size = sizeof(ros_message.game_over);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: won
  {
    size_t item_size = sizeof(ros_message.won);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hangman_interfaces
max_serialized_size_Progress(
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


  // Member: current_state
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

  // Member: attempts_left
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: game_over
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: won
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
    using DataType = hangman_interfaces::msg::Progress;
    is_plain =
      (
      offsetof(DataType, won) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Progress__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const hangman_interfaces::msg::Progress *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Progress__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<hangman_interfaces::msg::Progress *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Progress__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const hangman_interfaces::msg::Progress *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Progress__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Progress(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Progress__callbacks = {
  "hangman_interfaces::msg",
  "Progress",
  _Progress__cdr_serialize,
  _Progress__cdr_deserialize,
  _Progress__get_serialized_size,
  _Progress__max_serialized_size
};

static rosidl_message_type_support_t _Progress__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Progress__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace hangman_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_hangman_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<hangman_interfaces::msg::Progress>()
{
  return &hangman_interfaces::msg::typesupport_fastrtps_cpp::_Progress__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hangman_interfaces, msg, Progress)() {
  return &hangman_interfaces::msg::typesupport_fastrtps_cpp::_Progress__handle;
}

#ifdef __cplusplus
}
#endif
