// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from flexbe_msgs:msg/BehaviorRequest.idl
// generated code does not contain a copyright notice

#ifndef FLEXBE_MSGS__MSG__DETAIL__BEHAVIOR_REQUEST__STRUCT_H_
#define FLEXBE_MSGS__MSG__DETAIL__BEHAVIOR_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'behavior_name'
// Member 'arg_keys'
// Member 'arg_values'
#include "rosidl_runtime_c/string.h"
// Member 'structure'
#include "flexbe_msgs/msg/detail/container__struct.h"

/// Struct defined in msg/BehaviorRequest in the package flexbe_msgs.
typedef struct flexbe_msgs__msg__BehaviorRequest
{
  rosidl_runtime_c__String behavior_name;
  uint8_t autonomy_level;
  rosidl_runtime_c__String__Sequence arg_keys;
  rosidl_runtime_c__String__Sequence arg_values;
  flexbe_msgs__msg__Container__Sequence structure;
} flexbe_msgs__msg__BehaviorRequest;

// Struct for a sequence of flexbe_msgs__msg__BehaviorRequest.
typedef struct flexbe_msgs__msg__BehaviorRequest__Sequence
{
  flexbe_msgs__msg__BehaviorRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} flexbe_msgs__msg__BehaviorRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FLEXBE_MSGS__MSG__DETAIL__BEHAVIOR_REQUEST__STRUCT_H_
