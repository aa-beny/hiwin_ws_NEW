// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from flexbe_msgs:msg/ContainerStructure.idl
// generated code does not contain a copyright notice

#ifndef FLEXBE_MSGS__MSG__DETAIL__CONTAINER_STRUCTURE__STRUCT_H_
#define FLEXBE_MSGS__MSG__DETAIL__CONTAINER_STRUCTURE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'containers'
#include "flexbe_msgs/msg/detail/container__struct.h"

/// Struct defined in msg/ContainerStructure in the package flexbe_msgs.
typedef struct flexbe_msgs__msg__ContainerStructure
{
  int32_t behavior_id;
  flexbe_msgs__msg__Container__Sequence containers;
} flexbe_msgs__msg__ContainerStructure;

// Struct for a sequence of flexbe_msgs__msg__ContainerStructure.
typedef struct flexbe_msgs__msg__ContainerStructure__Sequence
{
  flexbe_msgs__msg__ContainerStructure * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} flexbe_msgs__msg__ContainerStructure__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FLEXBE_MSGS__MSG__DETAIL__CONTAINER_STRUCTURE__STRUCT_H_
