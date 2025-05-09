// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from flexbe_msgs:action/BehaviorInput.idl
// generated code does not contain a copyright notice

#ifndef FLEXBE_MSGS__ACTION__DETAIL__BEHAVIOR_INPUT__STRUCT_H_
#define FLEXBE_MSGS__ACTION__DETAIL__BEHAVIOR_INPUT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'msg'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/BehaviorInput in the package flexbe_msgs.
typedef struct flexbe_msgs__action__BehaviorInput_Goal
{
  uint8_t request_type;
  /// Request message displayed to the operator
  /// Provide context information, i.e. for which purpose the data is required.
  rosidl_runtime_c__String msg;
} flexbe_msgs__action__BehaviorInput_Goal;

// Struct for a sequence of flexbe_msgs__action__BehaviorInput_Goal.
typedef struct flexbe_msgs__action__BehaviorInput_Goal__Sequence
{
  flexbe_msgs__action__BehaviorInput_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} flexbe_msgs__action__BehaviorInput_Goal__Sequence;


// Constants defined in the message

/// Constant 'RESULT_OK'.
enum
{
  flexbe_msgs__action__BehaviorInput_Result__RESULT_OK = 0
};

/// Constant 'RESULT_FAILED'.
enum
{
  flexbe_msgs__action__BehaviorInput_Result__RESULT_FAILED = 1
};

/// Constant 'RESULT_ABORTED'.
enum
{
  flexbe_msgs__action__BehaviorInput_Result__RESULT_ABORTED = 2
};

// Include directives for member types
// Member 'data'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/BehaviorInput in the package flexbe_msgs.
typedef struct flexbe_msgs__action__BehaviorInput_Result
{
  /// Indicates if the request has been successful
  uint8_t result_code;
  /// Serialized data which was requested
  /// In case of result_code != RESULT_OK, this field will contain unserialized data regarding the reason of failure instead.
  rosidl_runtime_c__String data;
} flexbe_msgs__action__BehaviorInput_Result;

// Struct for a sequence of flexbe_msgs__action__BehaviorInput_Result.
typedef struct flexbe_msgs__action__BehaviorInput_Result__Sequence
{
  flexbe_msgs__action__BehaviorInput_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} flexbe_msgs__action__BehaviorInput_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/BehaviorInput in the package flexbe_msgs.
typedef struct flexbe_msgs__action__BehaviorInput_Feedback
{
  uint8_t structure_needs_at_least_one_member;
} flexbe_msgs__action__BehaviorInput_Feedback;

// Struct for a sequence of flexbe_msgs__action__BehaviorInput_Feedback.
typedef struct flexbe_msgs__action__BehaviorInput_Feedback__Sequence
{
  flexbe_msgs__action__BehaviorInput_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} flexbe_msgs__action__BehaviorInput_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "flexbe_msgs/action/detail/behavior_input__struct.h"

/// Struct defined in action/BehaviorInput in the package flexbe_msgs.
typedef struct flexbe_msgs__action__BehaviorInput_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  flexbe_msgs__action__BehaviorInput_Goal goal;
} flexbe_msgs__action__BehaviorInput_SendGoal_Request;

// Struct for a sequence of flexbe_msgs__action__BehaviorInput_SendGoal_Request.
typedef struct flexbe_msgs__action__BehaviorInput_SendGoal_Request__Sequence
{
  flexbe_msgs__action__BehaviorInput_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} flexbe_msgs__action__BehaviorInput_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/BehaviorInput in the package flexbe_msgs.
typedef struct flexbe_msgs__action__BehaviorInput_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} flexbe_msgs__action__BehaviorInput_SendGoal_Response;

// Struct for a sequence of flexbe_msgs__action__BehaviorInput_SendGoal_Response.
typedef struct flexbe_msgs__action__BehaviorInput_SendGoal_Response__Sequence
{
  flexbe_msgs__action__BehaviorInput_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} flexbe_msgs__action__BehaviorInput_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/BehaviorInput in the package flexbe_msgs.
typedef struct flexbe_msgs__action__BehaviorInput_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} flexbe_msgs__action__BehaviorInput_GetResult_Request;

// Struct for a sequence of flexbe_msgs__action__BehaviorInput_GetResult_Request.
typedef struct flexbe_msgs__action__BehaviorInput_GetResult_Request__Sequence
{
  flexbe_msgs__action__BehaviorInput_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} flexbe_msgs__action__BehaviorInput_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "flexbe_msgs/action/detail/behavior_input__struct.h"

/// Struct defined in action/BehaviorInput in the package flexbe_msgs.
typedef struct flexbe_msgs__action__BehaviorInput_GetResult_Response
{
  int8_t status;
  flexbe_msgs__action__BehaviorInput_Result result;
} flexbe_msgs__action__BehaviorInput_GetResult_Response;

// Struct for a sequence of flexbe_msgs__action__BehaviorInput_GetResult_Response.
typedef struct flexbe_msgs__action__BehaviorInput_GetResult_Response__Sequence
{
  flexbe_msgs__action__BehaviorInput_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} flexbe_msgs__action__BehaviorInput_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "flexbe_msgs/action/detail/behavior_input__struct.h"

/// Struct defined in action/BehaviorInput in the package flexbe_msgs.
typedef struct flexbe_msgs__action__BehaviorInput_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  flexbe_msgs__action__BehaviorInput_Feedback feedback;
} flexbe_msgs__action__BehaviorInput_FeedbackMessage;

// Struct for a sequence of flexbe_msgs__action__BehaviorInput_FeedbackMessage.
typedef struct flexbe_msgs__action__BehaviorInput_FeedbackMessage__Sequence
{
  flexbe_msgs__action__BehaviorInput_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} flexbe_msgs__action__BehaviorInput_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FLEXBE_MSGS__ACTION__DETAIL__BEHAVIOR_INPUT__STRUCT_H_
