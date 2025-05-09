// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from flexbe_msgs:msg/BEStatus.idl
// generated code does not contain a copyright notice

#ifndef FLEXBE_MSGS__MSG__DETAIL__BE_STATUS__STRUCT_H_
#define FLEXBE_MSGS__MSG__DETAIL__BE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STARTED'.
enum
{
  flexbe_msgs__msg__BEStatus__STARTED = 0
};

/// Constant 'FINISHED'.
enum
{
  flexbe_msgs__msg__BEStatus__FINISHED = 1
};

/// Constant 'FAILED'.
enum
{
  flexbe_msgs__msg__BEStatus__FAILED = 2
};

/// Constant 'LOCKED'.
enum
{
  flexbe_msgs__msg__BEStatus__LOCKED = 4
};

/// Constant 'WAITING'.
enum
{
  flexbe_msgs__msg__BEStatus__WAITING = 5
};

/// Constant 'SWITCHING'.
enum
{
  flexbe_msgs__msg__BEStatus__SWITCHING = 6
};

/// Constant 'WARNING'.
/**
  * General problems
 */
enum
{
  flexbe_msgs__msg__BEStatus__WARNING = 10
};

/// Constant 'ERROR'.
enum
{
  flexbe_msgs__msg__BEStatus__ERROR = 11
};

/// Constant 'READY'.
/**
  * Engine Status
 */
enum
{
  flexbe_msgs__msg__BEStatus__READY = 20
};

/// Constant 'RUNNING'.
enum
{
  flexbe_msgs__msg__BEStatus__RUNNING = 30
};

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'args'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/BEStatus in the package flexbe_msgs.
/**
  * Behavior Status
 */
typedef struct flexbe_msgs__msg__BEStatus
{
  builtin_interfaces__msg__Time stamp;
  int32_t behavior_id;
  uint8_t code;
  rosidl_runtime_c__String__Sequence args;
} flexbe_msgs__msg__BEStatus;

// Struct for a sequence of flexbe_msgs__msg__BEStatus.
typedef struct flexbe_msgs__msg__BEStatus__Sequence
{
  flexbe_msgs__msg__BEStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} flexbe_msgs__msg__BEStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FLEXBE_MSGS__MSG__DETAIL__BE_STATUS__STRUCT_H_
