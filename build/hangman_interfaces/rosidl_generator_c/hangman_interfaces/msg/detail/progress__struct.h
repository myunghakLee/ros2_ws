// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hangman_interfaces:msg/Progress.idl
// generated code does not contain a copyright notice

#ifndef HANGMAN_INTERFACES__MSG__DETAIL__PROGRESS__STRUCT_H_
#define HANGMAN_INTERFACES__MSG__DETAIL__PROGRESS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'current_state'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Progress in the package hangman_interfaces.
typedef struct hangman_interfaces__msg__Progress
{
  rosidl_runtime_c__String current_state;
  int32_t attempts_left;
  bool game_over;
  bool won;
} hangman_interfaces__msg__Progress;

// Struct for a sequence of hangman_interfaces__msg__Progress.
typedef struct hangman_interfaces__msg__Progress__Sequence
{
  hangman_interfaces__msg__Progress * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hangman_interfaces__msg__Progress__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HANGMAN_INTERFACES__MSG__DETAIL__PROGRESS__STRUCT_H_
