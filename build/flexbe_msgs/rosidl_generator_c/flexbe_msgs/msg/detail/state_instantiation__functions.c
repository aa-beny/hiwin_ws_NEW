// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from flexbe_msgs:msg/StateInstantiation.idl
// generated code does not contain a copyright notice
#include "flexbe_msgs/msg/detail/state_instantiation__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `state_path`
// Member `state_class`
// Member `initial_state_name`
// Member `input_keys`
// Member `output_keys`
// Member `cond_outcome`
// Member `behavior_class`
// Member `parameter_names`
// Member `parameter_values`
// Member `outcomes`
// Member `transitions`
// Member `userdata_keys`
// Member `userdata_remapping`
#include "rosidl_runtime_c/string_functions.h"
// Member `cond_transition`
#include "flexbe_msgs/msg/detail/outcome_condition__functions.h"
// Member `autonomy`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
flexbe_msgs__msg__StateInstantiation__init(flexbe_msgs__msg__StateInstantiation * msg)
{
  if (!msg) {
    return false;
  }
  // state_path
  if (!rosidl_runtime_c__String__init(&msg->state_path)) {
    flexbe_msgs__msg__StateInstantiation__fini(msg);
    return false;
  }
  // state_class
  if (!rosidl_runtime_c__String__init(&msg->state_class)) {
    flexbe_msgs__msg__StateInstantiation__fini(msg);
    return false;
  }
  // initial_state_name
  if (!rosidl_runtime_c__String__init(&msg->initial_state_name)) {
    flexbe_msgs__msg__StateInstantiation__fini(msg);
    return false;
  }
  // input_keys
  if (!rosidl_runtime_c__String__Sequence__init(&msg->input_keys, 0)) {
    flexbe_msgs__msg__StateInstantiation__fini(msg);
    return false;
  }
  // output_keys
  if (!rosidl_runtime_c__String__Sequence__init(&msg->output_keys, 0)) {
    flexbe_msgs__msg__StateInstantiation__fini(msg);
    return false;
  }
  // cond_outcome
  if (!rosidl_runtime_c__String__Sequence__init(&msg->cond_outcome, 0)) {
    flexbe_msgs__msg__StateInstantiation__fini(msg);
    return false;
  }
  // cond_transition
  if (!flexbe_msgs__msg__OutcomeCondition__Sequence__init(&msg->cond_transition, 0)) {
    flexbe_msgs__msg__StateInstantiation__fini(msg);
    return false;
  }
  // behavior_class
  if (!rosidl_runtime_c__String__init(&msg->behavior_class)) {
    flexbe_msgs__msg__StateInstantiation__fini(msg);
    return false;
  }
  // parameter_names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->parameter_names, 0)) {
    flexbe_msgs__msg__StateInstantiation__fini(msg);
    return false;
  }
  // parameter_values
  if (!rosidl_runtime_c__String__Sequence__init(&msg->parameter_values, 0)) {
    flexbe_msgs__msg__StateInstantiation__fini(msg);
    return false;
  }
  // position
  // outcomes
  if (!rosidl_runtime_c__String__Sequence__init(&msg->outcomes, 0)) {
    flexbe_msgs__msg__StateInstantiation__fini(msg);
    return false;
  }
  // transitions
  if (!rosidl_runtime_c__String__Sequence__init(&msg->transitions, 0)) {
    flexbe_msgs__msg__StateInstantiation__fini(msg);
    return false;
  }
  // autonomy
  if (!rosidl_runtime_c__int8__Sequence__init(&msg->autonomy, 0)) {
    flexbe_msgs__msg__StateInstantiation__fini(msg);
    return false;
  }
  // userdata_keys
  if (!rosidl_runtime_c__String__Sequence__init(&msg->userdata_keys, 0)) {
    flexbe_msgs__msg__StateInstantiation__fini(msg);
    return false;
  }
  // userdata_remapping
  if (!rosidl_runtime_c__String__Sequence__init(&msg->userdata_remapping, 0)) {
    flexbe_msgs__msg__StateInstantiation__fini(msg);
    return false;
  }
  return true;
}

