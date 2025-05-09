// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from flexbe_msgs:msg/SynthesisRequest.idl
// generated code does not contain a copyright notice
#include "flexbe_msgs/msg/detail/synthesis_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `system`
// Member `goal`
// Member `initial_condition`
// Member `sm_outcomes`
#include "rosidl_runtime_c/string_functions.h"

bool
flexbe_msgs__msg__SynthesisRequest__init(flexbe_msgs__msg__SynthesisRequest * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    flexbe_msgs__msg__SynthesisRequest__fini(msg);
    return false;
  }
  // system
  if (!rosidl_runtime_c__String__init(&msg->system)) {
    flexbe_msgs__msg__SynthesisRequest__fini(msg);
    return false;
  }
  // goal
  if (!rosidl_runtime_c__String__init(&msg->goal)) {
    flexbe_msgs__msg__SynthesisRequest__fini(msg);
    return false;
  }
  // initial_condition
  if (!rosidl_runtime_c__String__init(&msg->initial_condition)) {
    flexbe_msgs__msg__SynthesisRequest__fini(msg);
    return false;
  }
  // sm_outcomes
  if (!rosidl_runtime_c__String__Sequence__init(&msg->sm_outcomes, 0)) {
    flexbe_msgs__msg__SynthesisRequest__fini(msg);
    return false;
  }
  return true;
}

void
flexbe_msgs__msg__SynthesisRequest__fini(flexbe_msgs__msg__SynthesisRequest * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // system
  rosidl_runtime_c__String__fini(&msg->system);
  // goal
  rosidl_runtime_c__String__fini(&msg->goal);
  // initial_condition
  rosidl_runtime_c__String__fini(&msg->initial_condition);
  // sm_outcomes
  rosidl_runtime_c__String__Sequence__fini(&msg->sm_outcomes);
}

bool
flexbe_msgs__msg__SynthesisRequest__are_equal(const flexbe_msgs__msg__SynthesisRequest * lhs, const flexbe_msgs__msg__SynthesisRequest * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // system
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->system), &(rhs->system)))
  {
    return false;
  }
  // goal
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  // initial_condition
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->initial_condition), &(rhs->initial_condition)))
  {
    return false;
  }
  // sm_outcomes
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->sm_outcomes), &(rhs->sm_outcomes)))
  {
    return false;
  }
  return true;
}

bool
flexbe_msgs__msg__SynthesisRequest__copy(
  const flexbe_msgs__msg__SynthesisRequest * input,
  flexbe_msgs__msg__SynthesisRequest * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // system
  if (!rosidl_runtime_c__String__copy(
      &(input->system), &(output->system)))
  {
    return false;
  }
  // goal
  if (!rosidl_runtime_c__String__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  // initial_condition
  if (!rosidl_runtime_c__String__copy(
      &(input->initial_condition), &(output->initial_condition)))
  {
    return false;
  }
  // sm_outcomes
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->sm_outcomes), &(output->sm_outcomes)))
  {
    return false;
  }
  return true;
}

flexbe_msgs__msg__SynthesisRequest *
flexbe_msgs__msg__SynthesisRequest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexbe_msgs__msg__SynthesisRequest * msg = (flexbe_msgs__msg__SynthesisRequest *)allocator.allocate(sizeof(flexbe_msgs__msg__SynthesisRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(flexbe_msgs__msg__SynthesisRequest));
  bool success = flexbe_msgs__msg__SynthesisRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
flexbe_msgs__msg__SynthesisRequest__destroy(flexbe_msgs__msg__SynthesisRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    flexbe_msgs__msg__SynthesisRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
flexbe_msgs__msg__SynthesisRequest__Sequence__init(flexbe_msgs__msg__SynthesisRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexbe_msgs__msg__SynthesisRequest * data = NULL;

  if (size) {
    data = (flexbe_msgs__msg__SynthesisRequest *)allocator.zero_allocate(size, sizeof(flexbe_msgs__msg__SynthesisRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = flexbe_msgs__msg__SynthesisRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        flexbe_msgs__msg__SynthesisRequest__fini(&data[i - 1]);
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
flexbe_msgs__msg__SynthesisRequest__Sequence__fini(flexbe_msgs__msg__SynthesisRequest__Sequence * array)
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
      flexbe_msgs__msg__SynthesisRequest__fini(&array->data[i]);
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

flexbe_msgs__msg__SynthesisRequest__Sequence *
flexbe_msgs__msg__SynthesisRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexbe_msgs__msg__SynthesisRequest__Sequence * array = (flexbe_msgs__msg__SynthesisRequest__Sequence *)allocator.allocate(sizeof(flexbe_msgs__msg__SynthesisRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = flexbe_msgs__msg__SynthesisRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
flexbe_msgs__msg__SynthesisRequest__Sequence__destroy(flexbe_msgs__msg__SynthesisRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    flexbe_msgs__msg__SynthesisRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
flexbe_msgs__msg__SynthesisRequest__Sequence__are_equal(const flexbe_msgs__msg__SynthesisRequest__Sequence * lhs, const flexbe_msgs__msg__SynthesisRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!flexbe_msgs__msg__SynthesisRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
flexbe_msgs__msg__SynthesisRequest__Sequence__copy(
  const flexbe_msgs__msg__SynthesisRequest__Sequence * input,
  flexbe_msgs__msg__SynthesisRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(flexbe_msgs__msg__SynthesisRequest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    flexbe_msgs__msg__SynthesisRequest * data =
      (flexbe_msgs__msg__SynthesisRequest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!flexbe_msgs__msg__SynthesisRequest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          flexbe_msgs__msg__SynthesisRequest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!flexbe_msgs__msg__SynthesisRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
