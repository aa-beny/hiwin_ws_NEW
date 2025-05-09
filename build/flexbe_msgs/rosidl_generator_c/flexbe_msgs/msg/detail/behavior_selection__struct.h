// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from flexbe_msgs:msg/BehaviorSelection.idl
// generated code does not contain a copyright notice

#ifndef FLEXBE_MSGS__MSG__DETAIL__BEHAVIOR_SELECTION__STRUCT_H_
#define FLEXBE_MSGS__MSG__DETAIL__BEHAVIOR_SELECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'arg_keys'
// Member 'arg_values'
// Member 'input_keys'
// Member 'input_values'
#include "rosidl_runtime_c/string.h"
// Member 'modifications'
#include "flexbe_msgs/msg/detail/behavior_modification__struct.h"

/// Struct defined in msg/BehaviorSelection in the package flexbe_msgs.
typedef struct flexbe_msgs__msg__BehaviorSelection
{
  int32_t behavior_id;
  int32_t behavior_checksum;
  uint8_t autonomy_level;
  rosidl_runtime_c__String__Sequence arg_keys;
  rosidl_runtime_c__String__Sequence arg_values;
  rosidl_runtime_c__String__Sequence input_keys;
  rosidl_runtime_c__String__Sequence input_values;
  flexbe_msgs__msg__BehaviorModification__Sequence modifications;
} flexbe_msgs__msg__BehaviorSelection;

// Struct for a sequence of flexbe_msgs__msg__BehaviorSelection.
typedef struct flexbe_msgs__msg__BehaviorSelection__Sequence
{
  flexbe_msgs__msg__BehaviorSelection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} flexbe_msgs__msg__BehaviorSelection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FLEXBE_MSGS__MSG__DETAIL__BEHAVIOR_SELECTION__STRUCT_H_
