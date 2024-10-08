// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hangman_interfaces:msg/Progress.idl
// generated code does not contain a copyright notice
#include "hangman_interfaces/msg/detail/progress__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `current_state`
#include "rosidl_runtime_c/string_functions.h"

bool
hangman_interfaces__msg__Progress__init(hangman_interfaces__msg__Progress * msg)
{
  if (!msg) {
    return false;
  }
  // current_state
  if (!rosidl_runtime_c__String__init(&msg->current_state)) {
    hangman_interfaces__msg__Progress__fini(msg);
    return false;
  }
  // attempts_left
  // game_over
  // won
  return true;
}

void
hangman_interfaces__msg__Progress__fini(hangman_interfaces__msg__Progress * msg)
{
  if (!msg) {
    return;
  }
  // current_state
  rosidl_runtime_c__String__fini(&msg->current_state);
  // attempts_left
  // game_over
  // won
}

bool
hangman_interfaces__msg__Progress__are_equal(const hangman_interfaces__msg__Progress * lhs, const hangman_interfaces__msg__Progress * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // current_state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->current_state), &(rhs->current_state)))
  {
    return false;
  }
  // attempts_left
  if (lhs->attempts_left != rhs->attempts_left) {
    return false;
  }
  // game_over
  if (lhs->game_over != rhs->game_over) {
    return false;
  }
  // won
  if (lhs->won != rhs->won) {
    return false;
  }
  return true;
}

bool
hangman_interfaces__msg__Progress__copy(
  const hangman_interfaces__msg__Progress * input,
  hangman_interfaces__msg__Progress * output)
{
  if (!input || !output) {
    return false;
  }
  // current_state
  if (!rosidl_runtime_c__String__copy(
      &(input->current_state), &(output->current_state)))
  {
    return false;
  }
  // attempts_left
  output->attempts_left = input->attempts_left;
  // game_over
  output->game_over = input->game_over;
  // won
  output->won = input->won;
  return true;
}

hangman_interfaces__msg__Progress *
hangman_interfaces__msg__Progress__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hangman_interfaces__msg__Progress * msg = (hangman_interfaces__msg__Progress *)allocator.allocate(sizeof(hangman_interfaces__msg__Progress), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hangman_interfaces__msg__Progress));
  bool success = hangman_interfaces__msg__Progress__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hangman_interfaces__msg__Progress__destroy(hangman_interfaces__msg__Progress * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hangman_interfaces__msg__Progress__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hangman_interfaces__msg__Progress__Sequence__init(hangman_interfaces__msg__Progress__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hangman_interfaces__msg__Progress * data = NULL;

  if (size) {
    data = (hangman_interfaces__msg__Progress *)allocator.zero_allocate(size, sizeof(hangman_interfaces__msg__Progress), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hangman_interfaces__msg__Progress__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hangman_interfaces__msg__Progress__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
hangman_interfaces__msg__Progress__Sequence__fini(hangman_interfaces__msg__Progress__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      hangman_interfaces__msg__Progress__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

hangman_interfaces__msg__Progress__Sequence *
hangman_interfaces__msg__Progress__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hangman_interfaces__msg__Progress__Sequence * array = (hangman_interfaces__msg__Progress__Sequence *)allocator.allocate(sizeof(hangman_interfaces__msg__Progress__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hangman_interfaces__msg__Progress__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hangman_interfaces__msg__Progress__Sequence__destroy(hangman_interfaces__msg__Progress__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hangman_interfaces__msg__Progress__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hangman_interfaces__msg__Progress__Sequence__are_equal(const hangman_interfaces__msg__Progress__Sequence * lhs, const hangman_interfaces__msg__Progress__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hangman_interfaces__msg__Progress__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hangman_interfaces__msg__Progress__Sequence__copy(
  const hangman_interfaces__msg__Progress__Sequence * input,
  hangman_interfaces__msg__Progress__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hangman_interfaces__msg__Progress);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hangman_interfaces__msg__Progress * data =
      (hangman_interfaces__msg__Progress *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hangman_interfaces__msg__Progress__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hangman_interfaces__msg__Progress__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hangman_interfaces__msg__Progress__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
