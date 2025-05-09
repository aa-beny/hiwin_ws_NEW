// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from flexbe_msgs:msg/BehaviorRequest.idl
// generated code does not contain a copyright notice

#ifndef FLEXBE_MSGS__MSG__DETAIL__BEHAVIOR_REQUEST__TRAITS_HPP_
#define FLEXBE_MSGS__MSG__DETAIL__BEHAVIOR_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "flexbe_msgs/msg/detail/behavior_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'structure'
#include "flexbe_msgs/msg/detail/container__traits.hpp"

namespace flexbe_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BehaviorRequest & msg,
  std::ostream & out)
{
  out << "{";
  // member: behavior_name
  {
    out << "behavior_name: ";
    rosidl_generator_traits::value_to_yaml(msg.behavior_name, out);
    out << ", ";
  }

  // member: autonomy_level
  {
    out << "autonomy_level: ";
    rosidl_generator_traits::value_to_yaml(msg.autonomy_level, out);
    out << ", ";
  }

  // member: arg_keys
  {
    if (msg.arg_keys.size() == 0) {
      out << "arg_keys: []";
    } else {
      out << "arg_keys: [";
      size_t pending_items = msg.arg_keys.size();
      for (auto item : msg.arg_keys) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: arg_values
  {
    if (msg.arg_values.size() == 0) {
      out << "arg_values: []";
    } else {
      out << "arg_values: [";
      size_t pending_items = msg.arg_values.size();
      for (auto item : msg.arg_values) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: structure
  {
    if (msg.structure.size() == 0) {
      out << "structure: []";
    } else {
      out << "structure: [";
      size_t pending_items = msg.structure.size();
      for (auto item : msg.structure) {
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
  const BehaviorRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: behavior_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "behavior_name: ";
    rosidl_generator_traits::value_to_yaml(msg.behavior_name, out);
    out << "\n";
  }

  // member: autonomy_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "autonomy_level: ";
    rosidl_generator_traits::value_to_yaml(msg.autonomy_level, out);
    out << "\n";
  }

  // member: arg_keys
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.arg_keys.size() == 0) {
      out << "arg_keys: []\n";
    } else {
      out << "arg_keys:\n";
      for (auto item : msg.arg_keys) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: arg_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.arg_values.size() == 0) {
      out << "arg_values: []\n";
    } else {
      out << "arg_values:\n";
      for (auto item : msg.arg_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: structure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.structure.size() == 0) {
      out << "structure: []\n";
    } else {
      out << "structure:\n";
      for (auto item : msg.structure) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BehaviorRequest & msg, bool use_flow_style = false)
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
  const flexbe_msgs::msg::BehaviorRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  flexbe_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use flexbe_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const flexbe_msgs::msg::BehaviorRequest & msg)
{
  return flexbe_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<flexbe_msgs::msg::BehaviorRequest>()
{
  return "flexbe_msgs::msg::BehaviorRequest";
}

template<>
inline const char * name<flexbe_msgs::msg::BehaviorRequest>()
{
  return "flexbe_msgs/msg/BehaviorRequest";
}

template<>
struct has_fixed_size<flexbe_msgs::msg::BehaviorRequest>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<flexbe_msgs::msg::BehaviorRequest>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<flexbe_msgs::msg::BehaviorRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FLEXBE_MSGS__MSG__DETAIL__BEHAVIOR_REQUEST__TRAITS_HPP_
