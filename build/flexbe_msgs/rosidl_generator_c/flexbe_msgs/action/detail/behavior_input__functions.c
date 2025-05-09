// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from flexbe_msgs:action/BehaviorInput.idl
// generated code does not contain a copyright notice
#include "flexbe_msgs/action/detail/behavior_input__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `msg`
#include "rosidl_runtime_c/string_functions.h"

bool
flexbe_msgs__action__BehaviorInput_Goal__init(flexbe_msgs__action__BehaviorInput_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // request_type
  // msg
  if (!rosidl_runtime_c__String__init(&msg->msg)) {
    flexbe_msgs__action__BehaviorInput_Goal__fini(msg);
    return false;
  }
  return true;
}

void
flexbe_msgs__action__BehaviorInput_Goal__fini(flexbe_msgs__action__BehaviorInput_Goal * msg)
{
  if (!msg) {
    return;
  }
  // request_type
  // msg
  rosidl_runtime_c__String__fini(&msg->msg);
}

bool
flexbe_msgs__action__BehaviorInput_Goal__are_equal(const flexbe_msgs__action__BehaviorInput_Goal * lhs, const flexbe_msgs__action__BehaviorInput_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // request_type
  if (lhs->request_type != rhs->request_type) {
    return false;
  }
  // msg
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->msg), &(rhs->msg)))
  {
    return false;
  }
  return true;
}

bool
flexbe_msgs__action__BehaviorInput_Goal__copy(
  const flexbe_msgs__action__BehaviorInput_Goal * input,
  flexbe_msgs__action__BehaviorInput_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // request_type
  output->request_type = input->request_type;
  // msg
  if (!rosidl_runtime_c__String__copy(
      &(input->msg), &(output->msg)))
  {
    return false;
  }
  return true;
}

