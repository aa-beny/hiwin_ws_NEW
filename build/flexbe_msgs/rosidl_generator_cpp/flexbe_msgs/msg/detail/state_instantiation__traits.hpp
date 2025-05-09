// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from flexbe_msgs:msg/StateInstantiation.idl
// generated code does not contain a copyright notice

#ifndef FLEXBE_MSGS__MSG__DETAIL__STATE_INSTANTIATION__TRAITS_HPP_
#define FLEXBE_MSGS__MSG__DETAIL__STATE_INSTANTIATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "flexbe_msgs/msg/detail/state_instantiation__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'cond_transition'
#include "flexbe_msgs/msg/detail/outcome_condition__traits.hpp"

namespace flexbe_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const StateInstantiation & msg,
  std::ostream & out)
{
  out << "{";
  // member: state_path
  {
    out << "state_path: ";
    rosidl_generator_traits::value_to_yaml(msg.state_path, out);
    out << ", ";
  }

  // member: state_class
  {
    out << "state_class: ";
    rosidl_generator_traits::value_to_yaml(msg.state_class, out);
    out << ", ";
  }

  // member: initial_state_name
  {
    out << "initial_state_name: ";
    rosidl_generator_traits::value_to_yaml(msg.initial_state_name, out);
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

  // member: output_keys
  {
    if (msg.output_keys.size() == 0) {
      out << "output_keys: []";
    } else {
      out << "output_keys: [";
      size_t pending_items = msg.output_keys.size();
      for (auto item : msg.output_keys) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cond_outcome
  {
    if (msg.cond_outcome.size() == 0) {
      out << "cond_outcome: []";
    } else {
      out << "cond_outcome: [";
      size_t pending_items = msg.cond_outcome.size();
      for (auto item : msg.cond_outcome) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cond_transition
  {
    if (msg.cond_transition.size() == 0) {
      out << "cond_transition: []";
    } else {
      out << "cond_transition: [";
      size_t pending_items = msg.cond_transition.size();
      for (auto item : msg.cond_transition) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: behavior_class
  {
    out << "behavior_class: ";
    rosidl_generator_traits::value_to_yaml(msg.behavior_class, out);
    out << ", ";
  }

  // member: parameter_names
  {
    if (msg.parameter_names.size() == 0) {
      out << "parameter_names: []";
    } else {
      out << "parameter_names: [";
      size_t pending_items = msg.parameter_names.size();
      for (auto item : msg.parameter_names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: parameter_values
  {
    if (msg.parameter_values.size() == 0) {
      out << "parameter_values: []";
    } else {
      out << "parameter_values: [";
      size_t pending_items = msg.parameter_values.size();
      for (auto item : msg.parameter_values) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: position
  {
    if (msg.position.size() == 0) {
      out << "position: []";
    } else {
      out << "position: [";
      size_t pending_items = msg.position.size();
      for (auto item : msg.position) {
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
    out << ", ";
  }

  // member: userdata_keys
  {
    if (msg.userdata_keys.size() == 0) {
      out << "userdata_keys: []";
    } else {
      out << "userdata_keys: [";
      size_t pending_items = msg.userdata_keys.size();
      for (auto item : msg.userdata_keys) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: userdata_remapping
  {
    if (msg.userdata_remapping.size() == 0) {
      out << "userdata_remapping: []";
    } else {
      out << "userdata_remapping: [";
      size_t pending_items = msg.userdata_remapping.size();
      for (auto item : msg.userdata_remapping) {
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
  const StateInstantiation & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: state_path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state_path: ";
    rosidl_generator_traits::value_to_yaml(msg.state_path, out);
    out << "\n";
  }

  // member: state_class
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state_class: ";
    rosidl_generator_traits::value_to_yaml(msg.state_class, out);
    out << "\n";
  }

  // member: initial_state_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "initial_state_name: ";
    rosidl_generator_traits::value_to_yaml(msg.initial_state_name, out);
    out << "\n";
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

  // member: output_keys
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.output_keys.size() == 0) {
      out << "output_keys: []\n";
    } else {
      out << "output_keys:\n";
      for (auto item : msg.output_keys) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: cond_outcome
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cond_outcome.size() == 0) {
      out << "cond_outcome: []\n";
    } else {
      out << "cond_outcome:\n";
      for (auto item : msg.cond_outcome) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: cond_transition
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cond_transition.size() == 0) {
      out << "cond_transition: []\n";
    } else {
      out << "cond_transition:\n";
      for (auto item : msg.cond_transition) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: behavior_class
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "behavior_class: ";
    rosidl_generator_traits::value_to_yaml(msg.behavior_class, out);
    out << "\n";
  }

  // member: parameter_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.parameter_names.size() == 0) {
      out << "parameter_names: []\n";
    } else {
      out << "parameter_names:\n";
      for (auto item : msg.parameter_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: parameter_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.parameter_values.size() == 0) {
      out << "parameter_values: []\n";
    } else {
      out << "parameter_values:\n";
      for (auto item : msg.parameter_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.position.size() == 0) {
      out << "position: []\n";
    } else {
      out << "position:\n";
      for (auto item : msg.position) {
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

  // member: userdata_keys
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.userdata_keys.size() == 0) {
      out << "userdata_keys: []\n";
    } else {
      out << "userdata_keys:\n";
      for (auto item : msg.userdata_keys) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: userdata_remapping
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.userdata_remapping.size() == 0) {
      out << "userdata_remapping: []\n";
    } else {
      out << "userdata_remapping:\n";
      for (auto item : msg.userdata_remapping) {
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

inline std::string to_yaml(const StateInstantiation & msg, bool use_flow_style = false)
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
  const flexbe_msgs::msg::StateInstantiation & msg,
  std::ostream & out, size_t indentation = 0)
{
  flexbe_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use flexbe_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const flexbe_msgs::msg::StateInstantiation & msg)
{
  return flexbe_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<flexbe_msgs::msg::StateInstantiation>()
{
  return "flexbe_msgs::msg::StateInstantiation";
}

template<>
inline const char * name<flexbe_msgs::msg::StateInstantiation>()
{
  return "flexbe_msgs/msg/StateInstantiation";
}

template<>
struct has_fixed_size<flexbe_msgs::msg::StateInstantiation>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<flexbe_msgs::msg::StateInstantiation>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<flexbe_msgs::msg::StateInstantiation>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FLEXBE_MSGS__MSG__DETAIL__STATE_INSTANTIATION__TRAITS_HPP_
