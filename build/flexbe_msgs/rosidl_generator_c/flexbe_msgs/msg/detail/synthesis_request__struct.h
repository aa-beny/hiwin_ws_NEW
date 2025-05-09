// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from flexbe_msgs:msg/SynthesisRequest.idl
// generated code does not contain a copyright notice

#ifndef FLEXBE_MSGS__MSG__DETAIL__SYNTHESIS_REQUEST__STRUCT_H_
#define FLEXBE_MSGS__MSG__DETAIL__SYNTHESIS_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'system'
// Member 'goal'
// Member 'initial_condition'
// Member 'sm_outcomes'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/SynthesisRequest in the package flexbe_msgs.
/**
  * Minimal template for the request data provided by the FlexBE synthesis interface.
  * Either refer this message as 'request' in the goal part of your synthesis action
  * or implement your own by at least supporting the fields listed below.
 */
typedef struct flexbe_msgs__msg__SynthesisRequest
{
  /// Identifier of this synthesis query, can for example be used to set the name of the resulting state machine
  rosidl_runtime_c__String name;
  /// Identifier of the system (i.e., configuration data set) to be used by the synthesis tool
  rosidl_runtime_c__String system;
  /// Goal to be achieved by the synthesized behavior
  rosidl_runtime_c__String goal;
  /// Initial conditions from which the synthesized behavior will start
  rosidl_runtime_c__String initial_condition;
  /// Available outcomes of the generated state machine,
  /// i.e., possible results of the synthesized behavior
  rosidl_runtime_c__String__Sequence sm_outcomes;
} flexbe_msgs__msg__SynthesisRequest;

// Struct for a sequence of flexbe_msgs__msg__SynthesisRequest.
typedef struct flexbe_msgs__msg__SynthesisRequest__Sequence
{
  flexbe_msgs__msg__SynthesisRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} flexbe_msgs__msg__SynthesisRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FLEXBE_MSGS__MSG__DETAIL__SYNTHESIS_REQUEST__STRUCT_H_
