// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from flexbe_msgs:msg/CommandFeedback.idl
// generated code does not contain a copyright notice

#ifndef FLEXBE_MSGS__MSG__DETAIL__COMMAND_FEEDBACK__STRUCT_H_
#define FLEXBE_MSGS__MSG__DETAIL__COMMAND_FEEDBACK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'command'
// Member 'args'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/CommandFeedback in the package flexbe_msgs.
typedef struct flexbe_msgs__msg__CommandFeedback
{
  rosidl_runtime_c__String command;
  rosidl_runtime_c__String__Sequence args;
} flexbe_msgs__msg__CommandFeedback;

// Struct for a sequence of flexbe_msgs__msg__CommandFeedback.
typedef struct flexbe_msgs__msg__CommandFeedback__Sequence
{
  flexbe_msgs__msg__CommandFeedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} flexbe_msgs__msg__CommandFeedback__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FLEXBE_MSGS__MSG__DETAIL__COMMAND_FEEDBACK__STRUCT_H_
