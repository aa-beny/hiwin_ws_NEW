// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from flexbe_msgs:msg/UICommand.idl
// generated code does not contain a copyright notice
#include "flexbe_msgs/msg/detail/ui_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `command`
// Member `key`
#include "rosidl_runtime_c/string_functions.h"

bool
flexbe_msgs__msg__UICommand__init(flexbe_msgs__msg__UICommand * msg)
{
  if (!msg) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__init(&msg->command)) {
    flexbe_msgs__msg__UICommand__fini(msg);
    return false;
  }
  // key
  if (!rosidl_runtime_c__String__init(&msg->key)) {
    flexbe_msgs__msg__UICommand__fini(msg);
    return false;
  }
  return true;
}

void
flexbe_msgs__msg__UICommand__fini(flexbe_msgs__msg__UICommand * msg)
{
  if (!msg) {
    return;
  }
  // command
  rosidl_runtime_c__String__fini(&msg->command);
  // key
  rosidl_runtime_c__String__fini(&msg->key);
}

bool
flexbe_msgs__msg__UICommand__are_equal(const flexbe_msgs__msg__UICommand * lhs, const flexbe_msgs__msg__UICommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->command), &(rhs->command)))
  {
    return false;
  }
  // key
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->key), &(rhs->key)))
  {
    return false;
  }
  return true;
}

bool
flexbe_msgs__msg__UICommand__copy(
  const flexbe_msgs__msg__UICommand * input,
  flexbe_msgs__msg__UICommand * output)
{
  if (!input || !output) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__copy(
      &(input->command), &(output->command)))
  {
    return false;
  }
  // key
  if (!rosidl_runtime_c__String__copy(
      &(input->key), &(output->key)))
  {
    return false;
  }
  return true;
}

flexbe_msgs__msg__UICommand *
flexbe_msgs__msg__UICommand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexbe_msgs__msg__UICommand * msg = (flexbe_msgs__msg__UICommand *)allocator.allocate(sizeof(flexbe_msgs__msg__UICommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(flexbe_msgs__msg__UICommand));
  bool success = flexbe_msgs__msg__UICommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
flexbe_msgs__msg__UICommand__destroy(flexbe_msgs__msg__UICommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    flexbe_msgs__msg__UICommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
flexbe_msgs__msg__UICommand__Sequence__init(flexbe_msgs__msg__UICommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexbe_msgs__msg__UICommand * data = NULL;

  if (size) {
    data = (flexbe_msgs__msg__UICommand *)allocator.zero_allocate(size, sizeof(flexbe_msgs__msg__UICommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = flexbe_msgs__msg__UICommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        flexbe_msgs__msg__UICommand__fini(&data[i - 1]);
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
flexbe_msgs__msg__UICommand__Sequence__fini(flexbe_msgs__msg__UICommand__Sequence * array)
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
      flexbe_msgs__msg__UICommand__fini(&array->data[i]);
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

flexbe_msgs__msg__UICommand__Sequence *
flexbe_msgs__msg__UICommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexbe_msgs__msg__UICommand__Sequence * array = (flexbe_msgs__msg__UICommand__Sequence *)allocator.allocate(sizeof(flexbe_msgs__msg__UICommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = flexbe_msgs__msg__UICommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
flexbe_msgs__msg__UICommand__Sequence__destroy(flexbe_msgs__msg__UICommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    flexbe_msgs__msg__UICommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
flexbe_msgs__msg__UICommand__Sequence__are_equal(const flexbe_msgs__msg__UICommand__Sequence * lhs, const flexbe_msgs__msg__UICommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!flexbe_msgs__msg__UICommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
flexbe_msgs__msg__UICommand__Sequence__copy(
  const flexbe_msgs__msg__UICommand__Sequence * input,
  flexbe_msgs__msg__UICommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(flexbe_msgs__msg__UICommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    flexbe_msgs__msg__UICommand * data =
      (flexbe_msgs__msg__UICommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!flexbe_msgs__msg__UICommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          flexbe_msgs__msg__UICommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!flexbe_msgs__msg__UICommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
