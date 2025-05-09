// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from flexbe_msgs:msg/ContainerStructure.idl
// generated code does not contain a copyright notice

#ifndef FLEXBE_MSGS__MSG__DETAIL__CONTAINER_STRUCTURE__TRAITS_HPP_
#define FLEXBE_MSGS__MSG__DETAIL__CONTAINER_STRUCTURE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "flexbe_msgs/msg/detail/container_structure__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'containers'
#include "flexbe_msgs/msg/detail/container__traits.hpp"

namespace flexbe_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ContainerStructure & msg,
  std::ostream & out)
{
  out << "{";
  // member: behavior_id
  {
    out << "behavior_id: ";
    rosidl_generator_traits::value_to_yaml(msg.behavior_id, out);
    out << ", ";
  }

  // member: containers
  {
    if (msg.containers.size() == 0) {
      out << "containers: []";
    } else {
      out << "containers: [";
      size_t pending_items = msg.containers.size();
      for (auto item : msg.containers) {
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
  const ContainerStructure & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: behavior_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "behavior_id: ";
    rosidl_generator_traits::value_to_yaml(msg.behavior_id, out);
    out << "\n";
  }

  // member: containers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.containers.size() == 0) {
      out << "containers: []\n";
    } else {
      out << "containers:\n";
      for (auto item : msg.containers) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ContainerStructure & msg, bool use_flow_style = false)
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
  const flexbe_msgs::msg::ContainerStructure & msg,
  std::ostream & out, size_t indentation = 0)
{
  flexbe_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use flexbe_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const flexbe_msgs::msg::ContainerStructure & msg)
{
  return flexbe_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<flexbe_msgs::msg::ContainerStructure>()
{
  return "flexbe_msgs::msg::ContainerStructure";
}

template<>
inline const char * name<flexbe_msgs::msg::ContainerStructure>()
{
  return "flexbe_msgs/msg/ContainerStructure";
}

template<>
struct has_fixed_size<flexbe_msgs::msg::ContainerStructure>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<flexbe_msgs::msg::ContainerStructure>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<flexbe_msgs::msg::ContainerStructure>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FLEXBE_MSGS__MSG__DETAIL__CONTAINER_STRUCTURE__TRAITS_HPP_
