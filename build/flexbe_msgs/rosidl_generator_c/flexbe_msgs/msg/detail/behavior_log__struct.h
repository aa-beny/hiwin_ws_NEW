// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from flexbe_msgs:msg/BehaviorLog.idl
// generated code does not contain a copyright notice

#ifndef FLEXBE_MSGS__MSG__DETAIL__BEHAVIOR_LOG__STRUCT_H_
#define FLEXBE_MSGS__MSG__DETAIL__BEHAVIOR_LOG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'INFO'.
enum
{
  flexbe_msgs__msg__BehaviorLog__INFO = 0
};

/// Constant 'WARN'.
enum
{
  flexbe_msgs__msg__BehaviorLog__WARN = 1
};

/// Constant 'HINT'.
enum
{
  flexbe_msgs__msg__BehaviorLog__HINT = 2
};

/// Constant 'ERROR'.
enum
{
  flexbe_msgs__msg__BehaviorLog__ERROR = 3
};

/// Constant 'DEBUG'.
enum
{
  flexbe_msgs__msg__BehaviorLog__DEBUG = 10
};

// Include directives for member types
// Member 'text'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/BehaviorLog in the package flexbe_msgs.
typedef struct flexbe_msgs__msg__BehaviorLog
{
  rosidl_runtime_c__String text;
  uint8_t status_code;
} flexbe_msgs__msg__BehaviorLog;

// Struct for a sequence of flexbe_msgs__msg__BehaviorLog.
typedef struct flexbe_msgs__msg__BehaviorLog__Sequence
{
  flexbe_msgs__msg__BehaviorLog * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} flexbe_msgs__msg__BehaviorLog__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FLEXBE_MSGS__MSG__DETAIL__BEHAVIOR_LOG__STRUCT_H_
