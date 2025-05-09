// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from flexbe_msgs:msg/BEStatus.idl
// generated code does not contain a copyright notice
#include "flexbe_msgs/msg/detail/be_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `args`
#include "rosidl_runtime_c/string_functions.h"

bool
flexbe_msgs__msg__BEStatus__init(flexbe_msgs__msg__BEStatus * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    flexbe_msgs__msg__BEStatus__fini(msg);
    return false;
  }
  // behavior_id
  // code
  // args
  if (!rosidl_runtime_c__String__Sequence__init(&msg->args, 0)) {
    flexbe_msgs__msg__BEStatus__fini(msg);
    return false;
  }
  return true;
}

void
flexbe_msgs__msg__BEStatus__fini(flexbe_msgs__msg__BEStatus * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // behavior_id
  // code
  // args
  rosidl_runtime_c__String__Sequence__fini(&msg->args);
}

bool
flexbe_msgs__msg__BEStatus__are_equal(const flexbe_msgs__msg__BEStatus * lhs, const flexbe_msgs__msg__BEStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  // behavior_id
  if (lhs->behavior_id != rhs->behavior_id) {
    return false;
  }
  // code
  if (lhs->code != rhs->code) {
    return false;
  }
  // args
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->args), &(rhs->args)))
  {
    return false;
  }
  return true;
}

bool
flexbe_msgs__msg__BEStatus__copy(
  const flexbe_msgs__msg__BEStatus * input,
  flexbe_msgs__msg__BEStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // behavior_id
  output->behavior_id = input->behavior_id;
  // code
  output->code = input->code;
  // args
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->args), &(output->args)))
  {
    return false;
  }
  return true;
}

flexbe_msgs__msg__BEStatus *
flexbe_msgs__msg__BEStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexbe_msgs__msg__BEStatus * msg = (flexbe_msgs__msg__BEStatus *)allocator.allocate(sizeof(flexbe_msgs__msg__BEStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(flexbe_msgs__msg__BEStatus));
  bool success = flexbe_msgs__msg__BEStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
flexbe_msgs__msg__BEStatus__destroy(flexbe_msgs__msg__BEStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    flexbe_msgs__msg__BEStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
flexbe_msgs__msg__BEStatus__Sequence__init(flexbe_msgs__msg__BEStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexbe_msgs__msg__BEStatus * data = NULL;

  if (size) {
    data = (flexbe_msgs__msg__BEStatus *)allocator.zero_allocate(size, sizeof(flexbe_msgs__msg__BEStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = flexbe_msgs__msg__BEStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        flexbe_msgs__msg__BEStatus__fini(&data[i - 1]);
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
flexbe_msgs__msg__BEStatus__Sequence__fini(flexbe_msgs__msg__BEStatus__Sequence * array)
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
      flexbe_msgs__msg__BEStatus__fini(&array->data[i]);
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

flexbe_msgs__msg__BEStatus__Sequence *
flexbe_msgs__msg__BEStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexbe_msgs__msg__BEStatus__Sequence * array = (flexbe_msgs__msg__BEStatus__Sequence *)allocator.allocate(sizeof(flexbe_msgs__msg__BEStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = flexbe_msgs__msg__BEStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
flexbe_msgs__msg__BEStatus__Sequence__destroy(flexbe_msgs__msg__BEStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    flexbe_msgs__msg__BEStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
flexbe_msgs__msg__BEStatus__Sequence__are_equal(const flexbe_msgs__msg__BEStatus__Sequence * lhs, const flexbe_msgs__msg__BEStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!flexbe_msgs__msg__BEStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
flexbe_msgs__msg__BEStatus__Sequence__copy(
  const flexbe_msgs__msg__BEStatus__Sequence * input,
  flexbe_msgs__msg__BEStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(flexbe_msgs__msg__BEStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    flexbe_msgs__msg__BEStatus * data =
      (flexbe_msgs__msg__BEStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!flexbe_msgs__msg__BEStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          flexbe_msgs__msg__BEStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!flexbe_msgs__msg__BEStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
