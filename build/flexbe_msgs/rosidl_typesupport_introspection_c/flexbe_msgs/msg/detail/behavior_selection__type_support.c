// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from flexbe_msgs:msg/BehaviorSelection.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "flexbe_msgs/msg/detail/behavior_selection__rosidl_typesupport_introspection_c.h"
#include "flexbe_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "flexbe_msgs/msg/detail/behavior_selection__functions.h"
#include "flexbe_msgs/msg/detail/behavior_selection__struct.h"


// Include directives for member types
// Member `arg_keys`
// Member `arg_values`
// Member `input_keys`
// Member `input_values`
#include "rosidl_runtime_c/string_functions.h"
// Member `modifications`
#include "flexbe_msgs/msg/behavior_modification.h"
// Member `modifications`
#include "flexbe_msgs/msg/detail/behavior_modification__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__BehaviorSelection_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  flexbe_msgs__msg__BehaviorSelection__init(message_memory);
}

void flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__BehaviorSelection_fini_function(void * message_memory)
{
  flexbe_msgs__msg__BehaviorSelection__fini(message_memory);
}

size_t flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__size_function__BehaviorSelection__arg_keys(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__get_const_function__BehaviorSelection__arg_keys(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__get_function__BehaviorSelection__arg_keys(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__fetch_function__BehaviorSelection__arg_keys(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__get_const_function__BehaviorSelection__arg_keys(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__assign_function__BehaviorSelection__arg_keys(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__get_function__BehaviorSelection__arg_keys(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__resize_function__BehaviorSelection__arg_keys(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__size_function__BehaviorSelection__arg_values(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__get_const_function__BehaviorSelection__arg_values(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__get_function__BehaviorSelection__arg_values(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__fetch_function__BehaviorSelection__arg_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__get_const_function__BehaviorSelection__arg_values(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__assign_function__BehaviorSelection__arg_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__get_function__BehaviorSelection__arg_values(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__resize_function__BehaviorSelection__arg_values(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__size_function__BehaviorSelection__input_keys(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__get_const_function__BehaviorSelection__input_keys(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__get_function__BehaviorSelection__input_keys(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__fetch_function__BehaviorSelection__input_keys(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__get_const_function__BehaviorSelection__input_keys(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__assign_function__BehaviorSelection__input_keys(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__get_function__BehaviorSelection__input_keys(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__resize_function__BehaviorSelection__input_keys(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__size_function__BehaviorSelection__input_values(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__get_const_function__BehaviorSelection__input_values(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__get_function__BehaviorSelection__input_values(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__fetch_function__BehaviorSelection__input_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__get_const_function__BehaviorSelection__input_values(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__assign_function__BehaviorSelection__input_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__get_function__BehaviorSelection__input_values(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__resize_function__BehaviorSelection__input_values(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__size_function__BehaviorSelection__modifications(
  const void * untyped_member)
{
  const flexbe_msgs__msg__BehaviorModification__Sequence * member =
    (const flexbe_msgs__msg__BehaviorModification__Sequence *)(untyped_member);
  return member->size;
}

const void * flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__get_const_function__BehaviorSelection__modifications(
  const void * untyped_member, size_t index)
{
  const flexbe_msgs__msg__BehaviorModification__Sequence * member =
    (const flexbe_msgs__msg__BehaviorModification__Sequence *)(untyped_member);
  return &member->data[index];
}

void * flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__get_function__BehaviorSelection__modifications(
  void * untyped_member, size_t index)
{
  flexbe_msgs__msg__BehaviorModification__Sequence * member =
    (flexbe_msgs__msg__BehaviorModification__Sequence *)(untyped_member);
  return &member->data[index];
}

void flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__fetch_function__BehaviorSelection__modifications(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const flexbe_msgs__msg__BehaviorModification * item =
    ((const flexbe_msgs__msg__BehaviorModification *)
    flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__get_const_function__BehaviorSelection__modifications(untyped_member, index));
  flexbe_msgs__msg__BehaviorModification * value =
    (flexbe_msgs__msg__BehaviorModification *)(untyped_value);
  *value = *item;
}

void flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__assign_function__BehaviorSelection__modifications(
  void * untyped_member, size_t index, const void * untyped_value)
{
  flexbe_msgs__msg__BehaviorModification * item =
    ((flexbe_msgs__msg__BehaviorModification *)
    flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__get_function__BehaviorSelection__modifications(untyped_member, index));
  const flexbe_msgs__msg__BehaviorModification * value =
    (const flexbe_msgs__msg__BehaviorModification *)(untyped_value);
  *item = *value;
}

bool flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__resize_function__BehaviorSelection__modifications(
  void * untyped_member, size_t size)
{
  flexbe_msgs__msg__BehaviorModification__Sequence * member =
    (flexbe_msgs__msg__BehaviorModification__Sequence *)(untyped_member);
  flexbe_msgs__msg__BehaviorModification__Sequence__fini(member);
  return flexbe_msgs__msg__BehaviorModification__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__BehaviorSelection_message_member_array[8] = {
  {
    "behavior_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs__msg__BehaviorSelection, behavior_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "behavior_checksum",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs__msg__BehaviorSelection, behavior_checksum),  // bytes offset in struct
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
    offsetof(flexbe_msgs__msg__BehaviorSelection, autonomy_level),  // bytes offset in struct
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
    offsetof(flexbe_msgs__msg__BehaviorSelection, arg_keys),  // bytes offset in struct
    NULL,  // default value
    flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__size_function__BehaviorSelection__arg_keys,  // size() function pointer
    flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__get_const_function__BehaviorSelection__arg_keys,  // get_const(index) function pointer
    flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__get_function__BehaviorSelection__arg_keys,  // get(index) function pointer
    flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__fetch_function__BehaviorSelection__arg_keys,  // fetch(index, &value) function pointer
    flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__assign_function__BehaviorSelection__arg_keys,  // assign(index, value) function pointer
    flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__resize_function__BehaviorSelection__arg_keys  // resize(index) function pointer
  },
  {
    "arg_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs__msg__BehaviorSelection, arg_values),  // bytes offset in struct
    NULL,  // default value
    flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__size_function__BehaviorSelection__arg_values,  // size() function pointer
    flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__get_const_function__BehaviorSelection__arg_values,  // get_const(index) function pointer
    flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__get_function__BehaviorSelection__arg_values,  // get(index) function pointer
    flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__fetch_function__BehaviorSelection__arg_values,  // fetch(index, &value) function pointer
    flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__assign_function__BehaviorSelection__arg_values,  // assign(index, value) function pointer
    flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__resize_function__BehaviorSelection__arg_values  // resize(index) function pointer
  },
  {
    "input_keys",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs__msg__BehaviorSelection, input_keys),  // bytes offset in struct
    NULL,  // default value
    flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__size_function__BehaviorSelection__input_keys,  // size() function pointer
    flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__get_const_function__BehaviorSelection__input_keys,  // get_const(index) function pointer
    flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__get_function__BehaviorSelection__input_keys,  // get(index) function pointer
    flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__fetch_function__BehaviorSelection__input_keys,  // fetch(index, &value) function pointer
    flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__assign_function__BehaviorSelection__input_keys,  // assign(index, value) function pointer
    flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__resize_function__BehaviorSelection__input_keys  // resize(index) function pointer
  },
  {
    "input_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs__msg__BehaviorSelection, input_values),  // bytes offset in struct
    NULL,  // default value
    flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__size_function__BehaviorSelection__input_values,  // size() function pointer
    flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__get_const_function__BehaviorSelection__input_values,  // get_const(index) function pointer
    flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__get_function__BehaviorSelection__input_values,  // get(index) function pointer
    flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__fetch_function__BehaviorSelection__input_values,  // fetch(index, &value) function pointer
    flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__assign_function__BehaviorSelection__input_values,  // assign(index, value) function pointer
    flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__resize_function__BehaviorSelection__input_values  // resize(index) function pointer
  },
  {
    "modifications",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs__msg__BehaviorSelection, modifications),  // bytes offset in struct
    NULL,  // default value
    flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__size_function__BehaviorSelection__modifications,  // size() function pointer
    flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__get_const_function__BehaviorSelection__modifications,  // get_const(index) function pointer
    flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__get_function__BehaviorSelection__modifications,  // get(index) function pointer
    flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__fetch_function__BehaviorSelection__modifications,  // fetch(index, &value) function pointer
    flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__assign_function__BehaviorSelection__modifications,  // assign(index, value) function pointer
    flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__resize_function__BehaviorSelection__modifications  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__BehaviorSelection_message_members = {
  "flexbe_msgs__msg",  // message namespace
  "BehaviorSelection",  // message name
  8,  // number of fields
  sizeof(flexbe_msgs__msg__BehaviorSelection),
  flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__BehaviorSelection_message_member_array,  // message members
  flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__BehaviorSelection_init_function,  // function to initialize message memory (memory has to be allocated)
  flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__BehaviorSelection_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__BehaviorSelection_message_type_support_handle = {
  0,
  &flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__BehaviorSelection_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_flexbe_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, flexbe_msgs, msg, BehaviorSelection)() {
  flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__BehaviorSelection_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, flexbe_msgs, msg, BehaviorModification)();
  if (!flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__BehaviorSelection_message_type_support_handle.typesupport_identifier) {
    flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__BehaviorSelection_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &flexbe_msgs__msg__BehaviorSelection__rosidl_typesupport_introspection_c__BehaviorSelection_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
