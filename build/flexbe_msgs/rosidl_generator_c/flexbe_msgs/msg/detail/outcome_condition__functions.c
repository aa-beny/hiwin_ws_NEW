// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from flexbe_msgs:msg/OutcomeCondition.idl
// generated code does not contain a copyright notice
#include "flexbe_msgs/msg/detail/outcome_condition__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `state_name`
// Member `state_outcome`
#include "rosidl_runtime_c/string_functions.h"

bool
flexbe_msgs__msg__OutcomeCondition__init(flexbe_msgs__msg__OutcomeCondition * msg)
{
  if (!msg) {
    return false;
  }
  // state_name
  if (!rosidl_runtime_c__String__Sequence__init(&msg->state_name, 0)) {
    flexbe_msgs__msg__OutcomeCondition__fini(msg);
    return false;
  }
  // state_outcome
  if (!rosidl_runtime_c__String__Sequence__init(&msg->state_outcome, 0)) {
    flexbe_msgs__msg__OutcomeCondition__fini(msg);
    return false;
  }
  return true;
}

void
flexbe_msgs__msg__OutcomeCondition__fini(flexbe_msgs__msg__OutcomeCondition * msg)
{
  if (!msg) {
    return;
  }
  // state_name
  rosidl_runtime_c__String__Sequence__fini(&msg->state_name);
  // state_outcome
  rosidl_runtime_c__String__Sequence__fini(&msg->state_outcome);
}

bool
flexbe_msgs__msg__OutcomeCondition__are_equal(const flexbe_msgs__msg__OutcomeCondition * lhs, const flexbe_msgs__msg__OutcomeCondition * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // state_name
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->state_name), &(rhs->state_name)))
  {
    return false;
  }
  // state_outcome
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->state_outcome), &(rhs->state_outcome)))
  {
    return false;
  }
  return true;
}

bool
flexbe_msgs__msg__OutcomeCondition__copy(
  const flexbe_msgs__msg__OutcomeCondition * input,
  flexbe_msgs__msg__OutcomeCondition * output)
{
  if (!input || !output) {
    return false;
  }
  // state_name
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->state_name), &(output->state_name)))
  {
    return false;
  }
  // state_outcome
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->state_outcome), &(output->state_outcome)))
  {
    return false;
  }
  return true;
}

flexbe_msgs__msg__OutcomeCondition *
flexbe_msgs__msg__OutcomeCondition__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexbe_msgs__msg__OutcomeCondition * msg = (flexbe_msgs__msg__OutcomeCondition *)allocator.allocate(sizeof(flexbe_msgs__msg__OutcomeCondition), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(flexbe_msgs__msg__OutcomeCondition));
  bool success = flexbe_msgs__msg__OutcomeCondition__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
flexbe_msgs__msg__OutcomeCondition__destroy(flexbe_msgs__msg__OutcomeCondition * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    flexbe_msgs__msg__OutcomeCondition__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
flexbe_msgs__msg__OutcomeCondition__Sequence__init(flexbe_msgs__msg__OutcomeCondition__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexbe_msgs__msg__OutcomeCondition * data = NULL;

  if (size) {
    data = (flexbe_msgs__msg__OutcomeCondition *)allocator.zero_allocate(size, sizeof(flexbe_msgs__msg__OutcomeCondition), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = flexbe_msgs__msg__OutcomeCondition__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        flexbe_msgs__msg__OutcomeCondition__fini(&data[i - 1]);
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
flexbe_msgs__msg__OutcomeCondition__Sequence__fini(flexbe_msgs__msg__OutcomeCondition__Sequence * array)
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
      flexbe_msgs__msg__OutcomeCondition__fini(&array->data[i]);
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

flexbe_msgs__msg__OutcomeCondition__Sequence *
flexbe_msgs__msg__OutcomeCondition__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexbe_msgs__msg__OutcomeCondition__Sequence * array = (flexbe_msgs__msg__OutcomeCondition__Sequence *)allocator.allocate(sizeof(flexbe_msgs__msg__OutcomeCondition__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = flexbe_msgs__msg__OutcomeCondition__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
flexbe_msgs__msg__OutcomeCondition__Sequence__destroy(flexbe_msgs__msg__OutcomeCondition__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    flexbe_msgs__msg__OutcomeCondition__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
flexbe_msgs__msg__OutcomeCondition__Sequence__are_equal(const flexbe_msgs__msg__OutcomeCondition__Sequence * lhs, const flexbe_msgs__msg__OutcomeCondition__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!flexbe_msgs__msg__OutcomeCondition__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
flexbe_msgs__msg__OutcomeCondition__Sequence__copy(
  const flexbe_msgs__msg__OutcomeCondition__Sequence * input,
  flexbe_msgs__msg__OutcomeCondition__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(flexbe_msgs__msg__OutcomeCondition);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    flexbe_msgs__msg__OutcomeCondition * data =
      (flexbe_msgs__msg__OutcomeCondition *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!flexbe_msgs__msg__OutcomeCondition__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          flexbe_msgs__msg__OutcomeCondition__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!flexbe_msgs__msg__OutcomeCondition__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
