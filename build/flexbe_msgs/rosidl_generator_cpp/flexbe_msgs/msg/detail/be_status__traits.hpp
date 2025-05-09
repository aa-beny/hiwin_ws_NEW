// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from flexbe_msgs:msg/BEStatus.idl
// generated code does not contain a copyright notice

#ifndef FLEXBE_MSGS__MSG__DETAIL__BE_STATUS__TRAITS_HPP_
#define FLEXBE_MSGS__MSG__DETAIL__BE_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "flexbe_msgs/msg/detail/be_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace flexbe_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BEStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: behavior_id
  {
    out << "behavior_id: ";
    rosidl_generator_traits::value_to_yaml(msg.behavior_id, out);
    out << ", ";
  }

  // member: code
  {
    out << "code: ";
    rosidl_generator_traits::value_to_yaml(msg.code, out);
    out << ", ";
  }

  // member: args
  {
    if (msg.args.size() == 0) {
      out << "args: []";
    } else {
      out << "args: [";
      size_t pending_items = msg.args.size();
      for (auto item : msg.args) {
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
  const BEStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }

  // member: behavior_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "behavior_id: ";
    rosidl_generator_traits::value_to_yaml(msg.behavior_id, out);
    out << "\n";
  }

  // member: code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "code: ";
    rosidl_generator_traits::value_to_yaml(msg.code, out);
    out << "\n";
  }

  // member: args
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.args.size() == 0) {
      out << "args: []\n";
    } else {
      out << "args:\n";
      for (auto item : msg.args) {
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

inline std::string to_yaml(const BEStatus & msg, bool use_flow_style = false)
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
  const flexbe_msgs::msg::BEStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  flexbe_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use flexbe_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const flexbe_msgs::msg::BEStatus & msg)
{
  return flexbe_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<flexbe_msgs::msg::BEStatus>()
{
  return "flexbe_msgs::msg::BEStatus";
}

template<>
inline const char * name<flexbe_msgs::msg::BEStatus>()
{
  return "flexbe_msgs/msg/BEStatus";
}

template<>
struct has_fixed_size<flexbe_msgs::msg::BEStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<flexbe_msgs::msg::BEStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<flexbe_msgs::msg::BEStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FLEXBE_MSGS__MSG__DETAIL__BE_STATUS__TRAITS_HPP_
