// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from flexbe_msgs:action/BehaviorSynthesis.idl
// generated code does not contain a copyright notice

#ifndef FLEXBE_MSGS__ACTION__DETAIL__BEHAVIOR_SYNTHESIS__STRUCT_H_
#define FLEXBE_MSGS__ACTION__DETAIL__BEHAVIOR_SYNTHESIS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'request'
#include "flexbe_msgs/msg/detail/synthesis_request__struct.h"

/// Struct defined in action/BehaviorSynthesis in the package flexbe_msgs.
typedef struct flexbe_msgs__action__BehaviorSynthesis_Goal
{
  /// Request message as set in the FlexBE UI
  flexbe_msgs__msg__SynthesisRequest request;
} flexbe_msgs__action__BehaviorSynthesis_Goal;

// Struct for a sequence of flexbe_msgs__action__BehaviorSynthesis_Goal.
typedef struct flexbe_msgs__action__BehaviorSynthesis_Goal__Sequence
{
  flexbe_msgs__action__BehaviorSynthesis_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} flexbe_msgs__action__BehaviorSynthesis_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'error_code'
#include "flexbe_msgs/msg/detail/synthesis_error_codes__struct.h"
// Member 'states'
#include "flexbe_msgs/msg/detail/state_instantiation__struct.h"

/// Struct defined in action/BehaviorSynthesis in the package flexbe_msgs.
typedef struct flexbe_msgs__action__BehaviorSynthesis_Result
{
  /// Provides feedback regarding possibly occured errors
  flexbe_msgs__msg__SynthesisErrorCodes error_code;
  /// Result of behavior synthesis as a list of state instantiations
  flexbe_msgs__msg__StateInstantiation__Sequence states;
} flexbe_msgs__action__BehaviorSynthesis_Result;

// Struct for a sequence of flexbe_msgs__action__BehaviorSynthesis_Result.
typedef struct flexbe_msgs__action__BehaviorSynthesis_Result__Sequence
{
  flexbe_msgs__action__BehaviorSynthesis_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} flexbe_msgs__action__BehaviorSynthesis_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/BehaviorSynthesis in the package flexbe_msgs.
typedef struct flexbe_msgs__action__BehaviorSynthesis_Feedback
{
  /// Any custom feedback message regarding the status
  rosidl_runtime_c__String status;
  /// Progress indication from 0 (started) to 1 (completed)
  float progress;
} flexbe_msgs__action__BehaviorSynthesis_Feedback;

// Struct for a sequence of flexbe_msgs__action__BehaviorSynthesis_Feedback.
typedef struct flexbe_msgs__action__BehaviorSynthesis_Feedback__Sequence
{
  flexbe_msgs__action__BehaviorSynthesis_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} flexbe_msgs__action__BehaviorSynthesis_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "flexbe_msgs/action/detail/behavior_synthesis__struct.h"

/// Struct defined in action/BehaviorSynthesis in the package flexbe_msgs.
typedef struct flexbe_msgs__action__BehaviorSynthesis_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  flexbe_msgs__action__BehaviorSynthesis_Goal goal;
} flexbe_msgs__action__BehaviorSynthesis_SendGoal_Request;

// Struct for a sequence of flexbe_msgs__action__BehaviorSynthesis_SendGoal_Request.
typedef struct flexbe_msgs__action__BehaviorSynthesis_SendGoal_Request__Sequence
{
  flexbe_msgs__action__BehaviorSynthesis_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} flexbe_msgs__action__BehaviorSynthesis_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/BehaviorSynthesis in the package flexbe_msgs.
typedef struct flexbe_msgs__action__BehaviorSynthesis_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} flexbe_msgs__action__BehaviorSynthesis_SendGoal_Response;

// Struct for a sequence of flexbe_msgs__action__BehaviorSynthesis_SendGoal_Response.
typedef struct flexbe_msgs__action__BehaviorSynthesis_SendGoal_Response__Sequence
{
  flexbe_msgs__action__BehaviorSynthesis_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} flexbe_msgs__action__BehaviorSynthesis_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/BehaviorSynthesis in the package flexbe_msgs.
typedef struct flexbe_msgs__action__BehaviorSynthesis_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} flexbe_msgs__action__BehaviorSynthesis_GetResult_Request;

// Struct for a sequence of flexbe_msgs__action__BehaviorSynthesis_GetResult_Request.
typedef struct flexbe_msgs__action__BehaviorSynthesis_GetResult_Request__Sequence
{
  flexbe_msgs__action__BehaviorSynthesis_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} flexbe_msgs__action__BehaviorSynthesis_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "flexbe_msgs/action/detail/behavior_synthesis__struct.h"

/// Struct defined in action/BehaviorSynthesis in the package flexbe_msgs.
typedef struct flexbe_msgs__action__BehaviorSynthesis_GetResult_Response
{
  int8_t status;
  flexbe_msgs__action__BehaviorSynthesis_Result result;
} flexbe_msgs__action__BehaviorSynthesis_GetResult_Response;

// Struct for a sequence of flexbe_msgs__action__BehaviorSynthesis_GetResult_Response.
typedef struct flexbe_msgs__action__BehaviorSynthesis_GetResult_Response__Sequence
{
  flexbe_msgs__action__BehaviorSynthesis_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} flexbe_msgs__action__BehaviorSynthesis_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "flexbe_msgs/action/detail/behavior_synthesis__struct.h"

/// Struct defined in action/BehaviorSynthesis in the package flexbe_msgs.
typedef struct flexbe_msgs__action__BehaviorSynthesis_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  flexbe_msgs__action__BehaviorSynthesis_Feedback feedback;
} flexbe_msgs__action__BehaviorSynthesis_FeedbackMessage;

// Struct for a sequence of flexbe_msgs__action__BehaviorSynthesis_FeedbackMessage.
typedef struct flexbe_msgs__action__BehaviorSynthesis_FeedbackMessage__Sequence
{
  flexbe_msgs__action__BehaviorSynthesis_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} flexbe_msgs__action__BehaviorSynthesis_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FLEXBE_MSGS__ACTION__DETAIL__BEHAVIOR_SYNTHESIS__STRUCT_H_
