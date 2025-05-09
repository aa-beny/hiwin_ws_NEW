// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from flexbe_msgs:msg/BehaviorSync.idl
// generated code does not contain a copyright notice

#ifndef FLEXBE_MSGS__MSG__DETAIL__BEHAVIOR_SYNC__STRUCT_H_
#define FLEXBE_MSGS__MSG__DETAIL__BEHAVIOR_SYNC__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'INVALID'.
/**
  * denotes unset id or checksum
 */
enum
{
  flexbe_msgs__msg__BehaviorSync__INVALID = 0l
};

/// Struct defined in msg/BehaviorSync in the package flexbe_msgs.
typedef struct flexbe_msgs__msg__BehaviorSync
{
  int32_t behavior_id;
  int32_t current_state_checksum;
} flexbe_msgs__msg__BehaviorSync;

// Struct for a sequence of flexbe_msgs__msg__BehaviorSync.
typedef struct flexbe_msgs__msg__BehaviorSync__Sequence
{
  flexbe_msgs__msg__BehaviorSync * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} flexbe_msgs__msg__BehaviorSync__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FLEXBE_MSGS__MSG__DETAIL__BEHAVIOR_SYNC__STRUCT_H_
