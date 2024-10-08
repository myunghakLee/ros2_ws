// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hangman_interfaces:srv/CheckLetter.idl
// generated code does not contain a copyright notice
#include "hangman_interfaces/srv/detail/check_letter__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
hangman_interfaces__srv__CheckLetter_Request__init(hangman_interfaces__srv__CheckLetter_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
hangman_interfaces__srv__CheckLetter_Request__fini(hangman_interfaces__srv__CheckLetter_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
hangman_interfaces__srv__CheckLetter_Request__are_equal(const hangman_interfaces__srv__CheckLetter_Request * lhs, const hangman_interfaces__srv__CheckLetter_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
hangman_interfaces__srv__CheckLetter_Request__copy(
  const hangman_interfaces__srv__CheckLetter_Request * input,
  hangman_interfaces__srv__CheckLetter_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

hangman_interfaces__srv__CheckLetter_Request *
hangman_interfaces__srv__CheckLetter_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hangman_interfaces__srv__CheckLetter_Request * msg = (hangman_interfaces__srv__CheckLetter_Request *)allocator.allocate(sizeof(hangman_interfaces__srv__CheckLetter_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hangman_interfaces__srv__CheckLetter_Request));
  bool success = hangman_interfaces__srv__CheckLetter_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hangman_interfaces__srv__CheckLetter_Request__destroy(hangman_interfaces__srv__CheckLetter_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hangman_interfaces__srv__CheckLetter_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hangman_interfaces__srv__CheckLetter_Request__Sequence__init(hangman_interfaces__srv__CheckLetter_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hangman_interfaces__srv__CheckLetter_Request * data = NULL;

  if (size) {
    data = (hangman_interfaces__srv__CheckLetter_Request *)allocator.zero_allocate(size, sizeof(hangman_interfaces__srv__CheckLetter_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hangman_interfaces__srv__CheckLetter_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hangman_interfaces__srv__CheckLetter_Request__fini(&data[i - 1]);
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
hangman_interfaces__srv__CheckLetter_Request__Sequence__fini(hangman_interfaces__srv__CheckLetter_Request__Sequence * array)
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
      hangman_interfaces__srv__CheckLetter_Request__fini(&array->data[i]);
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

hangman_interfaces__srv__CheckLetter_Request__Sequence *
hangman_interfaces__srv__CheckLetter_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hangman_interfaces__srv__CheckLetter_Request__Sequence * array = (hangman_interfaces__srv__CheckLetter_Request__Sequence *)allocator.allocate(sizeof(hangman_interfaces__srv__CheckLetter_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hangman_interfaces__srv__CheckLetter_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hangman_interfaces__srv__CheckLetter_Request__Sequence__destroy(hangman_interfaces__srv__CheckLetter_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hangman_interfaces__srv__CheckLetter_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hangman_interfaces__srv__CheckLetter_Request__Sequence__are_equal(const hangman_interfaces__srv__CheckLetter_Request__Sequence * lhs, const hangman_interfaces__srv__CheckLetter_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hangman_interfaces__srv__CheckLetter_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hangman_interfaces__srv__CheckLetter_Request__Sequence__copy(
  const hangman_interfaces__srv__CheckLetter_Request__Sequence * input,
  hangman_interfaces__srv__CheckLetter_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hangman_interfaces__srv__CheckLetter_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hangman_interfaces__srv__CheckLetter_Request * data =
      (hangman_interfaces__srv__CheckLetter_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hangman_interfaces__srv__CheckLetter_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hangman_interfaces__srv__CheckLetter_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hangman_interfaces__srv__CheckLetter_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `updated_word_state`
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
hangman_interfaces__srv__CheckLetter_Response__init(hangman_interfaces__srv__CheckLetter_Response * msg)
{
  if (!msg) {
    return false;
  }
  // updated_word_state
  if (!rosidl_runtime_c__String__init(&msg->updated_word_state)) {
    hangman_interfaces__srv__CheckLetter_Response__fini(msg);
    return false;
  }
  // is_correct
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    hangman_interfaces__srv__CheckLetter_Response__fini(msg);
    return false;
  }
  return true;
}

void
hangman_interfaces__srv__CheckLetter_Response__fini(hangman_interfaces__srv__CheckLetter_Response * msg)
{
  if (!msg) {
    return;
  }
  // updated_word_state
  rosidl_runtime_c__String__fini(&msg->updated_word_state);
  // is_correct
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
hangman_interfaces__srv__CheckLetter_Response__are_equal(const hangman_interfaces__srv__CheckLetter_Response * lhs, const hangman_interfaces__srv__CheckLetter_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // updated_word_state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->updated_word_state), &(rhs->updated_word_state)))
  {
    return false;
  }
  // is_correct
  if (lhs->is_correct != rhs->is_correct) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
hangman_interfaces__srv__CheckLetter_Response__copy(
  const hangman_interfaces__srv__CheckLetter_Response * input,
  hangman_interfaces__srv__CheckLetter_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // updated_word_state
  if (!rosidl_runtime_c__String__copy(
      &(input->updated_word_state), &(output->updated_word_state)))
  {
    return false;
  }
  // is_correct
  output->is_correct = input->is_correct;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

hangman_interfaces__srv__CheckLetter_Response *
hangman_interfaces__srv__CheckLetter_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hangman_interfaces__srv__CheckLetter_Response * msg = (hangman_interfaces__srv__CheckLetter_Response *)allocator.allocate(sizeof(hangman_interfaces__srv__CheckLetter_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hangman_interfaces__srv__CheckLetter_Response));
  bool success = hangman_interfaces__srv__CheckLetter_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hangman_interfaces__srv__CheckLetter_Response__destroy(hangman_interfaces__srv__CheckLetter_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hangman_interfaces__srv__CheckLetter_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hangman_interfaces__srv__CheckLetter_Response__Sequence__init(hangman_interfaces__srv__CheckLetter_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hangman_interfaces__srv__CheckLetter_Response * data = NULL;

  if (size) {
    data = (hangman_interfaces__srv__CheckLetter_Response *)allocator.zero_allocate(size, sizeof(hangman_interfaces__srv__CheckLetter_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hangman_interfaces__srv__CheckLetter_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hangman_interfaces__srv__CheckLetter_Response__fini(&data[i - 1]);
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
hangman_interfaces__srv__CheckLetter_Response__Sequence__fini(hangman_interfaces__srv__CheckLetter_Response__Sequence * array)
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
      hangman_interfaces__srv__CheckLetter_Response__fini(&array->data[i]);
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

hangman_interfaces__srv__CheckLetter_Response__Sequence *
hangman_interfaces__srv__CheckLetter_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hangman_interfaces__srv__CheckLetter_Response__Sequence * array = (hangman_interfaces__srv__CheckLetter_Response__Sequence *)allocator.allocate(sizeof(hangman_interfaces__srv__CheckLetter_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hangman_interfaces__srv__CheckLetter_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hangman_interfaces__srv__CheckLetter_Response__Sequence__destroy(hangman_interfaces__srv__CheckLetter_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hangman_interfaces__srv__CheckLetter_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hangman_interfaces__srv__CheckLetter_Response__Sequence__are_equal(const hangman_interfaces__srv__CheckLetter_Response__Sequence * lhs, const hangman_interfaces__srv__CheckLetter_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hangman_interfaces__srv__CheckLetter_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hangman_interfaces__srv__CheckLetter_Response__Sequence__copy(
  const hangman_interfaces__srv__CheckLetter_Response__Sequence * input,
  hangman_interfaces__srv__CheckLetter_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hangman_interfaces__srv__CheckLetter_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hangman_interfaces__srv__CheckLetter_Response * data =
      (hangman_interfaces__srv__CheckLetter_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hangman_interfaces__srv__CheckLetter_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hangman_interfaces__srv__CheckLetter_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hangman_interfaces__srv__CheckLetter_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