void
flexbe_msgs__msg__StateInstantiation__fini(flexbe_msgs__msg__StateInstantiation * msg)
{
  if (!msg) {
    return;
  }
  // state_path
  rosidl_runtime_c__String__fini(&msg->state_path);
  // state_class
  rosidl_runtime_c__String__fini(&msg->state_class);
  // initial_state_name
  rosidl_runtime_c__String__fini(&msg->initial_state_name);
  // input_keys
  rosidl_runtime_c__String__Sequence__fini(&msg->input_keys);
  // output_keys
  rosidl_runtime_c__String__Sequence__fini(&msg->output_keys);
  // cond_outcome
  rosidl_runtime_c__String__Sequence__fini(&msg->cond_outcome);
  // cond_transition
  flexbe_msgs__msg__OutcomeCondition__Sequence__fini(&msg->cond_transition);
  // behavior_class
  rosidl_runtime_c__String__fini(&msg->behavior_class);
  // parameter_names
  rosidl_runtime_c__String__Sequence__fini(&msg->parameter_names);
  // parameter_values
  rosidl_runtime_c__String__Sequence__fini(&msg->parameter_values);
  // position
  // outcomes
  rosidl_runtime_c__String__Sequence__fini(&msg->outcomes);
  // transitions
  rosidl_runtime_c__String__Sequence__fini(&msg->transitions);
  // autonomy
  rosidl_runtime_c__int8__Sequence__fini(&msg->autonomy);
  // userdata_keys
  rosidl_runtime_c__String__Sequence__fini(&msg->userdata_keys);
  // userdata_remapping
  rosidl_runtime_c__String__Sequence__fini(&msg->userdata_remapping);
}

bool
flexbe_msgs__msg__StateInstantiation__are_equal(const flexbe_msgs__msg__StateInstantiation * lhs, const flexbe_msgs__msg__StateInstantiation * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // state_path
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->state_path), &(rhs->state_path)))
  {
    return false;
  }
  // state_class
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->state_class), &(rhs->state_class)))
  {
    return false;
  }
  // initial_state_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->initial_state_name), &(rhs->initial_state_name)))
  {
    return false;
  }
  // input_keys
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->input_keys), &(rhs->input_keys)))
  {
    return false;
  }
  // output_keys
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->output_keys), &(rhs->output_keys)))
  {
    return false;
  }
  // cond_outcome
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->cond_outcome), &(rhs->cond_outcome)))
  {
    return false;
  }
  // cond_transition
  if (!flexbe_msgs__msg__OutcomeCondition__Sequence__are_equal(
      &(lhs->cond_transition), &(rhs->cond_transition)))
  {
    return false;
  }
  // behavior_class
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->behavior_class), &(rhs->behavior_class)))
  {
    return false;
  }
  // parameter_names
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->parameter_names), &(rhs->parameter_names)))
  {
    return false;
  }
  // parameter_values
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->parameter_values), &(rhs->parameter_values)))
  {
    return false;
  }
  // position
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->position[i] != rhs->position[i]) {
      return false;
    }
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
  // userdata_keys
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->userdata_keys), &(rhs->userdata_keys)))
  {
    return false;
  }
  // userdata_remapping
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->userdata_remapping), &(rhs->userdata_remapping)))
  {
    return false;
  }
  return true;
}

