// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from flexbe_msgs:msg/BehaviorSelection.idl
// generated code does not contain a copyright notice

#ifndef FLEXBE_MSGS__MSG__DETAIL__BEHAVIOR_SELECTION__TRAITS_HPP_
#define FLEXBE_MSGS__MSG__DETAIL__BEHAVIOR_SELECTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "flexbe_msgs/msg/detail/behavior_selection__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'modifications'
#include "flexbe_msgs/msg/detail/behavior_modification__traits.hpp"

namespace flexbe_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BehaviorSelection & msg,
  std::ostream & out)
{
  out << "{";
  // member: behavior_id
  {
    out << "behavior_id: ";
    rosidl_generator_traits::value_to_yaml(msg.behavior_id, out);
    out << ", ";
  }

  // member: behavior_checksum
  {
    out << "behavior_checksum: ";
    rosidl_generator_traits::value_to_yaml(msg.behavior_checksum, out);
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

  // member: input_keys
  {
    if (msg.input_keys.size() == 0) {
      out << "input_keys: []";
    } else {
      out << "input_keys: [";
      size_t pending_items = msg.input_keys.size();
      for (auto item : msg.input_keys) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: input_values
  {
    if (msg.input_values.size() == 0) {
      out << "input_values: []";
    } else {
      out << "input_values: [";
      size_t pending_items = msg.input_values.size();
      for (auto item : msg.input_values) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: modifications
  {
    if (msg.modifications.size() == 0) {
      out << "modifications: []";
    } else {
      out << "modifications: [";
      size_t pending_items = msg.modifications.size();
      for (auto item : msg.modifications) {
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
  const BehaviorSelection & msg,
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

  // member: behavior_checksum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "behavior_checksum: ";
    rosidl_generator_traits::value_to_yaml(msg.behavior_checksum, out);
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

  // member: input_keys
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.input_keys.size() == 0) {
      out << "input_keys: []\n";
    } else {
      out << "input_keys:\n";
      for (auto item : msg.input_keys) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: input_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.input_values.size() == 0) {
      out << "input_values: []\n";
    } else {
      out << "input_values:\n";
      for (auto item : msg.input_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: modifications
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.modifications.size() == 0) {
      out << "modifications: []\n";
    } else {
      out << "modifications:\n";
      for (auto item : msg.modifications) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BehaviorSelection & msg, bool use_flow_style = false)
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
  const flexbe_msgs::msg::BehaviorSelection & msg,
  std::ostream & out, size_t indentation = 0)
{
  flexbe_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use flexbe_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const flexbe_msgs::msg::BehaviorSelection & msg)
{
  return flexbe_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<flexbe_msgs::msg::BehaviorSelection>()
{
  return "flexbe_msgs::msg::BehaviorSelection";
}

template<>
inline const char * name<flexbe_msgs::msg::BehaviorSelection>()
{
  return "flexbe_msgs/msg/BehaviorSelection";
}

template<>
struct has_fixed_size<flexbe_msgs::msg::BehaviorSelection>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<flexbe_msgs::msg::BehaviorSelection>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<flexbe_msgs::msg::BehaviorSelection>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FLEXBE_MSGS__MSG__DETAIL__BEHAVIOR_SELECTION__TRAITS_HPP_
