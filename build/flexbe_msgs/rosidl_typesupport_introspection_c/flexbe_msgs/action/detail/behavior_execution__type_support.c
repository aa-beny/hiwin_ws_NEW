// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from flexbe_msgs:action/BehaviorExecution.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "flexbe_msgs/action/detail/behavior_execution__rosidl_typesupport_introspection_c.h"
#include "flexbe_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "flexbe_msgs/action/detail/behavior_execution__functions.h"
#include "flexbe_msgs/action/detail/behavior_execution__struct.h"


// Include directives for member types
// Member `behavior_name`
// Member `arg_keys`
// Member `arg_values`
// Member `input_keys`
// Member `input_values`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__BehaviorExecution_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  flexbe_msgs__action__BehaviorExecution_Goal__init(message_memory);
}

void flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__BehaviorExecution_Goal_fini_function(void * message_memory)
{
  flexbe_msgs__action__BehaviorExecution_Goal__fini(message_memory);
}

size_t flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__size_function__BehaviorExecution_Goal__arg_keys(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__get_const_function__BehaviorExecution_Goal__arg_keys(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__get_function__BehaviorExecution_Goal__arg_keys(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__fetch_function__BehaviorExecution_Goal__arg_keys(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__get_const_function__BehaviorExecution_Goal__arg_keys(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__assign_function__BehaviorExecution_Goal__arg_keys(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__get_function__BehaviorExecution_Goal__arg_keys(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__resize_function__BehaviorExecution_Goal__arg_keys(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__size_function__BehaviorExecution_Goal__arg_values(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__get_const_function__BehaviorExecution_Goal__arg_values(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__get_function__BehaviorExecution_Goal__arg_values(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__fetch_function__BehaviorExecution_Goal__arg_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__get_const_function__BehaviorExecution_Goal__arg_values(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__assign_function__BehaviorExecution_Goal__arg_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__get_function__BehaviorExecution_Goal__arg_values(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__resize_function__BehaviorExecution_Goal__arg_values(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__size_function__BehaviorExecution_Goal__input_keys(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__get_const_function__BehaviorExecution_Goal__input_keys(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__get_function__BehaviorExecution_Goal__input_keys(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__fetch_function__BehaviorExecution_Goal__input_keys(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__get_const_function__BehaviorExecution_Goal__input_keys(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__assign_function__BehaviorExecution_Goal__input_keys(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__get_function__BehaviorExecution_Goal__input_keys(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__resize_function__BehaviorExecution_Goal__input_keys(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__size_function__BehaviorExecution_Goal__input_values(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__get_const_function__BehaviorExecution_Goal__input_values(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__get_function__BehaviorExecution_Goal__input_values(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__fetch_function__BehaviorExecution_Goal__input_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__get_const_function__BehaviorExecution_Goal__input_values(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__assign_function__BehaviorExecution_Goal__input_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__get_function__BehaviorExecution_Goal__input_values(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__resize_function__BehaviorExecution_Goal__input_values(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__BehaviorExecution_Goal_message_member_array[5] = {
  {
    "behavior_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs__action__BehaviorExecution_Goal, behavior_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "arg_keys",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs__action__BehaviorExecution_Goal, arg_keys),  // bytes offset in struct
    NULL,  // default value
    flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__size_function__BehaviorExecution_Goal__arg_keys,  // size() function pointer
    flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__get_const_function__BehaviorExecution_Goal__arg_keys,  // get_const(index) function pointer
    flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__get_function__BehaviorExecution_Goal__arg_keys,  // get(index) function pointer
    flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__fetch_function__BehaviorExecution_Goal__arg_keys,  // fetch(index, &value) function pointer
    flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__assign_function__BehaviorExecution_Goal__arg_keys,  // assign(index, value) function pointer
    flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__resize_function__BehaviorExecution_Goal__arg_keys  // resize(index) function pointer
  },
  {
    "arg_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs__action__BehaviorExecution_Goal, arg_values),  // bytes offset in struct
    NULL,  // default value
    flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__size_function__BehaviorExecution_Goal__arg_values,  // size() function pointer
    flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__get_const_function__BehaviorExecution_Goal__arg_values,  // get_const(index) function pointer
    flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__get_function__BehaviorExecution_Goal__arg_values,  // get(index) function pointer
    flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__fetch_function__BehaviorExecution_Goal__arg_values,  // fetch(index, &value) function pointer
    flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__assign_function__BehaviorExecution_Goal__arg_values,  // assign(index, value) function pointer
    flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__resize_function__BehaviorExecution_Goal__arg_values  // resize(index) function pointer
  },
  {
    "input_keys",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs__action__BehaviorExecution_Goal, input_keys),  // bytes offset in struct
    NULL,  // default value
    flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__size_function__BehaviorExecution_Goal__input_keys,  // size() function pointer
    flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__get_const_function__BehaviorExecution_Goal__input_keys,  // get_const(index) function pointer
    flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__get_function__BehaviorExecution_Goal__input_keys,  // get(index) function pointer
    flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__fetch_function__BehaviorExecution_Goal__input_keys,  // fetch(index, &value) function pointer
    flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__assign_function__BehaviorExecution_Goal__input_keys,  // assign(index, value) function pointer
    flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__resize_function__BehaviorExecution_Goal__input_keys  // resize(index) function pointer
  },
  {
    "input_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs__action__BehaviorExecution_Goal, input_values),  // bytes offset in struct
    NULL,  // default value
    flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__size_function__BehaviorExecution_Goal__input_values,  // size() function pointer
    flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__get_const_function__BehaviorExecution_Goal__input_values,  // get_const(index) function pointer
    flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__get_function__BehaviorExecution_Goal__input_values,  // get(index) function pointer
    flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__fetch_function__BehaviorExecution_Goal__input_values,  // fetch(index, &value) function pointer
    flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__assign_function__BehaviorExecution_Goal__input_values,  // assign(index, value) function pointer
    flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__resize_function__BehaviorExecution_Goal__input_values  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__BehaviorExecution_Goal_message_members = {
  "flexbe_msgs__action",  // message namespace
  "BehaviorExecution_Goal",  // message name
  5,  // number of fields
  sizeof(flexbe_msgs__action__BehaviorExecution_Goal),
  flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__BehaviorExecution_Goal_message_member_array,  // message members
  flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__BehaviorExecution_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__BehaviorExecution_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__BehaviorExecution_Goal_message_type_support_handle = {
  0,
  &flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__BehaviorExecution_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_flexbe_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, flexbe_msgs, action, BehaviorExecution_Goal)() {
  if (!flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__BehaviorExecution_Goal_message_type_support_handle.typesupport_identifier) {
    flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__BehaviorExecution_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &flexbe_msgs__action__BehaviorExecution_Goal__rosidl_typesupport_introspection_c__BehaviorExecution_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "flexbe_msgs/action/detail/behavior_execution__rosidl_typesupport_introspection_c.h"
// already included above
// #include "flexbe_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "flexbe_msgs/action/detail/behavior_execution__functions.h"
// already included above
// #include "flexbe_msgs/action/detail/behavior_execution__struct.h"


// Include directives for member types
// Member `outcome`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void flexbe_msgs__action__BehaviorExecution_Result__rosidl_typesupport_introspection_c__BehaviorExecution_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  flexbe_msgs__action__BehaviorExecution_Result__init(message_memory);
}

void flexbe_msgs__action__BehaviorExecution_Result__rosidl_typesupport_introspection_c__BehaviorExecution_Result_fini_function(void * message_memory)
{
  flexbe_msgs__action__BehaviorExecution_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember flexbe_msgs__action__BehaviorExecution_Result__rosidl_typesupport_introspection_c__BehaviorExecution_Result_message_member_array[1] = {
  {
    "outcome",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs__action__BehaviorExecution_Result, outcome),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers flexbe_msgs__action__BehaviorExecution_Result__rosidl_typesupport_introspection_c__BehaviorExecution_Result_message_members = {
  "flexbe_msgs__action",  // message namespace
  "BehaviorExecution_Result",  // message name
  1,  // number of fields
  sizeof(flexbe_msgs__action__BehaviorExecution_Result),
  flexbe_msgs__action__BehaviorExecution_Result__rosidl_typesupport_introspection_c__BehaviorExecution_Result_message_member_array,  // message members
  flexbe_msgs__action__BehaviorExecution_Result__rosidl_typesupport_introspection_c__BehaviorExecution_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  flexbe_msgs__action__BehaviorExecution_Result__rosidl_typesupport_introspection_c__BehaviorExecution_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t flexbe_msgs__action__BehaviorExecution_Result__rosidl_typesupport_introspection_c__BehaviorExecution_Result_message_type_support_handle = {
  0,
  &flexbe_msgs__action__BehaviorExecution_Result__rosidl_typesupport_introspection_c__BehaviorExecution_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_flexbe_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, flexbe_msgs, action, BehaviorExecution_Result)() {
  if (!flexbe_msgs__action__BehaviorExecution_Result__rosidl_typesupport_introspection_c__BehaviorExecution_Result_message_type_support_handle.typesupport_identifier) {
    flexbe_msgs__action__BehaviorExecution_Result__rosidl_typesupport_introspection_c__BehaviorExecution_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &flexbe_msgs__action__BehaviorExecution_Result__rosidl_typesupport_introspection_c__BehaviorExecution_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "flexbe_msgs/action/detail/behavior_execution__rosidl_typesupport_introspection_c.h"
// already included above
// #include "flexbe_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "flexbe_msgs/action/detail/behavior_execution__functions.h"
// already included above
// #include "flexbe_msgs/action/detail/behavior_execution__struct.h"


// Include directives for member types
// Member `current_state`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void flexbe_msgs__action__BehaviorExecution_Feedback__rosidl_typesupport_introspection_c__BehaviorExecution_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  flexbe_msgs__action__BehaviorExecution_Feedback__init(message_memory);
}

void flexbe_msgs__action__BehaviorExecution_Feedback__rosidl_typesupport_introspection_c__BehaviorExecution_Feedback_fini_function(void * message_memory)
{
  flexbe_msgs__action__BehaviorExecution_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember flexbe_msgs__action__BehaviorExecution_Feedback__rosidl_typesupport_introspection_c__BehaviorExecution_Feedback_message_member_array[1] = {
  {
    "current_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs__action__BehaviorExecution_Feedback, current_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers flexbe_msgs__action__BehaviorExecution_Feedback__rosidl_typesupport_introspection_c__BehaviorExecution_Feedback_message_members = {
  "flexbe_msgs__action",  // message namespace
  "BehaviorExecution_Feedback",  // message name
  1,  // number of fields
  sizeof(flexbe_msgs__action__BehaviorExecution_Feedback),
  flexbe_msgs__action__BehaviorExecution_Feedback__rosidl_typesupport_introspection_c__BehaviorExecution_Feedback_message_member_array,  // message members
  flexbe_msgs__action__BehaviorExecution_Feedback__rosidl_typesupport_introspection_c__BehaviorExecution_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  flexbe_msgs__action__BehaviorExecution_Feedback__rosidl_typesupport_introspection_c__BehaviorExecution_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t flexbe_msgs__action__BehaviorExecution_Feedback__rosidl_typesupport_introspection_c__BehaviorExecution_Feedback_message_type_support_handle = {
  0,
  &flexbe_msgs__action__BehaviorExecution_Feedback__rosidl_typesupport_introspection_c__BehaviorExecution_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_flexbe_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, flexbe_msgs, action, BehaviorExecution_Feedback)() {
  if (!flexbe_msgs__action__BehaviorExecution_Feedback__rosidl_typesupport_introspection_c__BehaviorExecution_Feedback_message_type_support_handle.typesupport_identifier) {
    flexbe_msgs__action__BehaviorExecution_Feedback__rosidl_typesupport_introspection_c__BehaviorExecution_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &flexbe_msgs__action__BehaviorExecution_Feedback__rosidl_typesupport_introspection_c__BehaviorExecution_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "flexbe_msgs/action/detail/behavior_execution__rosidl_typesupport_introspection_c.h"
// already included above
// #include "flexbe_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "flexbe_msgs/action/detail/behavior_execution__functions.h"
// already included above
// #include "flexbe_msgs/action/detail/behavior_execution__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "flexbe_msgs/action/behavior_execution.h"
// Member `goal`
// already included above
// #include "flexbe_msgs/action/detail/behavior_execution__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void flexbe_msgs__action__BehaviorExecution_SendGoal_Request__rosidl_typesupport_introspection_c__BehaviorExecution_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  flexbe_msgs__action__BehaviorExecution_SendGoal_Request__init(message_memory);
}

void flexbe_msgs__action__BehaviorExecution_SendGoal_Request__rosidl_typesupport_introspection_c__BehaviorExecution_SendGoal_Request_fini_function(void * message_memory)
{
  flexbe_msgs__action__BehaviorExecution_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember flexbe_msgs__action__BehaviorExecution_SendGoal_Request__rosidl_typesupport_introspection_c__BehaviorExecution_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs__action__BehaviorExecution_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs__action__BehaviorExecution_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers flexbe_msgs__action__BehaviorExecution_SendGoal_Request__rosidl_typesupport_introspection_c__BehaviorExecution_SendGoal_Request_message_members = {
  "flexbe_msgs__action",  // message namespace
  "BehaviorExecution_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(flexbe_msgs__action__BehaviorExecution_SendGoal_Request),
  flexbe_msgs__action__BehaviorExecution_SendGoal_Request__rosidl_typesupport_introspection_c__BehaviorExecution_SendGoal_Request_message_member_array,  // message members
  flexbe_msgs__action__BehaviorExecution_SendGoal_Request__rosidl_typesupport_introspection_c__BehaviorExecution_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  flexbe_msgs__action__BehaviorExecution_SendGoal_Request__rosidl_typesupport_introspection_c__BehaviorExecution_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t flexbe_msgs__action__BehaviorExecution_SendGoal_Request__rosidl_typesupport_introspection_c__BehaviorExecution_SendGoal_Request_message_type_support_handle = {
  0,
  &flexbe_msgs__action__BehaviorExecution_SendGoal_Request__rosidl_typesupport_introspection_c__BehaviorExecution_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_flexbe_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, flexbe_msgs, action, BehaviorExecution_SendGoal_Request)() {
  flexbe_msgs__action__BehaviorExecution_SendGoal_Request__rosidl_typesupport_introspection_c__BehaviorExecution_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  flexbe_msgs__action__BehaviorExecution_SendGoal_Request__rosidl_typesupport_introspection_c__BehaviorExecution_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, flexbe_msgs, action, BehaviorExecution_Goal)();
  if (!flexbe_msgs__action__BehaviorExecution_SendGoal_Request__rosidl_typesupport_introspection_c__BehaviorExecution_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    flexbe_msgs__action__BehaviorExecution_SendGoal_Request__rosidl_typesupport_introspection_c__BehaviorExecution_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &flexbe_msgs__action__BehaviorExecution_SendGoal_Request__rosidl_typesupport_introspection_c__BehaviorExecution_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "flexbe_msgs/action/detail/behavior_execution__rosidl_typesupport_introspection_c.h"
// already included above
// #include "flexbe_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "flexbe_msgs/action/detail/behavior_execution__functions.h"
// already included above
// #include "flexbe_msgs/action/detail/behavior_execution__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void flexbe_msgs__action__BehaviorExecution_SendGoal_Response__rosidl_typesupport_introspection_c__BehaviorExecution_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  flexbe_msgs__action__BehaviorExecution_SendGoal_Response__init(message_memory);
}

void flexbe_msgs__action__BehaviorExecution_SendGoal_Response__rosidl_typesupport_introspection_c__BehaviorExecution_SendGoal_Response_fini_function(void * message_memory)
{
  flexbe_msgs__action__BehaviorExecution_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember flexbe_msgs__action__BehaviorExecution_SendGoal_Response__rosidl_typesupport_introspection_c__BehaviorExecution_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs__action__BehaviorExecution_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs__action__BehaviorExecution_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers flexbe_msgs__action__BehaviorExecution_SendGoal_Response__rosidl_typesupport_introspection_c__BehaviorExecution_SendGoal_Response_message_members = {
  "flexbe_msgs__action",  // message namespace
  "BehaviorExecution_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(flexbe_msgs__action__BehaviorExecution_SendGoal_Response),
  flexbe_msgs__action__BehaviorExecution_SendGoal_Response__rosidl_typesupport_introspection_c__BehaviorExecution_SendGoal_Response_message_member_array,  // message members
  flexbe_msgs__action__BehaviorExecution_SendGoal_Response__rosidl_typesupport_introspection_c__BehaviorExecution_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  flexbe_msgs__action__BehaviorExecution_SendGoal_Response__rosidl_typesupport_introspection_c__BehaviorExecution_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t flexbe_msgs__action__BehaviorExecution_SendGoal_Response__rosidl_typesupport_introspection_c__BehaviorExecution_SendGoal_Response_message_type_support_handle = {
  0,
  &flexbe_msgs__action__BehaviorExecution_SendGoal_Response__rosidl_typesupport_introspection_c__BehaviorExecution_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_flexbe_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, flexbe_msgs, action, BehaviorExecution_SendGoal_Response)() {
  flexbe_msgs__action__BehaviorExecution_SendGoal_Response__rosidl_typesupport_introspection_c__BehaviorExecution_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!flexbe_msgs__action__BehaviorExecution_SendGoal_Response__rosidl_typesupport_introspection_c__BehaviorExecution_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    flexbe_msgs__action__BehaviorExecution_SendGoal_Response__rosidl_typesupport_introspection_c__BehaviorExecution_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &flexbe_msgs__action__BehaviorExecution_SendGoal_Response__rosidl_typesupport_introspection_c__BehaviorExecution_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "flexbe_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "flexbe_msgs/action/detail/behavior_execution__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers flexbe_msgs__action__detail__behavior_execution__rosidl_typesupport_introspection_c__BehaviorExecution_SendGoal_service_members = {
  "flexbe_msgs__action",  // service namespace
  "BehaviorExecution_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // flexbe_msgs__action__detail__behavior_execution__rosidl_typesupport_introspection_c__BehaviorExecution_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // flexbe_msgs__action__detail__behavior_execution__rosidl_typesupport_introspection_c__BehaviorExecution_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t flexbe_msgs__action__detail__behavior_execution__rosidl_typesupport_introspection_c__BehaviorExecution_SendGoal_service_type_support_handle = {
  0,
  &flexbe_msgs__action__detail__behavior_execution__rosidl_typesupport_introspection_c__BehaviorExecution_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, flexbe_msgs, action, BehaviorExecution_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, flexbe_msgs, action, BehaviorExecution_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_flexbe_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, flexbe_msgs, action, BehaviorExecution_SendGoal)() {
  if (!flexbe_msgs__action__detail__behavior_execution__rosidl_typesupport_introspection_c__BehaviorExecution_SendGoal_service_type_support_handle.typesupport_identifier) {
    flexbe_msgs__action__detail__behavior_execution__rosidl_typesupport_introspection_c__BehaviorExecution_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)flexbe_msgs__action__detail__behavior_execution__rosidl_typesupport_introspection_c__BehaviorExecution_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, flexbe_msgs, action, BehaviorExecution_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, flexbe_msgs, action, BehaviorExecution_SendGoal_Response)()->data;
  }

  return &flexbe_msgs__action__detail__behavior_execution__rosidl_typesupport_introspection_c__BehaviorExecution_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "flexbe_msgs/action/detail/behavior_execution__rosidl_typesupport_introspection_c.h"
// already included above
// #include "flexbe_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "flexbe_msgs/action/detail/behavior_execution__functions.h"
// already included above
// #include "flexbe_msgs/action/detail/behavior_execution__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void flexbe_msgs__action__BehaviorExecution_GetResult_Request__rosidl_typesupport_introspection_c__BehaviorExecution_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  flexbe_msgs__action__BehaviorExecution_GetResult_Request__init(message_memory);
}

void flexbe_msgs__action__BehaviorExecution_GetResult_Request__rosidl_typesupport_introspection_c__BehaviorExecution_GetResult_Request_fini_function(void * message_memory)
{
  flexbe_msgs__action__BehaviorExecution_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember flexbe_msgs__action__BehaviorExecution_GetResult_Request__rosidl_typesupport_introspection_c__BehaviorExecution_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs__action__BehaviorExecution_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers flexbe_msgs__action__BehaviorExecution_GetResult_Request__rosidl_typesupport_introspection_c__BehaviorExecution_GetResult_Request_message_members = {
  "flexbe_msgs__action",  // message namespace
  "BehaviorExecution_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(flexbe_msgs__action__BehaviorExecution_GetResult_Request),
  flexbe_msgs__action__BehaviorExecution_GetResult_Request__rosidl_typesupport_introspection_c__BehaviorExecution_GetResult_Request_message_member_array,  // message members
  flexbe_msgs__action__BehaviorExecution_GetResult_Request__rosidl_typesupport_introspection_c__BehaviorExecution_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  flexbe_msgs__action__BehaviorExecution_GetResult_Request__rosidl_typesupport_introspection_c__BehaviorExecution_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t flexbe_msgs__action__BehaviorExecution_GetResult_Request__rosidl_typesupport_introspection_c__BehaviorExecution_GetResult_Request_message_type_support_handle = {
  0,
  &flexbe_msgs__action__BehaviorExecution_GetResult_Request__rosidl_typesupport_introspection_c__BehaviorExecution_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_flexbe_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, flexbe_msgs, action, BehaviorExecution_GetResult_Request)() {
  flexbe_msgs__action__BehaviorExecution_GetResult_Request__rosidl_typesupport_introspection_c__BehaviorExecution_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!flexbe_msgs__action__BehaviorExecution_GetResult_Request__rosidl_typesupport_introspection_c__BehaviorExecution_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    flexbe_msgs__action__BehaviorExecution_GetResult_Request__rosidl_typesupport_introspection_c__BehaviorExecution_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &flexbe_msgs__action__BehaviorExecution_GetResult_Request__rosidl_typesupport_introspection_c__BehaviorExecution_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "flexbe_msgs/action/detail/behavior_execution__rosidl_typesupport_introspection_c.h"
// already included above
// #include "flexbe_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "flexbe_msgs/action/detail/behavior_execution__functions.h"
// already included above
// #include "flexbe_msgs/action/detail/behavior_execution__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "flexbe_msgs/action/behavior_execution.h"
// Member `result`
// already included above
// #include "flexbe_msgs/action/detail/behavior_execution__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void flexbe_msgs__action__BehaviorExecution_GetResult_Response__rosidl_typesupport_introspection_c__BehaviorExecution_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  flexbe_msgs__action__BehaviorExecution_GetResult_Response__init(message_memory);
}

void flexbe_msgs__action__BehaviorExecution_GetResult_Response__rosidl_typesupport_introspection_c__BehaviorExecution_GetResult_Response_fini_function(void * message_memory)
{
  flexbe_msgs__action__BehaviorExecution_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember flexbe_msgs__action__BehaviorExecution_GetResult_Response__rosidl_typesupport_introspection_c__BehaviorExecution_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs__action__BehaviorExecution_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs__action__BehaviorExecution_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers flexbe_msgs__action__BehaviorExecution_GetResult_Response__rosidl_typesupport_introspection_c__BehaviorExecution_GetResult_Response_message_members = {
  "flexbe_msgs__action",  // message namespace
  "BehaviorExecution_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(flexbe_msgs__action__BehaviorExecution_GetResult_Response),
  flexbe_msgs__action__BehaviorExecution_GetResult_Response__rosidl_typesupport_introspection_c__BehaviorExecution_GetResult_Response_message_member_array,  // message members
  flexbe_msgs__action__BehaviorExecution_GetResult_Response__rosidl_typesupport_introspection_c__BehaviorExecution_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  flexbe_msgs__action__BehaviorExecution_GetResult_Response__rosidl_typesupport_introspection_c__BehaviorExecution_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t flexbe_msgs__action__BehaviorExecution_GetResult_Response__rosidl_typesupport_introspection_c__BehaviorExecution_GetResult_Response_message_type_support_handle = {
  0,
  &flexbe_msgs__action__BehaviorExecution_GetResult_Response__rosidl_typesupport_introspection_c__BehaviorExecution_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_flexbe_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, flexbe_msgs, action, BehaviorExecution_GetResult_Response)() {
  flexbe_msgs__action__BehaviorExecution_GetResult_Response__rosidl_typesupport_introspection_c__BehaviorExecution_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, flexbe_msgs, action, BehaviorExecution_Result)();
  if (!flexbe_msgs__action__BehaviorExecution_GetResult_Response__rosidl_typesupport_introspection_c__BehaviorExecution_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    flexbe_msgs__action__BehaviorExecution_GetResult_Response__rosidl_typesupport_introspection_c__BehaviorExecution_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &flexbe_msgs__action__BehaviorExecution_GetResult_Response__rosidl_typesupport_introspection_c__BehaviorExecution_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "flexbe_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "flexbe_msgs/action/detail/behavior_execution__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers flexbe_msgs__action__detail__behavior_execution__rosidl_typesupport_introspection_c__BehaviorExecution_GetResult_service_members = {
  "flexbe_msgs__action",  // service namespace
  "BehaviorExecution_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // flexbe_msgs__action__detail__behavior_execution__rosidl_typesupport_introspection_c__BehaviorExecution_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // flexbe_msgs__action__detail__behavior_execution__rosidl_typesupport_introspection_c__BehaviorExecution_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t flexbe_msgs__action__detail__behavior_execution__rosidl_typesupport_introspection_c__BehaviorExecution_GetResult_service_type_support_handle = {
  0,
  &flexbe_msgs__action__detail__behavior_execution__rosidl_typesupport_introspection_c__BehaviorExecution_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, flexbe_msgs, action, BehaviorExecution_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, flexbe_msgs, action, BehaviorExecution_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_flexbe_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, flexbe_msgs, action, BehaviorExecution_GetResult)() {
  if (!flexbe_msgs__action__detail__behavior_execution__rosidl_typesupport_introspection_c__BehaviorExecution_GetResult_service_type_support_handle.typesupport_identifier) {
    flexbe_msgs__action__detail__behavior_execution__rosidl_typesupport_introspection_c__BehaviorExecution_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)flexbe_msgs__action__detail__behavior_execution__rosidl_typesupport_introspection_c__BehaviorExecution_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, flexbe_msgs, action, BehaviorExecution_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, flexbe_msgs, action, BehaviorExecution_GetResult_Response)()->data;
  }

  return &flexbe_msgs__action__detail__behavior_execution__rosidl_typesupport_introspection_c__BehaviorExecution_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "flexbe_msgs/action/detail/behavior_execution__rosidl_typesupport_introspection_c.h"
// already included above
// #include "flexbe_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "flexbe_msgs/action/detail/behavior_execution__functions.h"
// already included above
// #include "flexbe_msgs/action/detail/behavior_execution__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "flexbe_msgs/action/behavior_execution.h"
// Member `feedback`
// already included above
// #include "flexbe_msgs/action/detail/behavior_execution__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void flexbe_msgs__action__BehaviorExecution_FeedbackMessage__rosidl_typesupport_introspection_c__BehaviorExecution_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  flexbe_msgs__action__BehaviorExecution_FeedbackMessage__init(message_memory);
}

void flexbe_msgs__action__BehaviorExecution_FeedbackMessage__rosidl_typesupport_introspection_c__BehaviorExecution_FeedbackMessage_fini_function(void * message_memory)
{
  flexbe_msgs__action__BehaviorExecution_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember flexbe_msgs__action__BehaviorExecution_FeedbackMessage__rosidl_typesupport_introspection_c__BehaviorExecution_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs__action__BehaviorExecution_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs__action__BehaviorExecution_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers flexbe_msgs__action__BehaviorExecution_FeedbackMessage__rosidl_typesupport_introspection_c__BehaviorExecution_FeedbackMessage_message_members = {
  "flexbe_msgs__action",  // message namespace
  "BehaviorExecution_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(flexbe_msgs__action__BehaviorExecution_FeedbackMessage),
  flexbe_msgs__action__BehaviorExecution_FeedbackMessage__rosidl_typesupport_introspection_c__BehaviorExecution_FeedbackMessage_message_member_array,  // message members
  flexbe_msgs__action__BehaviorExecution_FeedbackMessage__rosidl_typesupport_introspection_c__BehaviorExecution_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  flexbe_msgs__action__BehaviorExecution_FeedbackMessage__rosidl_typesupport_introspection_c__BehaviorExecution_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t flexbe_msgs__action__BehaviorExecution_FeedbackMessage__rosidl_typesupport_introspection_c__BehaviorExecution_FeedbackMessage_message_type_support_handle = {
  0,
  &flexbe_msgs__action__BehaviorExecution_FeedbackMessage__rosidl_typesupport_introspection_c__BehaviorExecution_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_flexbe_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, flexbe_msgs, action, BehaviorExecution_FeedbackMessage)() {
  flexbe_msgs__action__BehaviorExecution_FeedbackMessage__rosidl_typesupport_introspection_c__BehaviorExecution_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  flexbe_msgs__action__BehaviorExecution_FeedbackMessage__rosidl_typesupport_introspection_c__BehaviorExecution_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, flexbe_msgs, action, BehaviorExecution_Feedback)();
  if (!flexbe_msgs__action__BehaviorExecution_FeedbackMessage__rosidl_typesupport_introspection_c__BehaviorExecution_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    flexbe_msgs__action__BehaviorExecution_FeedbackMessage__rosidl_typesupport_introspection_c__BehaviorExecution_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &flexbe_msgs__action__BehaviorExecution_FeedbackMessage__rosidl_typesupport_introspection_c__BehaviorExecution_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
