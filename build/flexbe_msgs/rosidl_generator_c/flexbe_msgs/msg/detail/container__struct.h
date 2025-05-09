// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from flexbe_msgs:msg/Container.idl
// generated code does not contain a copyright notice

#ifndef FLEXBE_MSGS__MSG__DETAIL__CONTAINER__STRUCT_H_
#define FLEXBE_MSGS__MSG__DETAIL__CONTAINER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'path'
// Member 'children'
// Member 'outcomes'
// Member 'transitions'
#include "rosidl_runtime_c/string.h"
// Member 'autonomy'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Container in the package flexbe_msgs.
typedef struct flexbe_msgs__msg__Container
{
  rosidl_runtime_c__String path;
  rosidl_runtime_c__String__Sequence children;
  rosidl_runtime_c__String__Sequence outcomes;
  rosidl_runtime_c__String__Sequence transitions;
  rosidl_runtime_c__int8__Sequence autonomy;
} flexbe_msgs__msg__Container;

// Struct for a sequence of flexbe_msgs__msg__Container.
typedef struct flexbe_msgs__msg__Container__Sequence
{
  flexbe_msgs__msg__Container * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} flexbe_msgs__msg__Container__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FLEXBE_MSGS__MSG__DETAIL__CONTAINER__STRUCT_H_
