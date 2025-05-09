// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from flexbe_msgs:msg/BehaviorModification.idl
// generated code does not contain a copyright notice

#ifndef FLEXBE_MSGS__MSG__DETAIL__BEHAVIOR_MODIFICATION__STRUCT_H_
#define FLEXBE_MSGS__MSG__DETAIL__BEHAVIOR_MODIFICATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'new_content'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/BehaviorModification in the package flexbe_msgs.
typedef struct flexbe_msgs__msg__BehaviorModification
{
  int32_t index_begin;
  int32_t index_end;
  rosidl_runtime_c__String new_content;
} flexbe_msgs__msg__BehaviorModification;

// Struct for a sequence of flexbe_msgs__msg__BehaviorModification.
typedef struct flexbe_msgs__msg__BehaviorModification__Sequence
{
  flexbe_msgs__msg__BehaviorModification * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} flexbe_msgs__msg__BehaviorModification__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FLEXBE_MSGS__MSG__DETAIL__BEHAVIOR_MODIFICATION__STRUCT_H_
