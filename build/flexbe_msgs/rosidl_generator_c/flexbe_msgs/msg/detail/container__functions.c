// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from flexbe_msgs:msg/Container.idl
// generated code does not contain a copyright notice
#include "flexbe_msgs/msg/detail/container__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `path`
// Member `children`
// Member `outcomes`
// Member `transitions`
#include "rosidl_runtime_c/string_functions.h"
// Member `autonomy`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
flexbe_msgs__msg__Container__init(flexbe_msgs__msg__Container * msg)
{
  if (!msg) {
    return false;
  }
  // path
  if (!rosidl_runtime_c__String__init(&msg->path)) {
    flexbe_msgs__msg__Container__fini(msg);
    return false;
  }
  // children
  if (!rosidl_runtime_c__String__Sequence__init(&msg->children, 0)) {
    flexbe_msgs__msg__Container__fini(msg);
    return false;
  }
  // outcomes
  if (!rosidl_runtime_c__String__Sequence__init(&msg->outcomes, 0)) {
    flexbe_msgs__msg__Container__fini(msg);
    return false;
  }
  // transitions
  if (!rosidl_runtime_c__String__Sequence__init(&msg->transitions, 0)) {
    flexbe_msgs__msg__Container__fini(msg);
    return false;
  }
  // autonomy
  if (!rosidl_runtime_c__int8__Sequence__init(&msg->autonomy, 0)) {
    flexbe_msgs__msg__Container__fini(msg);
    return false;
  }
  return true;
}

void
flexbe_msgs__msg__Container__fini(flexbe_msgs__msg__Container * msg)
{
  if (!msg) {
    return;
  }
  // path
  rosidl_runtime_c__String__fini(&msg->path);
  // children
  rosidl_runtime_c__String__Sequence__fini(&msg->children);
  // outcomes
  rosidl_runtime_c__String__Sequence__fini(&msg->outcomes);
  // transitions
  rosidl_runtime_c__String__Sequence__fini(&msg->transitions);
  // autonomy
  rosidl_runtime_c__int8__Sequence__fini(&msg->autonomy);
}

bool
flexbe_msgs__msg__Container__are_equal(const flexbe_msgs__msg__Container * lhs, const flexbe_msgs__msg__Container * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // path
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->path), &(rhs->path)))
  {
    return false;
  }
  // children
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->children), &(rhs->children)))
  {
    return false;
  }
  // outcomes
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->outcomes), &(rhs->outcomes)))
  {
    return false;
  }
  // transitions
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->transitions), &(rhs->transitions)))
  {
    return false;
  }
  // autonomy
  if (!rosidl_runtime_c__int8__Sequence__are_equal(
      &(lhs->autonomy), &(rhs->autonomy)))
  {
    return false;
  }
  return true;
}

bool
flexbe_msgs__msg__Container__copy(
  const flexbe_msgs__msg__Container * input,
  flexbe_msgs__msg__Container * output)
{
  if (!input || !output) {
    return false;
  }
  // path
  if (!rosidl_runtime_c__String__copy(
      &(input->path), &(output->path)))
  {
    return false;
  }
  // children
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->children), &(output->children)))
  {
    return false;
  }
  // outcomes
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->outcomes), &(output->outcomes)))
  {
    return false;
  }
  // transitions
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->transitions), &(output->transitions)))
  {
    return false;
  }
  // autonomy
  if (!rosidl_runtime_c__int8__Sequence__copy(
      &(input->autonomy), &(output->autonomy)))
  {
    return false;
  }
  return true;
}

flexbe_msgs__msg__Container *
flexbe_msgs__msg__Container__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexbe_msgs__msg__Container * msg = (flexbe_msgs__msg__Container *)allocator.allocate(sizeof(flexbe_msgs__msg__Container), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(flexbe_msgs__msg__Container));
  bool success = flexbe_msgs__msg__Container__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
flexbe_msgs__msg__Container__destroy(flexbe_msgs__msg__Container * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    flexbe_msgs__msg__Container__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
flexbe_msgs__msg__Container__Sequence__init(flexbe_msgs__msg__Container__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexbe_msgs__msg__Container * data = NULL;

  if (size) {
    data = (flexbe_msgs__msg__Container *)allocator.zero_allocate(size, sizeof(flexbe_msgs__msg__Container), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = flexbe_msgs__msg__Container__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        flexbe_msgs__msg__Container__fini(&data[i - 1]);
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
flexbe_msgs__msg__Container__Sequence__fini(flexbe_msgs__msg__Container__Sequence * array)
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
      flexbe_msgs__msg__Container__fini(&array->data[i]);
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

flexbe_msgs__msg__Container__Sequence *
flexbe_msgs__msg__Container__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexbe_msgs__msg__Container__Sequence * array = (flexbe_msgs__msg__Container__Sequence *)allocator.allocate(sizeof(flexbe_msgs__msg__Container__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = flexbe_msgs__msg__Container__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
flexbe_msgs__msg__Container__Sequence__destroy(flexbe_msgs__msg__Container__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    flexbe_msgs__msg__Container__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
flexbe_msgs__msg__Container__Sequence__are_equal(const flexbe_msgs__msg__Container__Sequence * lhs, const flexbe_msgs__msg__Container__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!flexbe_msgs__msg__Container__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
flexbe_msgs__msg__Container__Sequence__copy(
  const flexbe_msgs__msg__Container__Sequence * input,
  flexbe_msgs__msg__Container__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(flexbe_msgs__msg__Container);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    flexbe_msgs__msg__Container * data =
      (flexbe_msgs__msg__Container *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!flexbe_msgs__msg__Container__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          flexbe_msgs__msg__Container__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!flexbe_msgs__msg__Container__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
