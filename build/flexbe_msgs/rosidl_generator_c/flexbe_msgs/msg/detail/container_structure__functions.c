// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from flexbe_msgs:msg/ContainerStructure.idl
// generated code does not contain a copyright notice
#include "flexbe_msgs/msg/detail/container_structure__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `containers`
#include "flexbe_msgs/msg/detail/container__functions.h"

bool
flexbe_msgs__msg__ContainerStructure__init(flexbe_msgs__msg__ContainerStructure * msg)
{
  if (!msg) {
    return false;
  }
  // behavior_id
  // containers
  if (!flexbe_msgs__msg__Container__Sequence__init(&msg->containers, 0)) {
    flexbe_msgs__msg__ContainerStructure__fini(msg);
    return false;
  }
  return true;
}

void
flexbe_msgs__msg__ContainerStructure__fini(flexbe_msgs__msg__ContainerStructure * msg)
{
  if (!msg) {
    return;
  }
  // behavior_id
  // containers
  flexbe_msgs__msg__Container__Sequence__fini(&msg->containers);
}

bool
flexbe_msgs__msg__ContainerStructure__are_equal(const flexbe_msgs__msg__ContainerStructure * lhs, const flexbe_msgs__msg__ContainerStructure * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // behavior_id
  if (lhs->behavior_id != rhs->behavior_id) {
    return false;
  }
  // containers
  if (!flexbe_msgs__msg__Container__Sequence__are_equal(
      &(lhs->containers), &(rhs->containers)))
  {
    return false;
  }
  return true;
}

bool
flexbe_msgs__msg__ContainerStructure__copy(
  const flexbe_msgs__msg__ContainerStructure * input,
  flexbe_msgs__msg__ContainerStructure * output)
{
  if (!input || !output) {
    return false;
  }
  // behavior_id
  output->behavior_id = input->behavior_id;
  // containers
  if (!flexbe_msgs__msg__Container__Sequence__copy(
      &(input->containers), &(output->containers)))
  {
    return false;
  }
  return true;
}

flexbe_msgs__msg__ContainerStructure *
flexbe_msgs__msg__ContainerStructure__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexbe_msgs__msg__ContainerStructure * msg = (flexbe_msgs__msg__ContainerStructure *)allocator.allocate(sizeof(flexbe_msgs__msg__ContainerStructure), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(flexbe_msgs__msg__ContainerStructure));
  bool success = flexbe_msgs__msg__ContainerStructure__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
flexbe_msgs__msg__ContainerStructure__destroy(flexbe_msgs__msg__ContainerStructure * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    flexbe_msgs__msg__ContainerStructure__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
flexbe_msgs__msg__ContainerStructure__Sequence__init(flexbe_msgs__msg__ContainerStructure__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexbe_msgs__msg__ContainerStructure * data = NULL;

  if (size) {
    data = (flexbe_msgs__msg__ContainerStructure *)allocator.zero_allocate(size, sizeof(flexbe_msgs__msg__ContainerStructure), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = flexbe_msgs__msg__ContainerStructure__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        flexbe_msgs__msg__ContainerStructure__fini(&data[i - 1]);
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
flexbe_msgs__msg__ContainerStructure__Sequence__fini(flexbe_msgs__msg__ContainerStructure__Sequence * array)
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
      flexbe_msgs__msg__ContainerStructure__fini(&array->data[i]);
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

flexbe_msgs__msg__ContainerStructure__Sequence *
flexbe_msgs__msg__ContainerStructure__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexbe_msgs__msg__ContainerStructure__Sequence * array = (flexbe_msgs__msg__ContainerStructure__Sequence *)allocator.allocate(sizeof(flexbe_msgs__msg__ContainerStructure__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = flexbe_msgs__msg__ContainerStructure__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
flexbe_msgs__msg__ContainerStructure__Sequence__destroy(flexbe_msgs__msg__ContainerStructure__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    flexbe_msgs__msg__ContainerStructure__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
flexbe_msgs__msg__ContainerStructure__Sequence__are_equal(const flexbe_msgs__msg__ContainerStructure__Sequence * lhs, const flexbe_msgs__msg__ContainerStructure__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!flexbe_msgs__msg__ContainerStructure__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
flexbe_msgs__msg__ContainerStructure__Sequence__copy(
  const flexbe_msgs__msg__ContainerStructure__Sequence * input,
  flexbe_msgs__msg__ContainerStructure__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(flexbe_msgs__msg__ContainerStructure);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    flexbe_msgs__msg__ContainerStructure * data =
      (flexbe_msgs__msg__ContainerStructure *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!flexbe_msgs__msg__ContainerStructure__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          flexbe_msgs__msg__ContainerStructure__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!flexbe_msgs__msg__ContainerStructure__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
