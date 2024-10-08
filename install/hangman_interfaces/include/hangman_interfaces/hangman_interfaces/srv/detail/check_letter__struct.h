// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hangman_interfaces:srv/CheckLetter.idl
// generated code does not contain a copyright notice

#ifndef HANGMAN_INTERFACES__SRV__DETAIL__CHECK_LETTER__STRUCT_H_
#define HANGMAN_INTERFACES__SRV__DETAIL__CHECK_LETTER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/CheckLetter in the package hangman_interfaces.
typedef struct hangman_interfaces__srv__CheckLetter_Request
{
  uint8_t structure_needs_at_least_one_member;
} hangman_interfaces__srv__CheckLetter_Request;

// Struct for a sequence of hangman_interfaces__srv__CheckLetter_Request.
typedef struct hangman_interfaces__srv__CheckLetter_Request__Sequence
{
  hangman_interfaces__srv__CheckLetter_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hangman_interfaces__srv__CheckLetter_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'updated_word_state'
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/CheckLetter in the package hangman_interfaces.
typedef struct hangman_interfaces__srv__CheckLetter_Response
{
  rosidl_runtime_c__String updated_word_state;
  bool is_correct;
  rosidl_runtime_c__String message;
} hangman_interfaces__srv__CheckLetter_Response;

// Struct for a sequence of hangman_interfaces__srv__CheckLetter_Response.
typedef struct hangman_interfaces__srv__CheckLetter_Response__Sequence
{
  hangman_interfaces__srv__CheckLetter_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hangman_interfaces__srv__CheckLetter_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HANGMAN_INTERFACES__SRV__DETAIL__CHECK_LETTER__STRUCT_H_
