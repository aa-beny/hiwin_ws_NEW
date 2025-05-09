// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from flexbe_msgs:msg/Container.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "flexbe_msgs/msg/detail/container__rosidl_typesupport_introspection_c.h"
#include "flexbe_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "flexbe_msgs/msg/detail/container__functions.h"
#include "flexbe_msgs/msg/detail/container__struct.h"


// Include directives for member types
// Member `path`
// Member `children`
// Member `outcomes`
// Member `transitions`
#include "rosidl_runtime_c/string_functions.h"
// Member `autonomy`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__Container_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  flexbe_msgs__msg__Container__init(message_memory);
}

void flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__Container_fini_function(void * message_memory)
{
  flexbe_msgs__msg__Container__fini(message_memory);
}

size_t flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__size_function__Container__children(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__get_const_function__Container__children(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__get_function__Container__children(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__fetch_function__Container__children(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__get_const_function__Container__children(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__assign_function__Container__children(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__get_function__Container__children(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__resize_function__Container__children(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__size_function__Container__outcomes(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__get_const_function__Container__outcomes(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__get_function__Container__outcomes(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__fetch_function__Container__outcomes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__get_const_function__Container__outcomes(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__assign_function__Container__outcomes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__get_function__Container__outcomes(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__resize_function__Container__outcomes(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__size_function__Container__transitions(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__get_const_function__Container__transitions(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__get_function__Container__transitions(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__fetch_function__Container__transitions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__get_const_function__Container__transitions(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__assign_function__Container__transitions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__get_function__Container__transitions(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__resize_function__Container__transitions(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__size_function__Container__autonomy(
  const void * untyped_member)
{
  const rosidl_runtime_c__int8__Sequence * member =
    (const rosidl_runtime_c__int8__Sequence *)(untyped_member);
  return member->size;
}

const void * flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__get_const_function__Container__autonomy(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int8__Sequence * member =
    (const rosidl_runtime_c__int8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__get_function__Container__autonomy(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int8__Sequence * member =
    (rosidl_runtime_c__int8__Sequence *)(untyped_member);
  return &member->data[index];
}

void flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__fetch_function__Container__autonomy(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int8_t * item =
    ((const int8_t *)
    flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__get_const_function__Container__autonomy(untyped_member, index));
  int8_t * value =
    (int8_t *)(untyped_value);
  *value = *item;
}

void flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__assign_function__Container__autonomy(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int8_t * item =
    ((int8_t *)
    flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__get_function__Container__autonomy(untyped_member, index));
  const int8_t * value =
    (const int8_t *)(untyped_value);
  *item = *value;
}

bool flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__resize_function__Container__autonomy(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int8__Sequence * member =
    (rosidl_runtime_c__int8__Sequence *)(untyped_member);
  rosidl_runtime_c__int8__Sequence__fini(member);
  return rosidl_runtime_c__int8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__Container_message_member_array[5] = {
  {
    "path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs__msg__Container, path),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "children",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs__msg__Container, children),  // bytes offset in struct
    NULL,  // default value
    flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__size_function__Container__children,  // size() function pointer
    flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__get_const_function__Container__children,  // get_const(index) function pointer
    flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__get_function__Container__children,  // get(index) function pointer
    flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__fetch_function__Container__children,  // fetch(index, &value) function pointer
    flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__assign_function__Container__children,  // assign(index, value) function pointer
    flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__resize_function__Container__children  // resize(index) function pointer
  },
  {
    "outcomes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs__msg__Container, outcomes),  // bytes offset in struct
    NULL,  // default value
    flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__size_function__Container__outcomes,  // size() function pointer
    flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__get_const_function__Container__outcomes,  // get_const(index) function pointer
    flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__get_function__Container__outcomes,  // get(index) function pointer
    flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__fetch_function__Container__outcomes,  // fetch(index, &value) function pointer
    flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__assign_function__Container__outcomes,  // assign(index, value) function pointer
    flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__resize_function__Container__outcomes  // resize(index) function pointer
  },
  {
    "transitions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs__msg__Container, transitions),  // bytes offset in struct
    NULL,  // default value
    flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__size_function__Container__transitions,  // size() function pointer
    flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__get_const_function__Container__transitions,  // get_const(index) function pointer
    flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__get_function__Container__transitions,  // get(index) function pointer
    flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__fetch_function__Container__transitions,  // fetch(index, &value) function pointer
    flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__assign_function__Container__transitions,  // assign(index, value) function pointer
    flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__resize_function__Container__transitions  // resize(index) function pointer
  },
  {
    "autonomy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs__msg__Container, autonomy),  // bytes offset in struct
    NULL,  // default value
    flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__size_function__Container__autonomy,  // size() function pointer
    flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__get_const_function__Container__autonomy,  // get_const(index) function pointer
    flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__get_function__Container__autonomy,  // get(index) function pointer
    flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__fetch_function__Container__autonomy,  // fetch(index, &value) function pointer
    flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__assign_function__Container__autonomy,  // assign(index, value) function pointer
    flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__resize_function__Container__autonomy  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__Container_message_members = {
  "flexbe_msgs__msg",  // message namespace
  "Container",  // message name
  5,  // number of fields
  sizeof(flexbe_msgs__msg__Container),
  flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__Container_message_member_array,  // message members
  flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__Container_init_function,  // function to initialize message memory (memory has to be allocated)
  flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__Container_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__Container_message_type_support_handle = {
  0,
  &flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__Container_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_flexbe_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, flexbe_msgs, msg, Container)() {
  if (!flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__Container_message_type_support_handle.typesupport_identifier) {
    flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__Container_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &flexbe_msgs__msg__Container__rosidl_typesupport_introspection_c__Container_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
