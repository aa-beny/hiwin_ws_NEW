// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from flexbe_msgs:msg/BehaviorSelection.idl
// generated code does not contain a copyright notice
#include "flexbe_msgs/msg/detail/behavior_selection__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `arg_keys`
// Member `arg_values`
// Member `input_keys`
// Member `input_values`
#include "rosidl_runtime_c/string_functions.h"
// Member `modifications`
#include "flexbe_msgs/msg/detail/behavior_modification__functions.h"

bool
flexbe_msgs__msg__BehaviorSelection__init(flexbe_msgs__msg__BehaviorSelection * msg)
{
  if (!msg) {
    return false;
  }
  // behavior_id
  // behavior_checksum
  // autonomy_level
  // arg_keys
  if (!rosidl_runtime_c__String__Sequence__init(&msg->arg_keys, 0)) {
    flexbe_msgs__msg__BehaviorSelection__fini(msg);
    return false;
  }
  // arg_values
  if (!rosidl_runtime_c__String__Sequence__init(&msg->arg_values, 0)) {
    flexbe_msgs__msg__BehaviorSelection__fini(msg);
    return false;
  }
  // input_keys
  if (!rosidl_runtime_c__String__Sequence__init(&msg->input_keys, 0)) {
    flexbe_msgs__msg__BehaviorSelection__fini(msg);
    return false;
  }
  // input_values
  if (!rosidl_runtime_c__String__Sequence__init(&msg->input_values, 0)) {
    flexbe_msgs__msg__BehaviorSelection__fini(msg);
    return false;
  }
  // modifications
  if (!flexbe_msgs__msg__BehaviorModification__Sequence__init(&msg->modifications, 0)) {
    flexbe_msgs__msg__BehaviorSelection__fini(msg);
    return false;
  }
  return true;
}

void
flexbe_msgs__msg__BehaviorSelection__fini(flexbe_msgs__msg__BehaviorSelection * msg)
{
  if (!msg) {
    return;
  }
  // behavior_id
  // behavior_checksum
  // autonomy_level
  // arg_keys
  rosidl_runtime_c__String__Sequence__fini(&msg->arg_keys);
  // arg_values
  rosidl_runtime_c__String__Sequence__fini(&msg->arg_values);
  // input_keys
  rosidl_runtime_c__String__Sequence__fini(&msg->input_keys);
  // input_values
  rosidl_runtime_c__String__Sequence__fini(&msg->input_values);
  // modifications
  flexbe_msgs__msg__BehaviorModification__Sequence__fini(&msg->modifications);
}

bool
flexbe_msgs__msg__BehaviorSelection__are_equal(const flexbe_msgs__msg__BehaviorSelection * lhs, const flexbe_msgs__msg__BehaviorSelection * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // behavior_id
  if (lhs->behavior_id != rhs->behavior_id) {
    return false;
  }
  // behavior_checksum
  if (lhs->behavior_checksum != rhs->behavior_checksum) {
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
  // input_keys
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->input_keys), &(rhs->input_keys)))
  {
    return false;
  }
  // input_values
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->input_values), &(rhs->input_values)))
  {
    return false;
  }
  // modifications
  if (!flexbe_msgs__msg__BehaviorModification__Sequence__are_equal(
      &(lhs->modifications), &(rhs->modifications)))
  {
    return false;
  }
  return true;
}

bool
flexbe_msgs__msg__BehaviorSelection__copy(
  const flexbe_msgs__msg__BehaviorSelection * input,
  flexbe_msgs__msg__BehaviorSelection * output)
{
  if (!input || !output) {
    return false;
  }
  // behavior_id
  output->behavior_id = input->behavior_id;
  // behavior_checksum
  output->behavior_checksum = input->behavior_checksum;
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
  // input_keys
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->input_keys), &(output->input_keys)))
  {
    return false;
  }
  // input_values
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->input_values), &(output->input_values)))
  {
    return false;
  }
  // modifications
  if (!flexbe_msgs__msg__BehaviorModification__Sequence__copy(
      &(input->modifications), &(output->modifications)))
  {
    return false;
  }
  return true;
}

flexbe_msgs__msg__BehaviorSelection *
flexbe_msgs__msg__BehaviorSelection__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexbe_msgs__msg__BehaviorSelection * msg = (flexbe_msgs__msg__BehaviorSelection *)allocator.allocate(sizeof(flexbe_msgs__msg__BehaviorSelection), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(flexbe_msgs__msg__BehaviorSelection));
  bool success = flexbe_msgs__msg__BehaviorSelection__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
flexbe_msgs__msg__BehaviorSelection__destroy(flexbe_msgs__msg__BehaviorSelection * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    flexbe_msgs__msg__BehaviorSelection__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
flexbe_msgs__msg__BehaviorSelection__Sequence__init(flexbe_msgs__msg__BehaviorSelection__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexbe_msgs__msg__BehaviorSelection * data = NULL;

  if (size) {
    data = (flexbe_msgs__msg__BehaviorSelection *)allocator.zero_allocate(size, sizeof(flexbe_msgs__msg__BehaviorSelection), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = flexbe_msgs__msg__BehaviorSelection__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        flexbe_msgs__msg__BehaviorSelection__fini(&data[i - 1]);
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
flexbe_msgs__msg__BehaviorSelection__Sequence__fini(flexbe_msgs__msg__BehaviorSelection__Sequence * array)
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
      flexbe_msgs__msg__BehaviorSelection__fini(&array->data[i]);
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

flexbe_msgs__msg__BehaviorSelection__Sequence *
flexbe_msgs__msg__BehaviorSelection__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexbe_msgs__msg__BehaviorSelection__Sequence * array = (flexbe_msgs__msg__BehaviorSelection__Sequence *)allocator.allocate(sizeof(flexbe_msgs__msg__BehaviorSelection__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = flexbe_msgs__msg__BehaviorSelection__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
flexbe_msgs__msg__BehaviorSelection__Sequence__destroy(flexbe_msgs__msg__BehaviorSelection__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    flexbe_msgs__msg__BehaviorSelection__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
flexbe_msgs__msg__BehaviorSelection__Sequence__are_equal(const flexbe_msgs__msg__BehaviorSelection__Sequence * lhs, const flexbe_msgs__msg__BehaviorSelection__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!flexbe_msgs__msg__BehaviorSelection__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
flexbe_msgs__msg__BehaviorSelection__Sequence__copy(
  const flexbe_msgs__msg__BehaviorSelection__Sequence * input,
  flexbe_msgs__msg__BehaviorSelection__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(flexbe_msgs__msg__BehaviorSelection);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    flexbe_msgs__msg__BehaviorSelection * data =
      (flexbe_msgs__msg__BehaviorSelection *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!flexbe_msgs__msg__BehaviorSelection__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          flexbe_msgs__msg__BehaviorSelection__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!flexbe_msgs__msg__BehaviorSelection__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
