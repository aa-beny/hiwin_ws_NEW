// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from flexbe_msgs:msg/OutcomeRequest.idl
// generated code does not contain a copyright notice

#ifndef FLEXBE_MSGS__MSG__DETAIL__OUTCOME_REQUEST__TRAITS_HPP_
#define FLEXBE_MSGS__MSG__DETAIL__OUTCOME_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "flexbe_msgs/msg/detail/outcome_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace flexbe_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const OutcomeRequest & msg,
  std::ostream & out)
{
  out << "{";
  // member: outcome
  {
    out << "outcome: ";
    rosidl_generator_traits::value_to_yaml(msg.outcome, out);
    out << ", ";
  }

  // member: target
  {
    out << "target: ";
    rosidl_generator_traits::value_to_yaml(msg.target, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OutcomeRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: outcome
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "outcome: ";
    rosidl_generator_traits::value_to_yaml(msg.outcome, out);
    out << "\n";
  }

  // member: target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target: ";
    rosidl_generator_traits::value_to_yaml(msg.target, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OutcomeRequest & msg, bool use_flow_style = false)
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
  const flexbe_msgs::msg::OutcomeRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  flexbe_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use flexbe_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const flexbe_msgs::msg::OutcomeRequest & msg)
{
  return flexbe_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<flexbe_msgs::msg::OutcomeRequest>()
{
  return "flexbe_msgs::msg::OutcomeRequest";
}

template<>
inline const char * name<flexbe_msgs::msg::OutcomeRequest>()
{
  return "flexbe_msgs/msg/OutcomeRequest";
}

template<>
struct has_fixed_size<flexbe_msgs::msg::OutcomeRequest>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<flexbe_msgs::msg::OutcomeRequest>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<flexbe_msgs::msg::OutcomeRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FLEXBE_MSGS__MSG__DETAIL__OUTCOME_REQUEST__TRAITS_HPP_