bool
flexbe_msgs__msg__StateInstantiation__copy(
  const flexbe_msgs__msg__StateInstantiation * input,
  flexbe_msgs__msg__StateInstantiation * output)
{
  if (!input || !output) {
    return false;
  }
  // state_path
  if (!rosidl_runtime_c__String__copy(
      &(input->state_path), &(output->state_path)))
  {
    return false;
  }
  // state_class
  if (!rosidl_runtime_c__String__copy(
      &(input->state_class), &(output->state_class)))
  {
    return false;
  }
  // initial_state_name
  if (!rosidl_runtime_c__String__copy(
      &(input->initial_state_name), &(output->initial_state_name)))
  {
    return false;
  }
  // input_keys
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->input_keys), &(output->input_keys)))
  {
    return false;
  }
  // output_keys
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->output_keys), &(output->output_keys)))
  {
    return false;
  }
  // cond_outcome
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->cond_outcome), &(output->cond_outcome)))
  {
    return false;
  }
  // cond_transition
  if (!flexbe_msgs__msg__OutcomeCondition__Sequence__copy(
      &(input->cond_transition), &(output->cond_transition)))
  {
    return false;
  }
  // behavior_class
  if (!rosidl_runtime_c__String__copy(
      &(input->behavior_class), &(output->behavior_class)))
  {
    return false;
  }
  // parameter_names
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->parameter_names), &(output->parameter_names)))
  {
    return false;
  }
  // parameter_values
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->parameter_values), &(output->parameter_values)))
  {
    return false;
  }
  // position
  for (size_t i = 0; i < 2; ++i) {
    output->position[i] = input->position[i];
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
  // userdata_keys
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->userdata_keys), &(output->userdata_keys)))
  {
    return false;
  }
  // userdata_remapping
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->userdata_remapping), &(output->userdata_remapping)))
  {
    return false;
  }
  return true;
}

flexbe_msgs__msg__StateInstantiation *
flexbe_msgs__msg__StateInstantiation__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexbe_msgs__msg__StateInstantiation * msg = (flexbe_msgs__msg__StateInstantiation *)allocator.allocate(sizeof(flexbe_msgs__msg__StateInstantiation), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(flexbe_msgs__msg__StateInstantiation));
  bool success = flexbe_msgs__msg__StateInstantiation__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
flexbe_msgs__msg__StateInstantiation__destroy(flexbe_msgs__msg__StateInstantiation * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    flexbe_msgs__msg__StateInstantiation__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
flexbe_msgs__msg__StateInstantiation__Sequence__init(flexbe_msgs__msg__StateInstantiation__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexbe_msgs__msg__StateInstantiation * data = NULL;

  if (size) {
    data = (flexbe_msgs__msg__StateInstantiation *)allocator.zero_allocate(size, sizeof(flexbe_msgs__msg__StateInstantiation), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = flexbe_msgs__msg__StateInstantiation__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        flexbe_msgs__msg__StateInstantiation__fini(&data[i - 1]);
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
flexbe_msgs__msg__StateInstantiation__Sequence__fini(flexbe_msgs__msg__StateInstantiation__Sequence * array)
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
      flexbe_msgs__msg__StateInstantiation__fini(&array->data[i]);
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

flexbe_msgs__msg__StateInstantiation__Sequence *
flexbe_msgs__msg__StateInstantiation__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexbe_msgs__msg__StateInstantiation__Sequence * array = (flexbe_msgs__msg__StateInstantiation__Sequence *)allocator.allocate(sizeof(flexbe_msgs__msg__StateInstantiation__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = flexbe_msgs__msg__StateInstantiation__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
flexbe_msgs__msg__StateInstantiation__Sequence__destroy(flexbe_msgs__msg__StateInstantiation__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    flexbe_msgs__msg__StateInstantiation__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
flexbe_msgs__msg__StateInstantiation__Sequence__are_equal(const flexbe_msgs__msg__StateInstantiation__Sequence * lhs, const flexbe_msgs__msg__StateInstantiation__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!flexbe_msgs__msg__StateInstantiation__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
flexbe_msgs__msg__StateInstantiation__Sequence__copy(
  const flexbe_msgs__msg__StateInstantiation__Sequence * input,
  flexbe_msgs__msg__StateInstantiation__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(flexbe_msgs__msg__StateInstantiation);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    flexbe_msgs__msg__StateInstantiation * data =
      (flexbe_msgs__msg__StateInstantiation *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!flexbe_msgs__msg__StateInstantiation__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          flexbe_msgs__msg__StateInstantiation__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!flexbe_msgs__msg__StateInstantiation__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
