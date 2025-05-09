// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from flexbe_msgs:msg/UICommand.idl
// generated code does not contain a copyright notice

#ifndef FLEXBE_MSGS__MSG__DETAIL__UI_COMMAND__STRUCT_H_
#define FLEXBE_MSGS__MSG__DETAIL__UI_COMMAND__STRUCT_H_

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
// Member 'key'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/UICommand in the package flexbe_msgs.
/**
  * Sends a command to the command interface of the FlexBE UI.
  * In order to be successfully executed, the user needs to have ROS commands enabled and the keys have to match.
 */
typedef struct flexbe_msgs__msg__UICommand
{
  /// Command to be executed as it would be entered in the command interface
  rosidl_runtime_c__String command;
  /// Security key, needs to match the key set in the UI
  rosidl_runtime_c__String key;
} flexbe_msgs__msg__UICommand;

// Struct for a sequence of flexbe_msgs__msg__UICommand.
typedef struct flexbe_msgs__msg__UICommand__Sequence
{
  flexbe_msgs__msg__UICommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} flexbe_msgs__msg__UICommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FLEXBE_MSGS__MSG__DETAIL__UI_COMMAND__STRUCT_H_
