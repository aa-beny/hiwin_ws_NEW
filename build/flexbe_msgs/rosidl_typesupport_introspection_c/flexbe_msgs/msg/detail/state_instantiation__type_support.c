// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from flexbe_msgs:msg/StateInstantiation.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "flexbe_msgs/msg/detail/state_instantiation__rosidl_typesupport_introspection_c.h"
#include "flexbe_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "flexbe_msgs/msg/detail/state_instantiation__functions.h"
#include "flexbe_msgs/msg/detail/state_instantiation__struct.h"


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
#include "flexbe_msgs/msg/outcome_condition.h"
// Member `cond_transition`
#include "flexbe_msgs/msg/detail/outcome_condition__rosidl_typesupport_introspection_c.h"
// Member `autonomy`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__StateInstantiation_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  flexbe_msgs__msg__StateInstantiation__init(message_memory);
}

void flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__StateInstantiation_fini_function(void * message_memory)
{
  flexbe_msgs__msg__StateInstantiation__fini(message_memory);
}

size_t flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__size_function__StateInstantiation__input_keys(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_const_function__StateInstantiation__input_keys(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_function__StateInstantiation__input_keys(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__fetch_function__StateInstantiation__input_keys(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_const_function__StateInstantiation__input_keys(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__assign_function__StateInstantiation__input_keys(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_function__StateInstantiation__input_keys(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__resize_function__StateInstantiation__input_keys(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__size_function__StateInstantiation__output_keys(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_const_function__StateInstantiation__output_keys(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_function__StateInstantiation__output_keys(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__fetch_function__StateInstantiation__output_keys(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_const_function__StateInstantiation__output_keys(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__assign_function__StateInstantiation__output_keys(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_function__StateInstantiation__output_keys(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__resize_function__StateInstantiation__output_keys(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__size_function__StateInstantiation__cond_outcome(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_const_function__StateInstantiation__cond_outcome(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_function__StateInstantiation__cond_outcome(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__fetch_function__StateInstantiation__cond_outcome(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_const_function__StateInstantiation__cond_outcome(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__assign_function__StateInstantiation__cond_outcome(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_function__StateInstantiation__cond_outcome(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__resize_function__StateInstantiation__cond_outcome(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__size_function__StateInstantiation__cond_transition(
  const void * untyped_member)
{
  const flexbe_msgs__msg__OutcomeCondition__Sequence * member =
    (const flexbe_msgs__msg__OutcomeCondition__Sequence *)(untyped_member);
  return member->size;
}

const void * flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_const_function__StateInstantiation__cond_transition(
  const void * untyped_member, size_t index)
{
  const flexbe_msgs__msg__OutcomeCondition__Sequence * member =
    (const flexbe_msgs__msg__OutcomeCondition__Sequence *)(untyped_member);
  return &member->data[index];
}

void * flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_function__StateInstantiation__cond_transition(
  void * untyped_member, size_t index)
{
  flexbe_msgs__msg__OutcomeCondition__Sequence * member =
    (flexbe_msgs__msg__OutcomeCondition__Sequence *)(untyped_member);
  return &member->data[index];
}

void flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__fetch_function__StateInstantiation__cond_transition(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const flexbe_msgs__msg__OutcomeCondition * item =
    ((const flexbe_msgs__msg__OutcomeCondition *)
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_const_function__StateInstantiation__cond_transition(untyped_member, index));
  flexbe_msgs__msg__OutcomeCondition * value =
    (flexbe_msgs__msg__OutcomeCondition *)(untyped_value);
  *value = *item;
}

void flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__assign_function__StateInstantiation__cond_transition(
  void * untyped_member, size_t index, const void * untyped_value)
{
  flexbe_msgs__msg__OutcomeCondition * item =
    ((flexbe_msgs__msg__OutcomeCondition *)
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_function__StateInstantiation__cond_transition(untyped_member, index));
  const flexbe_msgs__msg__OutcomeCondition * value =
    (const flexbe_msgs__msg__OutcomeCondition *)(untyped_value);
  *item = *value;
}

bool flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__resize_function__StateInstantiation__cond_transition(
  void * untyped_member, size_t size)
{
  flexbe_msgs__msg__OutcomeCondition__Sequence * member =
    (flexbe_msgs__msg__OutcomeCondition__Sequence *)(untyped_member);
  flexbe_msgs__msg__OutcomeCondition__Sequence__fini(member);
  return flexbe_msgs__msg__OutcomeCondition__Sequence__init(member, size);
}

size_t flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__size_function__StateInstantiation__parameter_names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_const_function__StateInstantiation__parameter_names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_function__StateInstantiation__parameter_names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__fetch_function__StateInstantiation__parameter_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_const_function__StateInstantiation__parameter_names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__assign_function__StateInstantiation__parameter_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_function__StateInstantiation__parameter_names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__resize_function__StateInstantiation__parameter_names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__size_function__StateInstantiation__parameter_values(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_const_function__StateInstantiation__parameter_values(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_function__StateInstantiation__parameter_values(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__fetch_function__StateInstantiation__parameter_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_const_function__StateInstantiation__parameter_values(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__assign_function__StateInstantiation__parameter_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_function__StateInstantiation__parameter_values(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__resize_function__StateInstantiation__parameter_values(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__size_function__StateInstantiation__position(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_const_function__StateInstantiation__position(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_function__StateInstantiation__position(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__fetch_function__StateInstantiation__position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_const_function__StateInstantiation__position(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__assign_function__StateInstantiation__position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_function__StateInstantiation__position(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__size_function__StateInstantiation__outcomes(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_const_function__StateInstantiation__outcomes(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_function__StateInstantiation__outcomes(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__fetch_function__StateInstantiation__outcomes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_const_function__StateInstantiation__outcomes(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__assign_function__StateInstantiation__outcomes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_function__StateInstantiation__outcomes(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__resize_function__StateInstantiation__outcomes(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__size_function__StateInstantiation__transitions(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_const_function__StateInstantiation__transitions(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_function__StateInstantiation__transitions(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__fetch_function__StateInstantiation__transitions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_const_function__StateInstantiation__transitions(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__assign_function__StateInstantiation__transitions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_function__StateInstantiation__transitions(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__resize_function__StateInstantiation__transitions(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__size_function__StateInstantiation__autonomy(
  const void * untyped_member)
{
  const rosidl_runtime_c__int8__Sequence * member =
    (const rosidl_runtime_c__int8__Sequence *)(untyped_member);
  return member->size;
}

const void * flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_const_function__StateInstantiation__autonomy(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int8__Sequence * member =
    (const rosidl_runtime_c__int8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_function__StateInstantiation__autonomy(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int8__Sequence * member =
    (rosidl_runtime_c__int8__Sequence *)(untyped_member);
  return &member->data[index];
}

void flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__fetch_function__StateInstantiation__autonomy(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int8_t * item =
    ((const int8_t *)
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_const_function__StateInstantiation__autonomy(untyped_member, index));
  int8_t * value =
    (int8_t *)(untyped_value);
  *value = *item;
}

void flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__assign_function__StateInstantiation__autonomy(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int8_t * item =
    ((int8_t *)
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_function__StateInstantiation__autonomy(untyped_member, index));
  const int8_t * value =
    (const int8_t *)(untyped_value);
  *item = *value;
}

bool flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__resize_function__StateInstantiation__autonomy(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int8__Sequence * member =
    (rosidl_runtime_c__int8__Sequence *)(untyped_member);
  rosidl_runtime_c__int8__Sequence__fini(member);
  return rosidl_runtime_c__int8__Sequence__init(member, size);
}

size_t flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__size_function__StateInstantiation__userdata_keys(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_const_function__StateInstantiation__userdata_keys(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_function__StateInstantiation__userdata_keys(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__fetch_function__StateInstantiation__userdata_keys(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_const_function__StateInstantiation__userdata_keys(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__assign_function__StateInstantiation__userdata_keys(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_function__StateInstantiation__userdata_keys(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__resize_function__StateInstantiation__userdata_keys(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__size_function__StateInstantiation__userdata_remapping(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_const_function__StateInstantiation__userdata_remapping(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_function__StateInstantiation__userdata_remapping(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__fetch_function__StateInstantiation__userdata_remapping(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_const_function__StateInstantiation__userdata_remapping(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__assign_function__StateInstantiation__userdata_remapping(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_function__StateInstantiation__userdata_remapping(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__resize_function__StateInstantiation__userdata_remapping(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__StateInstantiation_message_member_array[16] = {
  {
    "state_path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs__msg__StateInstantiation, state_path),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "state_class",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs__msg__StateInstantiation, state_class),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "initial_state_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs__msg__StateInstantiation, initial_state_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "input_keys",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs__msg__StateInstantiation, input_keys),  // bytes offset in struct
    NULL,  // default value
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__size_function__StateInstantiation__input_keys,  // size() function pointer
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_const_function__StateInstantiation__input_keys,  // get_const(index) function pointer
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_function__StateInstantiation__input_keys,  // get(index) function pointer
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__fetch_function__StateInstantiation__input_keys,  // fetch(index, &value) function pointer
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__assign_function__StateInstantiation__input_keys,  // assign(index, value) function pointer
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__resize_function__StateInstantiation__input_keys  // resize(index) function pointer
  },
  {
    "output_keys",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs__msg__StateInstantiation, output_keys),  // bytes offset in struct
    NULL,  // default value
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__size_function__StateInstantiation__output_keys,  // size() function pointer
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_const_function__StateInstantiation__output_keys,  // get_const(index) function pointer
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_function__StateInstantiation__output_keys,  // get(index) function pointer
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__fetch_function__StateInstantiation__output_keys,  // fetch(index, &value) function pointer
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__assign_function__StateInstantiation__output_keys,  // assign(index, value) function pointer
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__resize_function__StateInstantiation__output_keys  // resize(index) function pointer
  },
  {
    "cond_outcome",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs__msg__StateInstantiation, cond_outcome),  // bytes offset in struct
    NULL,  // default value
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__size_function__StateInstantiation__cond_outcome,  // size() function pointer
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_const_function__StateInstantiation__cond_outcome,  // get_const(index) function pointer
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_function__StateInstantiation__cond_outcome,  // get(index) function pointer
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__fetch_function__StateInstantiation__cond_outcome,  // fetch(index, &value) function pointer
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__assign_function__StateInstantiation__cond_outcome,  // assign(index, value) function pointer
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__resize_function__StateInstantiation__cond_outcome  // resize(index) function pointer
  },
  {
    "cond_transition",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs__msg__StateInstantiation, cond_transition),  // bytes offset in struct
    NULL,  // default value
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__size_function__StateInstantiation__cond_transition,  // size() function pointer
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_const_function__StateInstantiation__cond_transition,  // get_const(index) function pointer
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_function__StateInstantiation__cond_transition,  // get(index) function pointer
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__fetch_function__StateInstantiation__cond_transition,  // fetch(index, &value) function pointer
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__assign_function__StateInstantiation__cond_transition,  // assign(index, value) function pointer
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__resize_function__StateInstantiation__cond_transition  // resize(index) function pointer
  },
  {
    "behavior_class",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs__msg__StateInstantiation, behavior_class),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "parameter_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs__msg__StateInstantiation, parameter_names),  // bytes offset in struct
    NULL,  // default value
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__size_function__StateInstantiation__parameter_names,  // size() function pointer
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_const_function__StateInstantiation__parameter_names,  // get_const(index) function pointer
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_function__StateInstantiation__parameter_names,  // get(index) function pointer
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__fetch_function__StateInstantiation__parameter_names,  // fetch(index, &value) function pointer
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__assign_function__StateInstantiation__parameter_names,  // assign(index, value) function pointer
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__resize_function__StateInstantiation__parameter_names  // resize(index) function pointer
  },
  {
    "parameter_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs__msg__StateInstantiation, parameter_values),  // bytes offset in struct
    NULL,  // default value
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__size_function__StateInstantiation__parameter_values,  // size() function pointer
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_const_function__StateInstantiation__parameter_values,  // get_const(index) function pointer
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_function__StateInstantiation__parameter_values,  // get(index) function pointer
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__fetch_function__StateInstantiation__parameter_values,  // fetch(index, &value) function pointer
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__assign_function__StateInstantiation__parameter_values,  // assign(index, value) function pointer
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__resize_function__StateInstantiation__parameter_values  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs__msg__StateInstantiation, position),  // bytes offset in struct
    NULL,  // default value
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__size_function__StateInstantiation__position,  // size() function pointer
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_const_function__StateInstantiation__position,  // get_const(index) function pointer
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_function__StateInstantiation__position,  // get(index) function pointer
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__fetch_function__StateInstantiation__position,  // fetch(index, &value) function pointer
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__assign_function__StateInstantiation__position,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "outcomes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs__msg__StateInstantiation, outcomes),  // bytes offset in struct
    NULL,  // default value
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__size_function__StateInstantiation__outcomes,  // size() function pointer
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_const_function__StateInstantiation__outcomes,  // get_const(index) function pointer
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_function__StateInstantiation__outcomes,  // get(index) function pointer
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__fetch_function__StateInstantiation__outcomes,  // fetch(index, &value) function pointer
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__assign_function__StateInstantiation__outcomes,  // assign(index, value) function pointer
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__resize_function__StateInstantiation__outcomes  // resize(index) function pointer
  },
  {
    "transitions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs__msg__StateInstantiation, transitions),  // bytes offset in struct
    NULL,  // default value
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__size_function__StateInstantiation__transitions,  // size() function pointer
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_const_function__StateInstantiation__transitions,  // get_const(index) function pointer
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_function__StateInstantiation__transitions,  // get(index) function pointer
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__fetch_function__StateInstantiation__transitions,  // fetch(index, &value) function pointer
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__assign_function__StateInstantiation__transitions,  // assign(index, value) function pointer
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__resize_function__StateInstantiation__transitions  // resize(index) function pointer
  },
  {
    "autonomy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs__msg__StateInstantiation, autonomy),  // bytes offset in struct
    NULL,  // default value
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__size_function__StateInstantiation__autonomy,  // size() function pointer
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_const_function__StateInstantiation__autonomy,  // get_const(index) function pointer
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_function__StateInstantiation__autonomy,  // get(index) function pointer
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__fetch_function__StateInstantiation__autonomy,  // fetch(index, &value) function pointer
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__assign_function__StateInstantiation__autonomy,  // assign(index, value) function pointer
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__resize_function__StateInstantiation__autonomy  // resize(index) function pointer
  },
  {
    "userdata_keys",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs__msg__StateInstantiation, userdata_keys),  // bytes offset in struct
    NULL,  // default value
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__size_function__StateInstantiation__userdata_keys,  // size() function pointer
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_const_function__StateInstantiation__userdata_keys,  // get_const(index) function pointer
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_function__StateInstantiation__userdata_keys,  // get(index) function pointer
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__fetch_function__StateInstantiation__userdata_keys,  // fetch(index, &value) function pointer
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__assign_function__StateInstantiation__userdata_keys,  // assign(index, value) function pointer
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__resize_function__StateInstantiation__userdata_keys  // resize(index) function pointer
  },
  {
    "userdata_remapping",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs__msg__StateInstantiation, userdata_remapping),  // bytes offset in struct
    NULL,  // default value
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__size_function__StateInstantiation__userdata_remapping,  // size() function pointer
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_const_function__StateInstantiation__userdata_remapping,  // get_const(index) function pointer
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__get_function__StateInstantiation__userdata_remapping,  // get(index) function pointer
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__fetch_function__StateInstantiation__userdata_remapping,  // fetch(index, &value) function pointer
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__assign_function__StateInstantiation__userdata_remapping,  // assign(index, value) function pointer
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__resize_function__StateInstantiation__userdata_remapping  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__StateInstantiation_message_members = {
  "flexbe_msgs__msg",  // message namespace
  "StateInstantiation",  // message name
  16,  // number of fields
  sizeof(flexbe_msgs__msg__StateInstantiation),
  flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__StateInstantiation_message_member_array,  // message members
  flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__StateInstantiation_init_function,  // function to initialize message memory (memory has to be allocated)
  flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__StateInstantiation_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__StateInstantiation_message_type_support_handle = {
  0,
  &flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__StateInstantiation_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_flexbe_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, flexbe_msgs, msg, StateInstantiation)() {
  flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__StateInstantiation_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, flexbe_msgs, msg, OutcomeCondition)();
  if (!flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__StateInstantiation_message_type_support_handle.typesupport_identifier) {
    flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__StateInstantiation_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &flexbe_msgs__msg__StateInstantiation__rosidl_typesupport_introspection_c__StateInstantiation_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
