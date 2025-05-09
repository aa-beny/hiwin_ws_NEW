// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from flexbe_msgs:action/BehaviorExecution.idl
// generated code does not contain a copyright notice

#ifndef FLEXBE_MSGS__ACTION__DETAIL__BEHAVIOR_EXECUTION__STRUCT_H_
#define FLEXBE_MSGS__ACTION__DETAIL__BEHAVIOR_EXECUTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'behavior_name'
// Member 'arg_keys'
// Member 'arg_values'
// Member 'input_keys'
// Member 'input_values'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/BehaviorExecution in the package flexbe_msgs.
typedef struct flexbe_msgs__action__BehaviorExecution_Goal
{
  /// name of the behavior to be executed
  rosidl_runtime_c__String behavior_name;
  /// optional list of behavior parameters
  rosidl_runtime_c__String__Sequence arg_keys;
  rosidl_runtime_c__String__Sequence arg_values;
  /// optional list of initial userdata
  rosidl_runtime_c__String__Sequence input_keys;
  rosidl_runtime_c__String__Sequence input_values;
} flexbe_msgs__action__BehaviorExecution_Goal;

// Struct for a sequence of flexbe_msgs__action__BehaviorExecution_Goal.
typedef struct flexbe_msgs__action__BehaviorExecution_Goal__Sequence
{
  flexbe_msgs__action__BehaviorExecution_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} flexbe_msgs__action__BehaviorExecution_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'outcome'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/BehaviorExecution in the package flexbe_msgs.
typedef struct flexbe_msgs__action__BehaviorExecution_Result
{
  /// result of the executed behavior
  rosidl_runtime_c__String outcome;
} flexbe_msgs__action__BehaviorExecution_Result;

// Struct for a sequence of flexbe_msgs__action__BehaviorExecution_Result.
typedef struct flexbe_msgs__action__BehaviorExecution_Result__Sequence
{
  flexbe_msgs__action__BehaviorExecution_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} flexbe_msgs__action__BehaviorExecution_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'current_state'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/BehaviorExecution in the package flexbe_msgs.
typedef struct flexbe_msgs__action__BehaviorExecution_Feedback
{
  /// path of the current state
  rosidl_runtime_c__String current_state;
} flexbe_msgs__action__BehaviorExecution_Feedback;

// Struct for a sequence of flexbe_msgs__action__BehaviorExecution_Feedback.
typedef struct flexbe_msgs__action__BehaviorExecution_Feedback__Sequence
{
  flexbe_msgs__action__BehaviorExecution_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} flexbe_msgs__action__BehaviorExecution_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "flexbe_msgs/action/detail/behavior_execution__struct.h"

/// Struct defined in action/BehaviorExecution in the package flexbe_msgs.
typedef struct flexbe_msgs__action__BehaviorExecution_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  flexbe_msgs__action__BehaviorExecution_Goal goal;
} flexbe_msgs__action__BehaviorExecution_SendGoal_Request;

// Struct for a sequence of flexbe_msgs__action__BehaviorExecution_SendGoal_Request.
typedef struct flexbe_msgs__action__BehaviorExecution_SendGoal_Request__Sequence
{
  flexbe_msgs__action__BehaviorExecution_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} flexbe_msgs__action__BehaviorExecution_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/BehaviorExecution in the package flexbe_msgs.
typedef struct flexbe_msgs__action__BehaviorExecution_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} flexbe_msgs__action__BehaviorExecution_SendGoal_Response;

// Struct for a sequence of flexbe_msgs__action__BehaviorExecution_SendGoal_Response.
typedef struct flexbe_msgs__action__BehaviorExecution_SendGoal_Response__Sequence
{
  flexbe_msgs__action__BehaviorExecution_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} flexbe_msgs__action__BehaviorExecution_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/BehaviorExecution in the package flexbe_msgs.
typedef struct flexbe_msgs__action__BehaviorExecution_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} flexbe_msgs__action__BehaviorExecution_GetResult_Request;

// Struct for a sequence of flexbe_msgs__action__BehaviorExecution_GetResult_Request.
typedef struct flexbe_msgs__action__BehaviorExecution_GetResult_Request__Sequence
{
  flexbe_msgs__action__BehaviorExecution_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} flexbe_msgs__action__BehaviorExecution_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "flexbe_msgs/action/detail/behavior_execution__struct.h"

/// Struct defined in action/BehaviorExecution in the package flexbe_msgs.
typedef struct flexbe_msgs__action__BehaviorExecution_GetResult_Response
{
  int8_t status;
  flexbe_msgs__action__BehaviorExecution_Result result;
} flexbe_msgs__action__BehaviorExecution_GetResult_Response;

// Struct for a sequence of flexbe_msgs__action__BehaviorExecution_GetResult_Response.
typedef struct flexbe_msgs__action__BehaviorExecution_GetResult_Response__Sequence
{
  flexbe_msgs__action__BehaviorExecution_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} flexbe_msgs__action__BehaviorExecution_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "flexbe_msgs/action/detail/behavior_execution__struct.h"

/// Struct defined in action/BehaviorExecution in the package flexbe_msgs.
typedef struct flexbe_msgs__action__BehaviorExecution_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  flexbe_msgs__action__BehaviorExecution_Feedback feedback;
} flexbe_msgs__action__BehaviorExecution_FeedbackMessage;

// Struct for a sequence of flexbe_msgs__action__BehaviorExecution_FeedbackMessage.
typedef struct flexbe_msgs__action__BehaviorExecution_FeedbackMessage__Sequence
{
  flexbe_msgs__action__BehaviorExecution_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} flexbe_msgs__action__BehaviorExecution_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FLEXBE_MSGS__ACTION__DETAIL__BEHAVIOR_EXECUTION__STRUCT_H_
