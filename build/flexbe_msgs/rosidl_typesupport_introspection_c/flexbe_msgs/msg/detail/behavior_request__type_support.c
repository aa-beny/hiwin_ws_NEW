// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from flexbe_msgs:msg/BehaviorRequest.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "flexbe_msgs/msg/detail/behavior_request__rosidl_typesupport_introspection_c.h"
#include "flexbe_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "flexbe_msgs/msg/detail/behavior_request__functions.h"
#include "flexbe_msgs/msg/detail/behavior_request__struct.h"


// Include directives for member types
// Member `behavior_name`
// Member `arg_keys`
// Member `arg_values`
#include "rosidl_runtime_c/string_functions.h"
// Member `structure`
#include "flexbe_msgs/msg/container.h"
// Member `structure`
#include "flexbe_msgs/msg/detail/container__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void flexbe_msgs__msg__BehaviorRequest__rosidl_typesupport_introspection_c__BehaviorRequest_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  flexbe_msgs__msg__BehaviorRequest__init(message_memory);
}

void flexbe_msgs__msg__BehaviorRequest__rosidl_typesupport_introspection_c__BehaviorRequest_fini_function(void * message_memory)
{
  flexbe_msgs__msg__BehaviorRequest__fini(message_memory);
}

size_t flexbe_msgs__msg__BehaviorRequest__rosidl_typesupport_introspection_c__size_function__BehaviorRequest__arg_keys(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * flexbe_msgs__msg__BehaviorRequest__rosidl_typesupport_introspection_c__get_const_function__BehaviorRequest__arg_keys(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * flexbe_msgs__msg__BehaviorRequest__rosidl_typesupport_introspection_c__get_function__BehaviorRequest__arg_keys(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void flexbe_msgs__msg__BehaviorRequest__rosidl_typesupport_introspection_c__fetch_function__BehaviorRequest__arg_keys(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    flexbe_msgs__msg__BehaviorRequest__rosidl_typesupport_introspection_c__get_const_function__BehaviorRequest__arg_keys(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void flexbe_msgs__msg__BehaviorRequest__rosidl_typesupport_introspection_c__assign_function__BehaviorRequest__arg_keys(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    flexbe_msgs__msg__BehaviorRequest__rosidl_typesupport_introspection_c__get_function__BehaviorRequest__arg_keys(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool flexbe_msgs__msg__BehaviorRequest__rosidl_typesupport_introspection_c__resize_function__BehaviorRequest__arg_keys(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t flexbe_msgs__msg__BehaviorRequest__rosidl_typesupport_introspection_c__size_function__BehaviorRequest__arg_values(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * flexbe_msgs__msg__BehaviorRequest__rosidl_typesupport_introspection_c__get_const_function__BehaviorRequest__arg_values(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * flexbe_msgs__msg__BehaviorRequest__rosidl_typesupport_introspection_c__get_function__BehaviorRequest__arg_values(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void flexbe_msgs__msg__BehaviorRequest__rosidl_typesupport_introspection_c__fetch_function__BehaviorRequest__arg_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    flexbe_msgs__msg__BehaviorRequest__rosidl_typesupport_introspection_c__get_const_function__BehaviorRequest__arg_values(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void flexbe_msgs__msg__BehaviorRequest__rosidl_typesupport_introspection_c__assign_function__BehaviorRequest__arg_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    flexbe_msgs__msg__BehaviorRequest__rosidl_typesupport_introspection_c__get_function__BehaviorRequest__arg_values(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool flexbe_msgs__msg__BehaviorRequest__rosidl_typesupport_introspection_c__resize_function__BehaviorRequest__arg_values(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t flexbe_msgs__msg__BehaviorRequest__rosidl_typesupport_introspection_c__size_function__BehaviorRequest__structure(
  const void * untyped_member)
{
  const flexbe_msgs__msg__Container__Sequence * member =
    (const flexbe_msgs__msg__Container__Sequence *)(untyped_member);
  return member->size;
}

const void * flexbe_msgs__msg__BehaviorRequest__rosidl_typesupport_introspection_c__get_const_function__BehaviorRequest__structure(
  const void * untyped_member, size_t index)
{
  const flexbe_msgs__msg__Container__Sequence * member =
    (const flexbe_msgs__msg__Container__Sequence *)(untyped_member);
  return &member->data[index];
}

void * flexbe_msgs__msg__BehaviorRequest__rosidl_typesupport_introspection_c__get_function__BehaviorRequest__structure(
  void * untyped_member, size_t index)
{
  flexbe_msgs__msg__Container__Sequence * member =
    (flexbe_msgs__msg__Container__Sequence *)(untyped_member);
  return &member->data[index];
}

void flexbe_msgs__msg__BehaviorRequest__rosidl_typesupport_introspection_c__fetch_function__BehaviorRequest__structure(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const flexbe_msgs__msg__Container * item =
    ((const flexbe_msgs__msg__Container *)
    flexbe_msgs__msg__BehaviorRequest__rosidl_typesupport_introspection_c__get_const_function__BehaviorRequest__structure(untyped_member, index));
  flexbe_msgs__msg__Container * value =
    (flexbe_msgs__msg__Container *)(untyped_value);
  *value = *item;
}

void flexbe_msgs__msg__BehaviorRequest__rosidl_typesupport_introspection_c__assign_function__BehaviorRequest__structure(
  void * untyped_member, size_t index, const void * untyped_value)
{
  flexbe_msgs__msg__Container * item =
    ((flexbe_msgs__msg__Container *)
    flexbe_msgs__msg__BehaviorRequest__rosidl_typesupport_introspection_c__get_function__BehaviorRequest__structure(untyped_member, index));
  const flexbe_msgs__msg__Container * value =
    (const flexbe_msgs__msg__Container *)(untyped_value);
  *item = *value;
}

bool flexbe_msgs__msg__BehaviorRequest__rosidl_typesupport_introspection_c__resize_function__BehaviorRequest__structure(
  void * untyped_member, size_t size)
{
  flexbe_msgs__msg__Container__Sequence * member =
    (flexbe_msgs__msg__Container__Sequence *)(untyped_member);
  flexbe_msgs__msg__Container__Sequence__fini(member);
  return flexbe_msgs__msg__Container__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember flexbe_msgs__msg__BehaviorRequest__rosidl_typesupport_introspection_c__BehaviorRequest_message_member_array[5] = {
  {
    "behavior_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs__msg__BehaviorRequest, behavior_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "autonomy_level",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs__msg__BehaviorRequest, autonomy_level),  // bytes offset in struct
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
    offsetof(flexbe_msgs__msg__BehaviorRequest, arg_keys),  // bytes offset in struct
    NULL,  // default value
    flexbe_msgs__msg__BehaviorRequest__rosidl_typesupport_introspection_c__size_function__BehaviorRequest__arg_keys,  // size() function pointer
    flexbe_msgs__msg__BehaviorRequest__rosidl_typesupport_introspection_c__get_const_function__BehaviorRequest__arg_keys,  // get_const(index) function pointer
    flexbe_msgs__msg__BehaviorRequest__rosidl_typesupport_introspection_c__get_function__BehaviorRequest__arg_keys,  // get(index) function pointer
    flexbe_msgs__msg__BehaviorRequest__rosidl_typesupport_introspection_c__fetch_function__BehaviorRequest__arg_keys,  // fetch(index, &value) function pointer
    flexbe_msgs__msg__BehaviorRequest__rosidl_typesupport_introspection_c__assign_function__BehaviorRequest__arg_keys,  // assign(index, value) function pointer
    flexbe_msgs__msg__BehaviorRequest__rosidl_typesupport_introspection_c__resize_function__BehaviorRequest__arg_keys  // resize(index) function pointer
  },
  {
    "arg_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs__msg__BehaviorRequest, arg_values),  // bytes offset in struct
    NULL,  // default value
    flexbe_msgs__msg__BehaviorRequest__rosidl_typesupport_introspection_c__size_function__BehaviorRequest__arg_values,  // size() function pointer
    flexbe_msgs__msg__BehaviorRequest__rosidl_typesupport_introspection_c__get_const_function__BehaviorRequest__arg_values,  // get_const(index) function pointer
    flexbe_msgs__msg__BehaviorRequest__rosidl_typesupport_introspection_c__get_function__BehaviorRequest__arg_values,  // get(index) function pointer
    flexbe_msgs__msg__BehaviorRequest__rosidl_typesupport_introspection_c__fetch_function__BehaviorRequest__arg_values,  // fetch(index, &value) function pointer
    flexbe_msgs__msg__BehaviorRequest__rosidl_typesupport_introspection_c__assign_function__BehaviorRequest__arg_values,  // assign(index, value) function pointer
    flexbe_msgs__msg__BehaviorRequest__rosidl_typesupport_introspection_c__resize_function__BehaviorRequest__arg_values  // resize(index) function pointer
  },
  {
    "structure",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs__msg__BehaviorRequest, structure),  // bytes offset in struct
    NULL,  // default value
    flexbe_msgs__msg__BehaviorRequest__rosidl_typesupport_introspection_c__size_function__BehaviorRequest__structure,  // size() function pointer
    flexbe_msgs__msg__BehaviorRequest__rosidl_typesupport_introspection_c__get_const_function__BehaviorRequest__structure,  // get_const(index) function pointer
    flexbe_msgs__msg__BehaviorRequest__rosidl_typesupport_introspection_c__get_function__BehaviorRequest__structure,  // get(index) function pointer
    flexbe_msgs__msg__BehaviorRequest__rosidl_typesupport_introspection_c__fetch_function__BehaviorRequest__structure,  // fetch(index, &value) function pointer
    flexbe_msgs__msg__BehaviorRequest__rosidl_typesupport_introspection_c__assign_function__BehaviorRequest__structure,  // assign(index, value) function pointer
    flexbe_msgs__msg__BehaviorRequest__rosidl_typesupport_introspection_c__resize_function__BehaviorRequest__structure  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers flexbe_msgs__msg__BehaviorRequest__rosidl_typesupport_introspection_c__BehaviorRequest_message_members = {
  "flexbe_msgs__msg",  // message namespace
  "BehaviorRequest",  // message name
  5,  // number of fields
  sizeof(flexbe_msgs__msg__BehaviorRequest),
  flexbe_msgs__msg__BehaviorRequest__rosidl_typesupport_introspection_c__BehaviorRequest_message_member_array,  // message members
  flexbe_msgs__msg__BehaviorRequest__rosidl_typesupport_introspection_c__BehaviorRequest_init_function,  // function to initialize message memory (memory has to be allocated)
  flexbe_msgs__msg__BehaviorRequest__rosidl_typesupport_introspection_c__BehaviorRequest_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t flexbe_msgs__msg__BehaviorRequest__rosidl_typesupport_introspection_c__BehaviorRequest_message_type_support_handle = {
  0,
  &flexbe_msgs__msg__BehaviorRequest__rosidl_typesupport_introspection_c__BehaviorRequest_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_flexbe_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, flexbe_msgs, msg, BehaviorRequest)() {
  flexbe_msgs__msg__BehaviorRequest__rosidl_typesupport_introspection_c__BehaviorRequest_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, flexbe_msgs, msg, Container)();
  if (!flexbe_msgs__msg__BehaviorRequest__rosidl_typesupport_introspection_c__BehaviorRequest_message_type_support_handle.typesupport_identifier) {
    flexbe_msgs__msg__BehaviorRequest__rosidl_typesupport_introspection_c__BehaviorRequest_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &flexbe_msgs__msg__BehaviorRequest__rosidl_typesupport_introspection_c__BehaviorRequest_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
