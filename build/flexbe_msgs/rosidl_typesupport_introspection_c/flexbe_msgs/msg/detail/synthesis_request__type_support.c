// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from flexbe_msgs:msg/SynthesisRequest.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "flexbe_msgs/msg/detail/synthesis_request__rosidl_typesupport_introspection_c.h"
#include "flexbe_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "flexbe_msgs/msg/detail/synthesis_request__functions.h"
#include "flexbe_msgs/msg/detail/synthesis_request__struct.h"


// Include directives for member types
// Member `name`
// Member `system`
// Member `goal`
// Member `initial_condition`
// Member `sm_outcomes`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void flexbe_msgs__msg__SynthesisRequest__rosidl_typesupport_introspection_c__SynthesisRequest_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  flexbe_msgs__msg__SynthesisRequest__init(message_memory);
}

void flexbe_msgs__msg__SynthesisRequest__rosidl_typesupport_introspection_c__SynthesisRequest_fini_function(void * message_memory)
{
  flexbe_msgs__msg__SynthesisRequest__fini(message_memory);
}

size_t flexbe_msgs__msg__SynthesisRequest__rosidl_typesupport_introspection_c__size_function__SynthesisRequest__sm_outcomes(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * flexbe_msgs__msg__SynthesisRequest__rosidl_typesupport_introspection_c__get_const_function__SynthesisRequest__sm_outcomes(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * flexbe_msgs__msg__SynthesisRequest__rosidl_typesupport_introspection_c__get_function__SynthesisRequest__sm_outcomes(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void flexbe_msgs__msg__SynthesisRequest__rosidl_typesupport_introspection_c__fetch_function__SynthesisRequest__sm_outcomes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    flexbe_msgs__msg__SynthesisRequest__rosidl_typesupport_introspection_c__get_const_function__SynthesisRequest__sm_outcomes(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void flexbe_msgs__msg__SynthesisRequest__rosidl_typesupport_introspection_c__assign_function__SynthesisRequest__sm_outcomes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    flexbe_msgs__msg__SynthesisRequest__rosidl_typesupport_introspection_c__get_function__SynthesisRequest__sm_outcomes(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool flexbe_msgs__msg__SynthesisRequest__rosidl_typesupport_introspection_c__resize_function__SynthesisRequest__sm_outcomes(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember flexbe_msgs__msg__SynthesisRequest__rosidl_typesupport_introspection_c__SynthesisRequest_message_member_array[5] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs__msg__SynthesisRequest, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "system",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs__msg__SynthesisRequest, system),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs__msg__SynthesisRequest, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "initial_condition",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs__msg__SynthesisRequest, initial_condition),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sm_outcomes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs__msg__SynthesisRequest, sm_outcomes),  // bytes offset in struct
    NULL,  // default value
    flexbe_msgs__msg__SynthesisRequest__rosidl_typesupport_introspection_c__size_function__SynthesisRequest__sm_outcomes,  // size() function pointer
    flexbe_msgs__msg__SynthesisRequest__rosidl_typesupport_introspection_c__get_const_function__SynthesisRequest__sm_outcomes,  // get_const(index) function pointer
    flexbe_msgs__msg__SynthesisRequest__rosidl_typesupport_introspection_c__get_function__SynthesisRequest__sm_outcomes,  // get(index) function pointer
    flexbe_msgs__msg__SynthesisRequest__rosidl_typesupport_introspection_c__fetch_function__SynthesisRequest__sm_outcomes,  // fetch(index, &value) function pointer
    flexbe_msgs__msg__SynthesisRequest__rosidl_typesupport_introspection_c__assign_function__SynthesisRequest__sm_outcomes,  // assign(index, value) function pointer
    flexbe_msgs__msg__SynthesisRequest__rosidl_typesupport_introspection_c__resize_function__SynthesisRequest__sm_outcomes  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers flexbe_msgs__msg__SynthesisRequest__rosidl_typesupport_introspection_c__SynthesisRequest_message_members = {
  "flexbe_msgs__msg",  // message namespace
  "SynthesisRequest",  // message name
  5,  // number of fields
  sizeof(flexbe_msgs__msg__SynthesisRequest),
  flexbe_msgs__msg__SynthesisRequest__rosidl_typesupport_introspection_c__SynthesisRequest_message_member_array,  // message members
  flexbe_msgs__msg__SynthesisRequest__rosidl_typesupport_introspection_c__SynthesisRequest_init_function,  // function to initialize message memory (memory has to be allocated)
  flexbe_msgs__msg__SynthesisRequest__rosidl_typesupport_introspection_c__SynthesisRequest_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t flexbe_msgs__msg__SynthesisRequest__rosidl_typesupport_introspection_c__SynthesisRequest_message_type_support_handle = {
  0,
  &flexbe_msgs__msg__SynthesisRequest__rosidl_typesupport_introspection_c__SynthesisRequest_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_flexbe_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, flexbe_msgs, msg, SynthesisRequest)() {
  if (!flexbe_msgs__msg__SynthesisRequest__rosidl_typesupport_introspection_c__SynthesisRequest_message_type_support_handle.typesupport_identifier) {
    flexbe_msgs__msg__SynthesisRequest__rosidl_typesupport_introspection_c__SynthesisRequest_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &flexbe_msgs__msg__SynthesisRequest__rosidl_typesupport_introspection_c__SynthesisRequest_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
