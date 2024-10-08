// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from hangman_interfaces:msg/Progress.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "hangman_interfaces/msg/detail/progress__rosidl_typesupport_introspection_c.h"
#include "hangman_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "hangman_interfaces/msg/detail/progress__functions.h"
#include "hangman_interfaces/msg/detail/progress__struct.h"


// Include directives for member types
// Member `current_state`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void hangman_interfaces__msg__Progress__rosidl_typesupport_introspection_c__Progress_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hangman_interfaces__msg__Progress__init(message_memory);
}

void hangman_interfaces__msg__Progress__rosidl_typesupport_introspection_c__Progress_fini_function(void * message_memory)
{
  hangman_interfaces__msg__Progress__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember hangman_interfaces__msg__Progress__rosidl_typesupport_introspection_c__Progress_message_member_array[4] = {
  {
    "current_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hangman_interfaces__msg__Progress, current_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "attempts_left",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hangman_interfaces__msg__Progress, attempts_left),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "game_over",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hangman_interfaces__msg__Progress, game_over),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "won",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hangman_interfaces__msg__Progress, won),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hangman_interfaces__msg__Progress__rosidl_typesupport_introspection_c__Progress_message_members = {
  "hangman_interfaces__msg",  // message namespace
  "Progress",  // message name
  4,  // number of fields
  sizeof(hangman_interfaces__msg__Progress),
  hangman_interfaces__msg__Progress__rosidl_typesupport_introspection_c__Progress_message_member_array,  // message members
  hangman_interfaces__msg__Progress__rosidl_typesupport_introspection_c__Progress_init_function,  // function to initialize message memory (memory has to be allocated)
  hangman_interfaces__msg__Progress__rosidl_typesupport_introspection_c__Progress_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hangman_interfaces__msg__Progress__rosidl_typesupport_introspection_c__Progress_message_type_support_handle = {
  0,
  &hangman_interfaces__msg__Progress__rosidl_typesupport_introspection_c__Progress_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hangman_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hangman_interfaces, msg, Progress)() {
  if (!hangman_interfaces__msg__Progress__rosidl_typesupport_introspection_c__Progress_message_type_support_handle.typesupport_identifier) {
    hangman_interfaces__msg__Progress__rosidl_typesupport_introspection_c__Progress_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hangman_interfaces__msg__Progress__rosidl_typesupport_introspection_c__Progress_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
