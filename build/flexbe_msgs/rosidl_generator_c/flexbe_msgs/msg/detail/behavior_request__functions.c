// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from flexbe_msgs:msg/BehaviorRequest.idl
// generated code does not contain a copyright notice
#include "flexbe_msgs/msg/detail/behavior_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `behavior_name`
// Member `arg_keys`
// Member `arg_values`
#include "rosidl_runtime_c/string_functions.h"
// Member `structure`
#include "flexbe_msgs/msg/detail/container__functions.h"

bool
flexbe_msgs__msg__BehaviorRequest__init(flexbe_msgs__msg__BehaviorRequest * msg)
{
  if (!msg) {
    return false;
  }
  // behavior_name
  if (!rosidl_runtime_c__String__init(&msg->behavior_name)) {
    flexbe_msgs__msg__BehaviorRequest__fini(msg);
    return false;
  }
  // autonomy_level
  // arg_keys
  if (!rosidl_runtime_c__String__Sequence__init(&msg->arg_keys, 0)) {
    flexbe_msgs__msg__BehaviorRequest__fini(msg);
    return false;
  }
  // arg_values
  if (!rosidl_runtime_c__String__Sequence__init(&msg->arg_values, 0)) {
    flexbe_msgs__msg__BehaviorRequest__fini(msg);
    return false;
  }
  // structure
  if (!flexbe_msgs__msg__Container__Sequence__init(&msg->structure, 0)) {
    flexbe_msgs__msg__BehaviorRequest__fini(msg);
    return false;
  }
  return true;
}

void
flexbe_msgs__msg__BehaviorRequest__fini(flexbe_msgs__msg__BehaviorRequest * msg)
{
  if (!msg) {
    return;
  }
  // behavior_name
  rosidl_runtime_c__String__fini(&msg->behavior_name);
  // autonomy_level
  // arg_keys
  rosidl_runtime_c__String__Sequence__fini(&msg->arg_keys);
  // arg_values
  rosidl_runtime_c__String__Sequence__fini(&msg->arg_values);
  // structure
  flexbe_msgs__msg__Container__Sequence__fini(&msg->structure);
}

bool
flexbe_msgs__msg__BehaviorRequest__are_equal(const flexbe_msgs__msg__BehaviorRequest * lhs, const flexbe_msgs__msg__BehaviorRequest * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // behavior_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->behavior_name), &(rhs->behavior_name)))
  {
    return false;
  }
  // autonomy_level
  if (lhs->autonomy_level != rhs->autonomy_level) {
    return false;
  }
  // arg_keys
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->arg_keys), &(rhs->arg_keys)))
  {
    return false;
  }
  // arg_values
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->arg_values), &(rhs->arg_values)))
  {
    return false;
  }
  // structure
  if (!flexbe_msgs__msg__Container__Sequence__are_equal(
      &(lhs->structure), &(rhs->structure)))
  {
    return false;
  }
  return true;
}

bool
flexbe_msgs__msg__BehaviorRequest__copy(
  const flexbe_msgs__msg__BehaviorRequest * input,
  flexbe_msgs__msg__BehaviorRequest * output)
{
  if (!input || !output) {
    return false;
  }
  // behavior_name
  if (!rosidl_runtime_c__String__copy(
      &(input->behavior_name), &(output->behavior_name)))
  {
    return false;
  }
  // autonomy_level
  output->autonomy_level = input->autonomy_level;
  // arg_keys
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->arg_keys), &(output->arg_keys)))
  {
    return false;
  }
  // arg_values
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->arg_values), &(output->arg_values)))
  {
    return false;
  }
  // structure
  if (!flexbe_msgs__msg__Container__Sequence__copy(
      &(input->structure), &(output->structure)))
  {
    return false;
  }
  return true;
}

flexbe_msgs__msg__BehaviorRequest *
flexbe_msgs__msg__BehaviorRequest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexbe_msgs__msg__BehaviorRequest * msg = (flexbe_msgs__msg__BehaviorRequest *)allocator.allocate(sizeof(flexbe_msgs__msg__BehaviorRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(flexbe_msgs__msg__BehaviorRequest));
  bool success = flexbe_msgs__msg__BehaviorRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
flexbe_msgs__msg__BehaviorRequest__destroy(flexbe_msgs__msg__BehaviorRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    flexbe_msgs__msg__BehaviorRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
flexbe_msgs__msg__BehaviorRequest__Sequence__init(flexbe_msgs__msg__BehaviorRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexbe_msgs__msg__BehaviorRequest * data = NULL;

  if (size) {
    data = (flexbe_msgs__msg__BehaviorRequest *)allocator.zero_allocate(size, sizeof(flexbe_msgs__msg__BehaviorRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = flexbe_msgs__msg__BehaviorRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        flexbe_msgs__msg__BehaviorRequest__fini(&data[i - 1]);
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
flexbe_msgs__msg__BehaviorRequest__Sequence__fini(flexbe_msgs__msg__BehaviorRequest__Sequence * array)
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
      flexbe_msgs__msg__BehaviorRequest__fini(&array->data[i]);
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

flexbe_msgs__msg__BehaviorRequest__Sequence *
flexbe_msgs__msg__BehaviorRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexbe_msgs__msg__BehaviorRequest__Sequence * array = (flexbe_msgs__msg__BehaviorRequest__Sequence *)allocator.allocate(sizeof(flexbe_msgs__msg__BehaviorRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = flexbe_msgs__msg__BehaviorRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
flexbe_msgs__msg__BehaviorRequest__Sequence__destroy(flexbe_msgs__msg__BehaviorRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    flexbe_msgs__msg__BehaviorRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
flexbe_msgs__msg__BehaviorRequest__Sequence__are_equal(const flexbe_msgs__msg__BehaviorRequest__Sequence * lhs, const flexbe_msgs__msg__BehaviorRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!flexbe_msgs__msg__BehaviorRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
flexbe_msgs__msg__BehaviorRequest__Sequence__copy(
  const flexbe_msgs__msg__BehaviorRequest__Sequence * input,
  flexbe_msgs__msg__BehaviorRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(flexbe_msgs__msg__BehaviorRequest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    flexbe_msgs__msg__BehaviorRequest * data =
      (flexbe_msgs__msg__BehaviorRequest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!flexbe_msgs__msg__BehaviorRequest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          flexbe_msgs__msg__BehaviorRequest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!flexbe_msgs__msg__BehaviorRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