flexbe_msgs__action__BehaviorInput_Goal *
flexbe_msgs__action__BehaviorInput_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexbe_msgs__action__BehaviorInput_Goal * msg = (flexbe_msgs__action__BehaviorInput_Goal *)allocator.allocate(sizeof(flexbe_msgs__action__BehaviorInput_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(flexbe_msgs__action__BehaviorInput_Goal));
  bool success = flexbe_msgs__action__BehaviorInput_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
flexbe_msgs__action__BehaviorInput_Goal__destroy(flexbe_msgs__action__BehaviorInput_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    flexbe_msgs__action__BehaviorInput_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
flexbe_msgs__action__BehaviorInput_Goal__Sequence__init(flexbe_msgs__action__BehaviorInput_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexbe_msgs__action__BehaviorInput_Goal * data = NULL;

  if (size) {
    data = (flexbe_msgs__action__BehaviorInput_Goal *)allocator.zero_allocate(size, sizeof(flexbe_msgs__action__BehaviorInput_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = flexbe_msgs__action__BehaviorInput_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        flexbe_msgs__action__BehaviorInput_Goal__fini(&data[i - 1]);
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
flexbe_msgs__action__BehaviorInput_Goal__Sequence__fini(flexbe_msgs__action__BehaviorInput_Goal__Sequence * array)
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
      flexbe_msgs__action__BehaviorInput_Goal__fini(&array->data[i]);
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

flexbe_msgs__action__BehaviorInput_Goal__Sequence *
flexbe_msgs__action__BehaviorInput_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexbe_msgs__action__BehaviorInput_Goal__Sequence * array = (flexbe_msgs__action__BehaviorInput_Goal__Sequence *)allocator.allocate(sizeof(flexbe_msgs__action__BehaviorInput_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = flexbe_msgs__action__BehaviorInput_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
flexbe_msgs__action__BehaviorInput_Goal__Sequence__destroy(flexbe_msgs__action__BehaviorInput_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    flexbe_msgs__action__BehaviorInput_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
flexbe_msgs__action__BehaviorInput_Goal__Sequence__are_equal(const flexbe_msgs__action__BehaviorInput_Goal__Sequence * lhs, const flexbe_msgs__action__BehaviorInput_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!flexbe_msgs__action__BehaviorInput_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
flexbe_msgs__action__BehaviorInput_Goal__Sequence__copy(
  const flexbe_msgs__action__BehaviorInput_Goal__Sequence * input,
  flexbe_msgs__action__BehaviorInput_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(flexbe_msgs__action__BehaviorInput_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    flexbe_msgs__action__BehaviorInput_Goal * data =
      (flexbe_msgs__action__BehaviorInput_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!flexbe_msgs__action__BehaviorInput_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          flexbe_msgs__action__BehaviorInput_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!flexbe_msgs__action__BehaviorInput_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `data`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
flexbe_msgs__action__BehaviorInput_Result__init(flexbe_msgs__action__BehaviorInput_Result * msg)
{
  if (!msg) {
    return false;
  }
  // result_code
  // data
  if (!rosidl_runtime_c__String__init(&msg->data)) {
    flexbe_msgs__action__BehaviorInput_Result__fini(msg);
    return false;
  }
  return true;
}

void
flexbe_msgs__action__BehaviorInput_Result__fini(flexbe_msgs__action__BehaviorInput_Result * msg)
{
  if (!msg) {
    return;
  }
  // result_code
  // data
  rosidl_runtime_c__String__fini(&msg->data);
}

bool
flexbe_msgs__action__BehaviorInput_Result__are_equal(const flexbe_msgs__action__BehaviorInput_Result * lhs, const flexbe_msgs__action__BehaviorInput_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result_code
  if (lhs->result_code != rhs->result_code) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
flexbe_msgs__action__BehaviorInput_Result__copy(
  const flexbe_msgs__action__BehaviorInput_Result * input,
  flexbe_msgs__action__BehaviorInput_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // result_code
  output->result_code = input->result_code;
  // data
  if (!rosidl_runtime_c__String__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

flexbe_msgs__action__BehaviorInput_Result *
flexbe_msgs__action__BehaviorInput_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexbe_msgs__action__BehaviorInput_Result * msg = (flexbe_msgs__action__BehaviorInput_Result *)allocator.allocate(sizeof(flexbe_msgs__action__BehaviorInput_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(flexbe_msgs__action__BehaviorInput_Result));
  bool success = flexbe_msgs__action__BehaviorInput_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
flexbe_msgs__action__BehaviorInput_Result__destroy(flexbe_msgs__action__BehaviorInput_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    flexbe_msgs__action__BehaviorInput_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
flexbe_msgs__action__BehaviorInput_Result__Sequence__init(flexbe_msgs__action__BehaviorInput_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexbe_msgs__action__BehaviorInput_Result * data = NULL;

  if (size) {
    data = (flexbe_msgs__action__BehaviorInput_Result *)allocator.zero_allocate(size, sizeof(flexbe_msgs__action__BehaviorInput_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = flexbe_msgs__action__BehaviorInput_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        flexbe_msgs__action__BehaviorInput_Result__fini(&data[i - 1]);
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
flexbe_msgs__action__BehaviorInput_Result__Sequence__fini(flexbe_msgs__action__BehaviorInput_Result__Sequence * array)
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
      flexbe_msgs__action__BehaviorInput_Result__fini(&array->data[i]);
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

flexbe_msgs__action__BehaviorInput_Result__Sequence *
flexbe_msgs__action__BehaviorInput_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexbe_msgs__action__BehaviorInput_Result__Sequence * array = (flexbe_msgs__action__BehaviorInput_Result__Sequence *)allocator.allocate(sizeof(flexbe_msgs__action__BehaviorInput_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = flexbe_msgs__action__BehaviorInput_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
flexbe_msgs__action__BehaviorInput_Result__Sequence__destroy(flexbe_msgs__action__BehaviorInput_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    flexbe_msgs__action__BehaviorInput_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
flexbe_msgs__action__BehaviorInput_Result__Sequence__are_equal(const flexbe_msgs__action__BehaviorInput_Result__Sequence * lhs, const flexbe_msgs__action__BehaviorInput_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!flexbe_msgs__action__BehaviorInput_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
flexbe_msgs__action__BehaviorInput_Result__Sequence__copy(
  const flexbe_msgs__action__BehaviorInput_Result__Sequence * input,
  flexbe_msgs__action__BehaviorInput_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(flexbe_msgs__action__BehaviorInput_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    flexbe_msgs__action__BehaviorInput_Result * data =
      (flexbe_msgs__action__BehaviorInput_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!flexbe_msgs__action__BehaviorInput_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          flexbe_msgs__action__BehaviorInput_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!flexbe_msgs__action__BehaviorInput_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
flexbe_msgs__action__BehaviorInput_Feedback__init(flexbe_msgs__action__BehaviorInput_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
flexbe_msgs__action__BehaviorInput_Feedback__fini(flexbe_msgs__action__BehaviorInput_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
flexbe_msgs__action__BehaviorInput_Feedback__are_equal(const flexbe_msgs__action__BehaviorInput_Feedback * lhs, const flexbe_msgs__action__BehaviorInput_Feedback * rhs)
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
flexbe_msgs__action__BehaviorInput_Feedback__copy(
  const flexbe_msgs__action__BehaviorInput_Feedback * input,
  flexbe_msgs__action__BehaviorInput_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

flexbe_msgs__action__BehaviorInput_Feedback *
flexbe_msgs__action__BehaviorInput_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexbe_msgs__action__BehaviorInput_Feedback * msg = (flexbe_msgs__action__BehaviorInput_Feedback *)allocator.allocate(sizeof(flexbe_msgs__action__BehaviorInput_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(flexbe_msgs__action__BehaviorInput_Feedback));
  bool success = flexbe_msgs__action__BehaviorInput_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
flexbe_msgs__action__BehaviorInput_Feedback__destroy(flexbe_msgs__action__BehaviorInput_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    flexbe_msgs__action__BehaviorInput_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
flexbe_msgs__action__BehaviorInput_Feedback__Sequence__init(flexbe_msgs__action__BehaviorInput_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexbe_msgs__action__BehaviorInput_Feedback * data = NULL;

  if (size) {
    data = (flexbe_msgs__action__BehaviorInput_Feedback *)allocator.zero_allocate(size, sizeof(flexbe_msgs__action__BehaviorInput_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = flexbe_msgs__action__BehaviorInput_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        flexbe_msgs__action__BehaviorInput_Feedback__fini(&data[i - 1]);
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
flexbe_msgs__action__BehaviorInput_Feedback__Sequence__fini(flexbe_msgs__action__BehaviorInput_Feedback__Sequence * array)
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
      flexbe_msgs__action__BehaviorInput_Feedback__fini(&array->data[i]);
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

flexbe_msgs__action__BehaviorInput_Feedback__Sequence *
flexbe_msgs__action__BehaviorInput_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexbe_msgs__action__BehaviorInput_Feedback__Sequence * array = (flexbe_msgs__action__BehaviorInput_Feedback__Sequence *)allocator.allocate(sizeof(flexbe_msgs__action__BehaviorInput_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = flexbe_msgs__action__BehaviorInput_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
flexbe_msgs__action__BehaviorInput_Feedback__Sequence__destroy(flexbe_msgs__action__BehaviorInput_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    flexbe_msgs__action__BehaviorInput_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
flexbe_msgs__action__BehaviorInput_Feedback__Sequence__are_equal(const flexbe_msgs__action__BehaviorInput_Feedback__Sequence * lhs, const flexbe_msgs__action__BehaviorInput_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!flexbe_msgs__action__BehaviorInput_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
flexbe_msgs__action__BehaviorInput_Feedback__Sequence__copy(
  const flexbe_msgs__action__BehaviorInput_Feedback__Sequence * input,
  flexbe_msgs__action__BehaviorInput_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(flexbe_msgs__action__BehaviorInput_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    flexbe_msgs__action__BehaviorInput_Feedback * data =
      (flexbe_msgs__action__BehaviorInput_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!flexbe_msgs__action__BehaviorInput_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          flexbe_msgs__action__BehaviorInput_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!flexbe_msgs__action__BehaviorInput_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "flexbe_msgs/action/detail/behavior_input__functions.h"

bool
flexbe_msgs__action__BehaviorInput_SendGoal_Request__init(flexbe_msgs__action__BehaviorInput_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    flexbe_msgs__action__BehaviorInput_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!flexbe_msgs__action__BehaviorInput_Goal__init(&msg->goal)) {
    flexbe_msgs__action__BehaviorInput_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
flexbe_msgs__action__BehaviorInput_SendGoal_Request__fini(flexbe_msgs__action__BehaviorInput_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  flexbe_msgs__action__BehaviorInput_Goal__fini(&msg->goal);
}

bool
flexbe_msgs__action__BehaviorInput_SendGoal_Request__are_equal(const flexbe_msgs__action__BehaviorInput_SendGoal_Request * lhs, const flexbe_msgs__action__BehaviorInput_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!flexbe_msgs__action__BehaviorInput_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
flexbe_msgs__action__BehaviorInput_SendGoal_Request__copy(
  const flexbe_msgs__action__BehaviorInput_SendGoal_Request * input,
  flexbe_msgs__action__BehaviorInput_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!flexbe_msgs__action__BehaviorInput_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

flexbe_msgs__action__BehaviorInput_SendGoal_Request *
flexbe_msgs__action__BehaviorInput_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexbe_msgs__action__BehaviorInput_SendGoal_Request * msg = (flexbe_msgs__action__BehaviorInput_SendGoal_Request *)allocator.allocate(sizeof(flexbe_msgs__action__BehaviorInput_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(flexbe_msgs__action__BehaviorInput_SendGoal_Request));
  bool success = flexbe_msgs__action__BehaviorInput_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
flexbe_msgs__action__BehaviorInput_SendGoal_Request__destroy(flexbe_msgs__action__BehaviorInput_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    flexbe_msgs__action__BehaviorInput_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
flexbe_msgs__action__BehaviorInput_SendGoal_Request__Sequence__init(flexbe_msgs__action__BehaviorInput_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexbe_msgs__action__BehaviorInput_SendGoal_Request * data = NULL;

  if (size) {
    data = (flexbe_msgs__action__BehaviorInput_SendGoal_Request *)allocator.zero_allocate(size, sizeof(flexbe_msgs__action__BehaviorInput_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = flexbe_msgs__action__BehaviorInput_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        flexbe_msgs__action__BehaviorInput_SendGoal_Request__fini(&data[i - 1]);
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
flexbe_msgs__action__BehaviorInput_SendGoal_Request__Sequence__fini(flexbe_msgs__action__BehaviorInput_SendGoal_Request__Sequence * array)
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
      flexbe_msgs__action__BehaviorInput_SendGoal_Request__fini(&array->data[i]);
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

flexbe_msgs__action__BehaviorInput_SendGoal_Request__Sequence *
flexbe_msgs__action__BehaviorInput_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexbe_msgs__action__BehaviorInput_SendGoal_Request__Sequence * array = (flexbe_msgs__action__BehaviorInput_SendGoal_Request__Sequence *)allocator.allocate(sizeof(flexbe_msgs__action__BehaviorInput_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = flexbe_msgs__action__BehaviorInput_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
flexbe_msgs__action__BehaviorInput_SendGoal_Request__Sequence__destroy(flexbe_msgs__action__BehaviorInput_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    flexbe_msgs__action__BehaviorInput_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
flexbe_msgs__action__BehaviorInput_SendGoal_Request__Sequence__are_equal(const flexbe_msgs__action__BehaviorInput_SendGoal_Request__Sequence * lhs, const flexbe_msgs__action__BehaviorInput_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!flexbe_msgs__action__BehaviorInput_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
flexbe_msgs__action__BehaviorInput_SendGoal_Request__Sequence__copy(
  const flexbe_msgs__action__BehaviorInput_SendGoal_Request__Sequence * input,
  flexbe_msgs__action__BehaviorInput_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(flexbe_msgs__action__BehaviorInput_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    flexbe_msgs__action__BehaviorInput_SendGoal_Request * data =
      (flexbe_msgs__action__BehaviorInput_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!flexbe_msgs__action__BehaviorInput_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          flexbe_msgs__action__BehaviorInput_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!flexbe_msgs__action__BehaviorInput_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
flexbe_msgs__action__BehaviorInput_SendGoal_Response__init(flexbe_msgs__action__BehaviorInput_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    flexbe_msgs__action__BehaviorInput_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
flexbe_msgs__action__BehaviorInput_SendGoal_Response__fini(flexbe_msgs__action__BehaviorInput_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
flexbe_msgs__action__BehaviorInput_SendGoal_Response__are_equal(const flexbe_msgs__action__BehaviorInput_SendGoal_Response * lhs, const flexbe_msgs__action__BehaviorInput_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
flexbe_msgs__action__BehaviorInput_SendGoal_Response__copy(
  const flexbe_msgs__action__BehaviorInput_SendGoal_Response * input,
  flexbe_msgs__action__BehaviorInput_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

flexbe_msgs__action__BehaviorInput_SendGoal_Response *
flexbe_msgs__action__BehaviorInput_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexbe_msgs__action__BehaviorInput_SendGoal_Response * msg = (flexbe_msgs__action__BehaviorInput_SendGoal_Response *)allocator.allocate(sizeof(flexbe_msgs__action__BehaviorInput_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(flexbe_msgs__action__BehaviorInput_SendGoal_Response));
  bool success = flexbe_msgs__action__BehaviorInput_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
flexbe_msgs__action__BehaviorInput_SendGoal_Response__destroy(flexbe_msgs__action__BehaviorInput_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    flexbe_msgs__action__BehaviorInput_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
flexbe_msgs__action__BehaviorInput_SendGoal_Response__Sequence__init(flexbe_msgs__action__BehaviorInput_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexbe_msgs__action__BehaviorInput_SendGoal_Response * data = NULL;

  if (size) {
    data = (flexbe_msgs__action__BehaviorInput_SendGoal_Response *)allocator.zero_allocate(size, sizeof(flexbe_msgs__action__BehaviorInput_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = flexbe_msgs__action__BehaviorInput_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        flexbe_msgs__action__BehaviorInput_SendGoal_Response__fini(&data[i - 1]);
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
flexbe_msgs__action__BehaviorInput_SendGoal_Response__Sequence__fini(flexbe_msgs__action__BehaviorInput_SendGoal_Response__Sequence * array)
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
      flexbe_msgs__action__BehaviorInput_SendGoal_Response__fini(&array->data[i]);
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

flexbe_msgs__action__BehaviorInput_SendGoal_Response__Sequence *
flexbe_msgs__action__BehaviorInput_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexbe_msgs__action__BehaviorInput_SendGoal_Response__Sequence * array = (flexbe_msgs__action__BehaviorInput_SendGoal_Response__Sequence *)allocator.allocate(sizeof(flexbe_msgs__action__BehaviorInput_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = flexbe_msgs__action__BehaviorInput_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
flexbe_msgs__action__BehaviorInput_SendGoal_Response__Sequence__destroy(flexbe_msgs__action__BehaviorInput_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    flexbe_msgs__action__BehaviorInput_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
flexbe_msgs__action__BehaviorInput_SendGoal_Response__Sequence__are_equal(const flexbe_msgs__action__BehaviorInput_SendGoal_Response__Sequence * lhs, const flexbe_msgs__action__BehaviorInput_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!flexbe_msgs__action__BehaviorInput_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
flexbe_msgs__action__BehaviorInput_SendGoal_Response__Sequence__copy(
  const flexbe_msgs__action__BehaviorInput_SendGoal_Response__Sequence * input,
  flexbe_msgs__action__BehaviorInput_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(flexbe_msgs__action__BehaviorInput_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    flexbe_msgs__action__BehaviorInput_SendGoal_Response * data =
      (flexbe_msgs__action__BehaviorInput_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!flexbe_msgs__action__BehaviorInput_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          flexbe_msgs__action__BehaviorInput_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!flexbe_msgs__action__BehaviorInput_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
flexbe_msgs__action__BehaviorInput_GetResult_Request__init(flexbe_msgs__action__BehaviorInput_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    flexbe_msgs__action__BehaviorInput_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
flexbe_msgs__action__BehaviorInput_GetResult_Request__fini(flexbe_msgs__action__BehaviorInput_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
flexbe_msgs__action__BehaviorInput_GetResult_Request__are_equal(const flexbe_msgs__action__BehaviorInput_GetResult_Request * lhs, const flexbe_msgs__action__BehaviorInput_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
flexbe_msgs__action__BehaviorInput_GetResult_Request__copy(
  const flexbe_msgs__action__BehaviorInput_GetResult_Request * input,
  flexbe_msgs__action__BehaviorInput_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

flexbe_msgs__action__BehaviorInput_GetResult_Request *
flexbe_msgs__action__BehaviorInput_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexbe_msgs__action__BehaviorInput_GetResult_Request * msg = (flexbe_msgs__action__BehaviorInput_GetResult_Request *)allocator.allocate(sizeof(flexbe_msgs__action__BehaviorInput_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(flexbe_msgs__action__BehaviorInput_GetResult_Request));
  bool success = flexbe_msgs__action__BehaviorInput_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
flexbe_msgs__action__BehaviorInput_GetResult_Request__destroy(flexbe_msgs__action__BehaviorInput_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    flexbe_msgs__action__BehaviorInput_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
flexbe_msgs__action__BehaviorInput_GetResult_Request__Sequence__init(flexbe_msgs__action__BehaviorInput_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexbe_msgs__action__BehaviorInput_GetResult_Request * data = NULL;

  if (size) {
    data = (flexbe_msgs__action__BehaviorInput_GetResult_Request *)allocator.zero_allocate(size, sizeof(flexbe_msgs__action__BehaviorInput_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = flexbe_msgs__action__BehaviorInput_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        flexbe_msgs__action__BehaviorInput_GetResult_Request__fini(&data[i - 1]);
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
flexbe_msgs__action__BehaviorInput_GetResult_Request__Sequence__fini(flexbe_msgs__action__BehaviorInput_GetResult_Request__Sequence * array)
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
      flexbe_msgs__action__BehaviorInput_GetResult_Request__fini(&array->data[i]);
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

flexbe_msgs__action__BehaviorInput_GetResult_Request__Sequence *
flexbe_msgs__action__BehaviorInput_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexbe_msgs__action__BehaviorInput_GetResult_Request__Sequence * array = (flexbe_msgs__action__BehaviorInput_GetResult_Request__Sequence *)allocator.allocate(sizeof(flexbe_msgs__action__BehaviorInput_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = flexbe_msgs__action__BehaviorInput_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
flexbe_msgs__action__BehaviorInput_GetResult_Request__Sequence__destroy(flexbe_msgs__action__BehaviorInput_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    flexbe_msgs__action__BehaviorInput_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
flexbe_msgs__action__BehaviorInput_GetResult_Request__Sequence__are_equal(const flexbe_msgs__action__BehaviorInput_GetResult_Request__Sequence * lhs, const flexbe_msgs__action__BehaviorInput_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!flexbe_msgs__action__BehaviorInput_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
flexbe_msgs__action__BehaviorInput_GetResult_Request__Sequence__copy(
  const flexbe_msgs__action__BehaviorInput_GetResult_Request__Sequence * input,
  flexbe_msgs__action__BehaviorInput_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(flexbe_msgs__action__BehaviorInput_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    flexbe_msgs__action__BehaviorInput_GetResult_Request * data =
      (flexbe_msgs__action__BehaviorInput_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!flexbe_msgs__action__BehaviorInput_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          flexbe_msgs__action__BehaviorInput_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!flexbe_msgs__action__BehaviorInput_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "flexbe_msgs/action/detail/behavior_input__functions.h"

bool
flexbe_msgs__action__BehaviorInput_GetResult_Response__init(flexbe_msgs__action__BehaviorInput_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!flexbe_msgs__action__BehaviorInput_Result__init(&msg->result)) {
    flexbe_msgs__action__BehaviorInput_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
flexbe_msgs__action__BehaviorInput_GetResult_Response__fini(flexbe_msgs__action__BehaviorInput_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  flexbe_msgs__action__BehaviorInput_Result__fini(&msg->result);
}

bool
flexbe_msgs__action__BehaviorInput_GetResult_Response__are_equal(const flexbe_msgs__action__BehaviorInput_GetResult_Response * lhs, const flexbe_msgs__action__BehaviorInput_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!flexbe_msgs__action__BehaviorInput_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
flexbe_msgs__action__BehaviorInput_GetResult_Response__copy(
  const flexbe_msgs__action__BehaviorInput_GetResult_Response * input,
  flexbe_msgs__action__BehaviorInput_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!flexbe_msgs__action__BehaviorInput_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

flexbe_msgs__action__BehaviorInput_GetResult_Response *
flexbe_msgs__action__BehaviorInput_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexbe_msgs__action__BehaviorInput_GetResult_Response * msg = (flexbe_msgs__action__BehaviorInput_GetResult_Response *)allocator.allocate(sizeof(flexbe_msgs__action__BehaviorInput_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(flexbe_msgs__action__BehaviorInput_GetResult_Response));
  bool success = flexbe_msgs__action__BehaviorInput_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
flexbe_msgs__action__BehaviorInput_GetResult_Response__destroy(flexbe_msgs__action__BehaviorInput_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    flexbe_msgs__action__BehaviorInput_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
flexbe_msgs__action__BehaviorInput_GetResult_Response__Sequence__init(flexbe_msgs__action__BehaviorInput_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexbe_msgs__action__BehaviorInput_GetResult_Response * data = NULL;

  if (size) {
    data = (flexbe_msgs__action__BehaviorInput_GetResult_Response *)allocator.zero_allocate(size, sizeof(flexbe_msgs__action__BehaviorInput_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = flexbe_msgs__action__BehaviorInput_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        flexbe_msgs__action__BehaviorInput_GetResult_Response__fini(&data[i - 1]);
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
flexbe_msgs__action__BehaviorInput_GetResult_Response__Sequence__fini(flexbe_msgs__action__BehaviorInput_GetResult_Response__Sequence * array)
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
      flexbe_msgs__action__BehaviorInput_GetResult_Response__fini(&array->data[i]);
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

flexbe_msgs__action__BehaviorInput_GetResult_Response__Sequence *
flexbe_msgs__action__BehaviorInput_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexbe_msgs__action__BehaviorInput_GetResult_Response__Sequence * array = (flexbe_msgs__action__BehaviorInput_GetResult_Response__Sequence *)allocator.allocate(sizeof(flexbe_msgs__action__BehaviorInput_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = flexbe_msgs__action__BehaviorInput_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
flexbe_msgs__action__BehaviorInput_GetResult_Response__Sequence__destroy(flexbe_msgs__action__BehaviorInput_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    flexbe_msgs__action__BehaviorInput_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
flexbe_msgs__action__BehaviorInput_GetResult_Response__Sequence__are_equal(const flexbe_msgs__action__BehaviorInput_GetResult_Response__Sequence * lhs, const flexbe_msgs__action__BehaviorInput_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!flexbe_msgs__action__BehaviorInput_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
flexbe_msgs__action__BehaviorInput_GetResult_Response__Sequence__copy(
  const flexbe_msgs__action__BehaviorInput_GetResult_Response__Sequence * input,
  flexbe_msgs__action__BehaviorInput_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(flexbe_msgs__action__BehaviorInput_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    flexbe_msgs__action__BehaviorInput_GetResult_Response * data =
      (flexbe_msgs__action__BehaviorInput_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!flexbe_msgs__action__BehaviorInput_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          flexbe_msgs__action__BehaviorInput_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!flexbe_msgs__action__BehaviorInput_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "flexbe_msgs/action/detail/behavior_input__functions.h"

bool
flexbe_msgs__action__BehaviorInput_FeedbackMessage__init(flexbe_msgs__action__BehaviorInput_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    flexbe_msgs__action__BehaviorInput_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!flexbe_msgs__action__BehaviorInput_Feedback__init(&msg->feedback)) {
    flexbe_msgs__action__BehaviorInput_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
flexbe_msgs__action__BehaviorInput_FeedbackMessage__fini(flexbe_msgs__action__BehaviorInput_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  flexbe_msgs__action__BehaviorInput_Feedback__fini(&msg->feedback);
}

bool
flexbe_msgs__action__BehaviorInput_FeedbackMessage__are_equal(const flexbe_msgs__action__BehaviorInput_FeedbackMessage * lhs, const flexbe_msgs__action__BehaviorInput_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!flexbe_msgs__action__BehaviorInput_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
flexbe_msgs__action__BehaviorInput_FeedbackMessage__copy(
  const flexbe_msgs__action__BehaviorInput_FeedbackMessage * input,
  flexbe_msgs__action__BehaviorInput_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!flexbe_msgs__action__BehaviorInput_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

flexbe_msgs__action__BehaviorInput_FeedbackMessage *
flexbe_msgs__action__BehaviorInput_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexbe_msgs__action__BehaviorInput_FeedbackMessage * msg = (flexbe_msgs__action__BehaviorInput_FeedbackMessage *)allocator.allocate(sizeof(flexbe_msgs__action__BehaviorInput_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(flexbe_msgs__action__BehaviorInput_FeedbackMessage));
  bool success = flexbe_msgs__action__BehaviorInput_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
flexbe_msgs__action__BehaviorInput_FeedbackMessage__destroy(flexbe_msgs__action__BehaviorInput_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    flexbe_msgs__action__BehaviorInput_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
flexbe_msgs__action__BehaviorInput_FeedbackMessage__Sequence__init(flexbe_msgs__action__BehaviorInput_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexbe_msgs__action__BehaviorInput_FeedbackMessage * data = NULL;

  if (size) {
    data = (flexbe_msgs__action__BehaviorInput_FeedbackMessage *)allocator.zero_allocate(size, sizeof(flexbe_msgs__action__BehaviorInput_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = flexbe_msgs__action__BehaviorInput_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        flexbe_msgs__action__BehaviorInput_FeedbackMessage__fini(&data[i - 1]);
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
flexbe_msgs__action__BehaviorInput_FeedbackMessage__Sequence__fini(flexbe_msgs__action__BehaviorInput_FeedbackMessage__Sequence * array)
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
      flexbe_msgs__action__BehaviorInput_FeedbackMessage__fini(&array->data[i]);
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

flexbe_msgs__action__BehaviorInput_FeedbackMessage__Sequence *
flexbe_msgs__action__BehaviorInput_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexbe_msgs__action__BehaviorInput_FeedbackMessage__Sequence * array = (flexbe_msgs__action__BehaviorInput_FeedbackMessage__Sequence *)allocator.allocate(sizeof(flexbe_msgs__action__BehaviorInput_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = flexbe_msgs__action__BehaviorInput_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
flexbe_msgs__action__BehaviorInput_FeedbackMessage__Sequence__destroy(flexbe_msgs__action__BehaviorInput_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    flexbe_msgs__action__BehaviorInput_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
flexbe_msgs__action__BehaviorInput_FeedbackMessage__Sequence__are_equal(const flexbe_msgs__action__BehaviorInput_FeedbackMessage__Sequence * lhs, const flexbe_msgs__action__BehaviorInput_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!flexbe_msgs__action__BehaviorInput_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
flexbe_msgs__action__BehaviorInput_FeedbackMessage__Sequence__copy(
  const flexbe_msgs__action__BehaviorInput_FeedbackMessage__Sequence * input,
  flexbe_msgs__action__BehaviorInput_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(flexbe_msgs__action__BehaviorInput_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    flexbe_msgs__action__BehaviorInput_FeedbackMessage * data =
      (flexbe_msgs__action__BehaviorInput_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!flexbe_msgs__action__BehaviorInput_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          flexbe_msgs__action__BehaviorInput_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!flexbe_msgs__action__BehaviorInput_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
