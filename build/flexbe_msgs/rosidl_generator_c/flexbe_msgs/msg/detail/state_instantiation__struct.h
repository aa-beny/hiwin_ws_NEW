// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from flexbe_msgs:msg/StateInstantiation.idl
// generated code does not contain a copyright notice

#ifndef FLEXBE_MSGS__MSG__DETAIL__STATE_INSTANTIATION__STRUCT_H_
#define FLEXBE_MSGS__MSG__DETAIL__STATE_INSTANTIATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CLASS_STATEMACHINE'.
/**
  * Specifies the class implementing this state
  * Use one of the provided CLASS constants if this is not a primitive state
  * e.g. "CalculationState"
 */
static const char * const flexbe_msgs__msg__StateInstantiation__CLASS_STATEMACHINE = ":STATEMACHINE";

/// Constant 'CLASS_CONCURRENCY'.
static const char * const flexbe_msgs__msg__StateInstantiation__CLASS_CONCURRENCY = ":CONCURRENCY";

/// Constant 'CLASS_PRIORITY'.
static const char * const flexbe_msgs__msg__StateInstantiation__CLASS_PRIORITY = ":PRIORITY";

/// Constant 'CLASS_BEHAVIOR'.
static const char * const flexbe_msgs__msg__StateInstantiation__CLASS_BEHAVIOR = ":BEHAVIOR";

// Include directives for member types
// Member 'state_path'
// Member 'state_class'
// Member 'initial_state_name'
// Member 'input_keys'
// Member 'output_keys'
// Member 'cond_outcome'
// Member 'behavior_class'
// Member 'parameter_names'
// Member 'parameter_values'
// Member 'outcomes'
// Member 'transitions'
// Member 'userdata_keys'
// Member 'userdata_remapping'
#include "rosidl_runtime_c/string.h"
// Member 'cond_transition'
#include "flexbe_msgs/msg/detail/outcome_condition__struct.h"
// Member 'autonomy'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/StateInstantiation in the package flexbe_msgs.
/**
  * Describes a single instantiation of a state
 */
typedef struct flexbe_msgs__msg__StateInstantiation
{
  /// Path of this state inside the behavior
  /// Last segment of the path is the name of this state
  /// e.g. "/Inner_Statemachine/This_State"
  rosidl_runtime_c__String state_path;
  rosidl_runtime_c__String state_class;
  /// Only relevant for state machine, priority, and concurrency
  /// Name of the initial state / state to be monitored
  rosidl_runtime_c__String initial_state_name;
  /// Input and output keys (can be remapped below)
  rosidl_runtime_c__String__Sequence input_keys;
  rosidl_runtime_c__String__Sequence output_keys;
  /// Only relevant for concurrency
  /// Outcome conditions
  rosidl_runtime_c__String__Sequence cond_outcome;
  flexbe_msgs__msg__OutcomeCondition__Sequence cond_transition;
  /// Only relevant for behavior
  /// Name of the class implementing this state
  rosidl_runtime_c__String behavior_class;
  /// Only relevant for primitive state
  /// List of parameter names and values of this state
  /// Order of names and values has to match
  rosidl_runtime_c__String__Sequence parameter_names;
  rosidl_runtime_c__String__Sequence parameter_values;
  /// Position of this state in the editor [x,y]
  float position[2];
  /// Outcomes of this state
  /// Defines the order of the lists: transitions, autonomy
  rosidl_runtime_c__String__Sequence outcomes;
  /// Transition targets (state names or container outcomes) of the outcomes
  rosidl_runtime_c__String__Sequence transitions;
  /// Required autonomy level of the outcomes
  rosidl_runtime_c__int8__Sequence autonomy;
  /// Userdata of this state
  /// Merges own input_keys and output_keys, no duplicates
  rosidl_runtime_c__String__Sequence userdata_keys;
  /// Remapping of the corresponding own key (= key used by container)
  rosidl_runtime_c__String__Sequence userdata_remapping;
} flexbe_msgs__msg__StateInstantiation;

// Struct for a sequence of flexbe_msgs__msg__StateInstantiation.
typedef struct flexbe_msgs__msg__StateInstantiation__Sequence
{
  flexbe_msgs__msg__StateInstantiation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} flexbe_msgs__msg__StateInstantiation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FLEXBE_MSGS__MSG__DETAIL__STATE_INSTANTIATION__STRUCT_H_
