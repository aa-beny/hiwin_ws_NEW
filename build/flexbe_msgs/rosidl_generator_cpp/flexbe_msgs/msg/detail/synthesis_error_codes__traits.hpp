// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from flexbe_msgs:msg/SynthesisErrorCodes.idl
// generated code does not contain a copyright notice

#ifndef FLEXBE_MSGS__MSG__DETAIL__SYNTHESIS_ERROR_CODES__TRAITS_HPP_
#define FLEXBE_MSGS__MSG__DETAIL__SYNTHESIS_ERROR_CODES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "flexbe_msgs/msg/detail/synthesis_error_codes__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace flexbe_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SynthesisErrorCodes & msg,
  std::ostream & out)
{
  out << "{";
  // member: value
  {
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SynthesisErrorCodes & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SynthesisErrorCodes & msg, bool use_flow_style = false)
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
  const flexbe_msgs::msg::SynthesisErrorCodes & msg,
  std::ostream & out, size_t indentation = 0)
{
  flexbe_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use flexbe_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const flexbe_msgs::msg::SynthesisErrorCodes & msg)
{
  return flexbe_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<flexbe_msgs::msg::SynthesisErrorCodes>()
{
  return "flexbe_msgs::msg::SynthesisErrorCodes";
}

template<>
inline const char * name<flexbe_msgs::msg::SynthesisErrorCodes>()
{
  return "flexbe_msgs/msg/SynthesisErrorCodes";
}

template<>
struct has_fixed_size<flexbe_msgs::msg::SynthesisErrorCodes>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<flexbe_msgs::msg::SynthesisErrorCodes>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<flexbe_msgs::msg::SynthesisErrorCodes>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FLEXBE_MSGS__MSG__DETAIL__SYNTHESIS_ERROR_CODES__TRAITS_HPP_
