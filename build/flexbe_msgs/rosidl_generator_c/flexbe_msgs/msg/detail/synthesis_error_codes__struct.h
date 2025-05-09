// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from flexbe_msgs:msg/SynthesisErrorCodes.idl
// generated code does not contain a copyright notice

#ifndef FLEXBE_MSGS__MSG__DETAIL__SYNTHESIS_ERROR_CODES__STRUCT_H_
#define FLEXBE_MSGS__MSG__DETAIL__SYNTHESIS_ERROR_CODES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SUCCESS'.
/**
  * success
 */
enum
{
  flexbe_msgs__msg__SynthesisErrorCodes__SUCCESS = 1l
};

/// Struct defined in msg/SynthesisErrorCodes in the package flexbe_msgs.
typedef struct flexbe_msgs__msg__SynthesisErrorCodes
{
  int32_t value;
} flexbe_msgs__msg__SynthesisErrorCodes;

// Struct for a sequence of flexbe_msgs__msg__SynthesisErrorCodes.
typedef struct flexbe_msgs__msg__SynthesisErrorCodes__Sequence
{
  flexbe_msgs__msg__SynthesisErrorCodes * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} flexbe_msgs__msg__SynthesisErrorCodes__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FLEXBE_MSGS__MSG__DETAIL__SYNTHESIS_ERROR_CODES__STRUCT_H_
