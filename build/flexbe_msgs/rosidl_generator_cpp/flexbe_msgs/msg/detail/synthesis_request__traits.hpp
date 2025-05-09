// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from flexbe_msgs:msg/SynthesisRequest.idl
// generated code does not contain a copyright notice

#ifndef FLEXBE_MSGS__MSG__DETAIL__SYNTHESIS_REQUEST__TRAITS_HPP_
#define FLEXBE_MSGS__MSG__DETAIL__SYNTHESIS_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "flexbe_msgs/msg/detail/synthesis_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace flexbe_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SynthesisRequest & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: system
  {
    out << "system: ";
    rosidl_generator_traits::value_to_yaml(msg.system, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    rosidl_generator_traits::value_to_yaml(msg.goal, out);
    out << ", ";
  }

  // member: initial_condition
  {
    out << "initial_condition: ";
    rosidl_generator_traits::value_to_yaml(msg.initial_condition, out);
    out << ", ";
  }

  // member: sm_outcomes
  {
    if (msg.sm_outcomes.size() == 0) {
      out << "sm_outcomes: []";
    } else {
      out << "sm_outcomes: [";
      size_t pending_items = msg.sm_outcomes.size();
      for (auto item : msg.sm_outcomes) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const SynthesisRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: system
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "system: ";
    rosidl_generator_traits::value_to_yaml(msg.system, out);
    out << "\n";
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal: ";
    rosidl_generator_traits::value_to_yaml(msg.goal, out);
    out << "\n";
  }

  // member: initial_condition
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "initial_condition: ";
    rosidl_generator_traits::value_to_yaml(msg.initial_condition, out);
    out << "\n";
  }

  // member: sm_outcomes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.sm_outcomes.size() == 0) {
      out << "sm_outcomes: []\n";
    } else {
      out << "sm_outcomes:\n";
      for (auto item : msg.sm_outcomes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SynthesisRequest & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace flexbe_msgs

namespace rosidl_generator_traits
{

[[deprecated("use flexbe_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const flexbe_msgs::msg::SynthesisRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  flexbe_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use flexbe_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const flexbe_msgs::msg::SynthesisRequest & msg)
{
  return flexbe_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<flexbe_msgs::msg::SynthesisRequest>()
{
  return "flexbe_msgs::msg::SynthesisRequest";
}

template<>
inline const char * name<flexbe_msgs::msg::SynthesisRequest>()
{
  return "flexbe_msgs/msg/SynthesisRequest";
}

template<>
struct has_fixed_size<flexbe_msgs::msg::SynthesisRequest>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<flexbe_msgs::msg::SynthesisRequest>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<flexbe_msgs::msg::SynthesisRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FLEXBE_MSGS__MSG__DETAIL__SYNTHESIS_REQUEST__TRAITS_HPP_
