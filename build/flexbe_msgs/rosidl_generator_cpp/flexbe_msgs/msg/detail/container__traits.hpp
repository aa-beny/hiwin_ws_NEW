// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from flexbe_msgs:msg/Container.idl
// generated code does not contain a copyright notice

#ifndef FLEXBE_MSGS__MSG__DETAIL__CONTAINER__TRAITS_HPP_
#define FLEXBE_MSGS__MSG__DETAIL__CONTAINER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "flexbe_msgs/msg/detail/container__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace flexbe_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Container & msg,
  std::ostream & out)
{
  out << "{";
  // member: path
  {
    out << "path: ";
    rosidl_generator_traits::value_to_yaml(msg.path, out);
    out << ", ";
  }

  // member: children
  {
    if (msg.children.size() == 0) {
      out << "children: []";
    } else {
      out << "children: [";
      size_t pending_items = msg.children.size();
      for (auto item : msg.children) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: outcomes
  {
    if (msg.outcomes.size() == 0) {
      out << "outcomes: []";
    } else {
      out << "outcomes: [";
      size_t pending_items = msg.outcomes.size();
      for (auto item : msg.outcomes) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: transitions
  {
    if (msg.transitions.size() == 0) {
      out << "transitions: []";
    } else {
      out << "transitions: [";
      size_t pending_items = msg.transitions.size();
      for (auto item : msg.transitions) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: autonomy
  {
    if (msg.autonomy.size() == 0) {
      out << "autonomy: []";
    } else {
      out << "autonomy: [";
      size_t pending_items = msg.autonomy.size();
      for (auto item : msg.autonomy) {
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
  const Container & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path: ";
    rosidl_generator_traits::value_to_yaml(msg.path, out);
    out << "\n";
  }

  // member: children
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.children.size() == 0) {
      out << "children: []\n";
    } else {
      out << "children:\n";
      for (auto item : msg.children) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: outcomes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.outcomes.size() == 0) {
      out << "outcomes: []\n";
    } else {
      out << "outcomes:\n";
      for (auto item : msg.outcomes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: transitions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.transitions.size() == 0) {
      out << "transitions: []\n";
    } else {
      out << "transitions:\n";
      for (auto item : msg.transitions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: autonomy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.autonomy.size() == 0) {
      out << "autonomy: []\n";
    } else {
      out << "autonomy:\n";
      for (auto item : msg.autonomy) {
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

inline std::string to_yaml(const Container & msg, bool use_flow_style = false)
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
  const flexbe_msgs::msg::Container & msg,
  std::ostream & out, size_t indentation = 0)
{
  flexbe_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use flexbe_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const flexbe_msgs::msg::Container & msg)
{
  return flexbe_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<flexbe_msgs::msg::Container>()
{
  return "flexbe_msgs::msg::Container";
}

template<>
inline const char * name<flexbe_msgs::msg::Container>()
{
  return "flexbe_msgs/msg/Container";
}

template<>
struct has_fixed_size<flexbe_msgs::msg::Container>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<flexbe_msgs::msg::Container>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<flexbe_msgs::msg::Container>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FLEXBE_MSGS__MSG__DETAIL__CONTAINER__TRAITS_HPP_
