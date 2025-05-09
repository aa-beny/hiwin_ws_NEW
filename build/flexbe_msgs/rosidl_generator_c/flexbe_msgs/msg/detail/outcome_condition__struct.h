// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from flexbe_msgs:msg/OutcomeCondition.idl
// generated code does not contain a copyright notice

#ifndef FLEXBE_MSGS__MSG__DETAIL__OUTCOME_CONDITION__STRUCT_H_
#define FLEXBE_MSGS__MSG__DETAIL__OUTCOME_CONDITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'state_name'
// Member 'state_outcome'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/OutcomeCondition in the package flexbe_msgs.
/**
  * Defines a conjunction of required state outcomes in order to return a concurrency outcome
 */
typedef struct flexbe_msgs__msg__OutcomeCondition
{
  rosidl_runtime_c__String__Sequence state_name;
  rosidl_runtime_c__String__Sequence state_outcome;
} flexbe_msgs__msg__OutcomeCondition;

// Struct for a sequence of flexbe_msgs__msg__OutcomeCondition.
typedef struct flexbe_msgs__msg__OutcomeCondition__Sequence
{
  flexbe_msgs__msg__OutcomeCondition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} flexbe_msgs__msg__OutcomeCondition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FLEXBE_MSGS__MSG__DETAIL__OUTCOME_CONDITION__STRUCT_H_
