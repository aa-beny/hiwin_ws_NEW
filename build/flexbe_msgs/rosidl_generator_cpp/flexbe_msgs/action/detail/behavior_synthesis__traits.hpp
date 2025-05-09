// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from flexbe_msgs:action/BehaviorSynthesis.idl
// generated code does not contain a copyright notice

#ifndef FLEXBE_MSGS__ACTION__DETAIL__BEHAVIOR_SYNTHESIS__TRAITS_HPP_
#define FLEXBE_MSGS__ACTION__DETAIL__BEHAVIOR_SYNTHESIS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "flexbe_msgs/action/detail/behavior_synthesis__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'request'
#include "flexbe_msgs/msg/detail/synthesis_request__traits.hpp"

namespace flexbe_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const BehaviorSynthesis_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: request
  {
    out << "request: ";
    to_flow_style_yaml(msg.request, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BehaviorSynthesis_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request:\n";
    to_block_style_yaml(msg.request, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BehaviorSynthesis_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace flexbe_msgs

namespace rosidl_generator_traits
{

[[deprecated("use flexbe_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const flexbe_msgs::action::BehaviorSynthesis_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  flexbe_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use flexbe_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const flexbe_msgs::action::BehaviorSynthesis_Goal & msg)
{
  return flexbe_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<flexbe_msgs::action::BehaviorSynthesis_Goal>()
{
  return "flexbe_msgs::action::BehaviorSynthesis_Goal";
}

template<>
inline const char * name<flexbe_msgs::action::BehaviorSynthesis_Goal>()
{
  return "flexbe_msgs/action/BehaviorSynthesis_Goal";
}

template<>
struct has_fixed_size<flexbe_msgs::action::BehaviorSynthesis_Goal>
  : std::integral_constant<bool, has_fixed_size<flexbe_msgs::msg::SynthesisRequest>::value> {};

template<>
struct has_bounded_size<flexbe_msgs::action::BehaviorSynthesis_Goal>
  : std::integral_constant<bool, has_bounded_size<flexbe_msgs::msg::SynthesisRequest>::value> {};

template<>
struct is_message<flexbe_msgs::action::BehaviorSynthesis_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'error_code'
#include "flexbe_msgs/msg/detail/synthesis_error_codes__traits.hpp"
// Member 'states'
#include "flexbe_msgs/msg/detail/state_instantiation__traits.hpp"

namespace flexbe_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const BehaviorSynthesis_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: error_code
  {
    out << "error_code: ";
    to_flow_style_yaml(msg.error_code, out);
    out << ", ";
  }

  // member: states
  {
    if (msg.states.size() == 0) {
      out << "states: []";
    } else {
      out << "states: [";
      size_t pending_items = msg.states.size();
      for (auto item : msg.states) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BehaviorSynthesis_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: error_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_code:\n";
    to_block_style_yaml(msg.error_code, out, indentation + 2);
  }

  // member: states
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.states.size() == 0) {
      out << "states: []\n";
    } else {
      out << "states:\n";
      for (auto item : msg.states) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BehaviorSynthesis_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace flexbe_msgs

namespace rosidl_generator_traits
{

[[deprecated("use flexbe_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const flexbe_msgs::action::BehaviorSynthesis_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  flexbe_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use flexbe_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const flexbe_msgs::action::BehaviorSynthesis_Result & msg)
{
  return flexbe_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<flexbe_msgs::action::BehaviorSynthesis_Result>()
{
  return "flexbe_msgs::action::BehaviorSynthesis_Result";
}

template<>
inline const char * name<flexbe_msgs::action::BehaviorSynthesis_Result>()
{
  return "flexbe_msgs/action/BehaviorSynthesis_Result";
}

template<>
struct has_fixed_size<flexbe_msgs::action::BehaviorSynthesis_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<flexbe_msgs::action::BehaviorSynthesis_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<flexbe_msgs::action::BehaviorSynthesis_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace flexbe_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const BehaviorSynthesis_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: progress
  {
    out << "progress: ";
    rosidl_generator_traits::value_to_yaml(msg.progress, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BehaviorSynthesis_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: progress
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "progress: ";
    rosidl_generator_traits::value_to_yaml(msg.progress, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BehaviorSynthesis_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace flexbe_msgs

namespace rosidl_generator_traits
{

[[deprecated("use flexbe_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const flexbe_msgs::action::BehaviorSynthesis_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  flexbe_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use flexbe_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const flexbe_msgs::action::BehaviorSynthesis_Feedback & msg)
{
  return flexbe_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<flexbe_msgs::action::BehaviorSynthesis_Feedback>()
{
  return "flexbe_msgs::action::BehaviorSynthesis_Feedback";
}

template<>
inline const char * name<flexbe_msgs::action::BehaviorSynthesis_Feedback>()
{
  return "flexbe_msgs/action/BehaviorSynthesis_Feedback";
}

template<>
struct has_fixed_size<flexbe_msgs::action::BehaviorSynthesis_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<flexbe_msgs::action::BehaviorSynthesis_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<flexbe_msgs::action::BehaviorSynthesis_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "flexbe_msgs/action/detail/behavior_synthesis__traits.hpp"

namespace flexbe_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const BehaviorSynthesis_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BehaviorSynthesis_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BehaviorSynthesis_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace flexbe_msgs

namespace rosidl_generator_traits
{

[[deprecated("use flexbe_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const flexbe_msgs::action::BehaviorSynthesis_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  flexbe_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use flexbe_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const flexbe_msgs::action::BehaviorSynthesis_SendGoal_Request & msg)
{
  return flexbe_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<flexbe_msgs::action::BehaviorSynthesis_SendGoal_Request>()
{
  return "flexbe_msgs::action::BehaviorSynthesis_SendGoal_Request";
}

template<>
inline const char * name<flexbe_msgs::action::BehaviorSynthesis_SendGoal_Request>()
{
  return "flexbe_msgs/action/BehaviorSynthesis_SendGoal_Request";
}

template<>
struct has_fixed_size<flexbe_msgs::action::BehaviorSynthesis_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<flexbe_msgs::action::BehaviorSynthesis_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<flexbe_msgs::action::BehaviorSynthesis_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<flexbe_msgs::action::BehaviorSynthesis_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<flexbe_msgs::action::BehaviorSynthesis_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace flexbe_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const BehaviorSynthesis_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BehaviorSynthesis_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BehaviorSynthesis_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace flexbe_msgs

namespace rosidl_generator_traits
{

[[deprecated("use flexbe_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const flexbe_msgs::action::BehaviorSynthesis_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  flexbe_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use flexbe_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const flexbe_msgs::action::BehaviorSynthesis_SendGoal_Response & msg)
{
  return flexbe_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<flexbe_msgs::action::BehaviorSynthesis_SendGoal_Response>()
{
  return "flexbe_msgs::action::BehaviorSynthesis_SendGoal_Response";
}

template<>
inline const char * name<flexbe_msgs::action::BehaviorSynthesis_SendGoal_Response>()
{
  return "flexbe_msgs/action/BehaviorSynthesis_SendGoal_Response";
}

template<>
struct has_fixed_size<flexbe_msgs::action::BehaviorSynthesis_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<flexbe_msgs::action::BehaviorSynthesis_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<flexbe_msgs::action::BehaviorSynthesis_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<flexbe_msgs::action::BehaviorSynthesis_SendGoal>()
{
  return "flexbe_msgs::action::BehaviorSynthesis_SendGoal";
}

template<>
inline const char * name<flexbe_msgs::action::BehaviorSynthesis_SendGoal>()
{
  return "flexbe_msgs/action/BehaviorSynthesis_SendGoal";
}

template<>
struct has_fixed_size<flexbe_msgs::action::BehaviorSynthesis_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<flexbe_msgs::action::BehaviorSynthesis_SendGoal_Request>::value &&
    has_fixed_size<flexbe_msgs::action::BehaviorSynthesis_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<flexbe_msgs::action::BehaviorSynthesis_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<flexbe_msgs::action::BehaviorSynthesis_SendGoal_Request>::value &&
    has_bounded_size<flexbe_msgs::action::BehaviorSynthesis_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<flexbe_msgs::action::BehaviorSynthesis_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<flexbe_msgs::action::BehaviorSynthesis_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<flexbe_msgs::action::BehaviorSynthesis_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace flexbe_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const BehaviorSynthesis_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BehaviorSynthesis_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BehaviorSynthesis_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace flexbe_msgs

namespace rosidl_generator_traits
{

[[deprecated("use flexbe_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const flexbe_msgs::action::BehaviorSynthesis_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  flexbe_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use flexbe_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const flexbe_msgs::action::BehaviorSynthesis_GetResult_Request & msg)
{
  return flexbe_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<flexbe_msgs::action::BehaviorSynthesis_GetResult_Request>()
{
  return "flexbe_msgs::action::BehaviorSynthesis_GetResult_Request";
}

template<>
inline const char * name<flexbe_msgs::action::BehaviorSynthesis_GetResult_Request>()
{
  return "flexbe_msgs/action/BehaviorSynthesis_GetResult_Request";
}

template<>
struct has_fixed_size<flexbe_msgs::action::BehaviorSynthesis_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<flexbe_msgs::action::BehaviorSynthesis_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<flexbe_msgs::action::BehaviorSynthesis_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "flexbe_msgs/action/detail/behavior_synthesis__traits.hpp"

namespace flexbe_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const BehaviorSynthesis_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BehaviorSynthesis_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BehaviorSynthesis_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace flexbe_msgs

namespace rosidl_generator_traits
{

[[deprecated("use flexbe_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const flexbe_msgs::action::BehaviorSynthesis_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  flexbe_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use flexbe_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const flexbe_msgs::action::BehaviorSynthesis_GetResult_Response & msg)
{
  return flexbe_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<flexbe_msgs::action::BehaviorSynthesis_GetResult_Response>()
{
  return "flexbe_msgs::action::BehaviorSynthesis_GetResult_Response";
}

template<>
inline const char * name<flexbe_msgs::action::BehaviorSynthesis_GetResult_Response>()
{
  return "flexbe_msgs/action/BehaviorSynthesis_GetResult_Response";
}

template<>
struct has_fixed_size<flexbe_msgs::action::BehaviorSynthesis_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<flexbe_msgs::action::BehaviorSynthesis_Result>::value> {};

template<>
struct has_bounded_size<flexbe_msgs::action::BehaviorSynthesis_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<flexbe_msgs::action::BehaviorSynthesis_Result>::value> {};

template<>
struct is_message<flexbe_msgs::action::BehaviorSynthesis_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<flexbe_msgs::action::BehaviorSynthesis_GetResult>()
{
  return "flexbe_msgs::action::BehaviorSynthesis_GetResult";
}

template<>
inline const char * name<flexbe_msgs::action::BehaviorSynthesis_GetResult>()
{
  return "flexbe_msgs/action/BehaviorSynthesis_GetResult";
}

template<>
struct has_fixed_size<flexbe_msgs::action::BehaviorSynthesis_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<flexbe_msgs::action::BehaviorSynthesis_GetResult_Request>::value &&
    has_fixed_size<flexbe_msgs::action::BehaviorSynthesis_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<flexbe_msgs::action::BehaviorSynthesis_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<flexbe_msgs::action::BehaviorSynthesis_GetResult_Request>::value &&
    has_bounded_size<flexbe_msgs::action::BehaviorSynthesis_GetResult_Response>::value
  >
{
};

template<>
struct is_service<flexbe_msgs::action::BehaviorSynthesis_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<flexbe_msgs::action::BehaviorSynthesis_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<flexbe_msgs::action::BehaviorSynthesis_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "flexbe_msgs/action/detail/behavior_synthesis__traits.hpp"

namespace flexbe_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const BehaviorSynthesis_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BehaviorSynthesis_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BehaviorSynthesis_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace flexbe_msgs

namespace rosidl_generator_traits
{

[[deprecated("use flexbe_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const flexbe_msgs::action::BehaviorSynthesis_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  flexbe_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use flexbe_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const flexbe_msgs::action::BehaviorSynthesis_FeedbackMessage & msg)
{
  return flexbe_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<flexbe_msgs::action::BehaviorSynthesis_FeedbackMessage>()
{
  return "flexbe_msgs::action::BehaviorSynthesis_FeedbackMessage";
}

template<>
inline const char * name<flexbe_msgs::action::BehaviorSynthesis_FeedbackMessage>()
{
  return "flexbe_msgs/action/BehaviorSynthesis_FeedbackMessage";
}

template<>
struct has_fixed_size<flexbe_msgs::action::BehaviorSynthesis_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<flexbe_msgs::action::BehaviorSynthesis_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<flexbe_msgs::action::BehaviorSynthesis_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<flexbe_msgs::action::BehaviorSynthesis_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<flexbe_msgs::action::BehaviorSynthesis_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<flexbe_msgs::action::BehaviorSynthesis>
  : std::true_type
{
};

template<>
struct is_action_goal<flexbe_msgs::action::BehaviorSynthesis_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<flexbe_msgs::action::BehaviorSynthesis_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<flexbe_msgs::action::BehaviorSynthesis_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // FLEXBE_MSGS__ACTION__DETAIL__BEHAVIOR_SYNTHESIS__TRAITS_HPP_
