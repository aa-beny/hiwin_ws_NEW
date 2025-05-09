// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from flexbe_msgs:msg/SynthesisErrorCodes.idl
// generated code does not contain a copyright notice

#ifndef FLEXBE_MSGS__MSG__DETAIL__SYNTHESIS_ERROR_CODES__BUILDER_HPP_
#define FLEXBE_MSGS__MSG__DETAIL__SYNTHESIS_ERROR_CODES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "flexbe_msgs/msg/detail/synthesis_error_codes__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace flexbe_msgs
{

namespace msg
{

namespace builder
{

class Init_SynthesisErrorCodes_value
{
public:
  Init_SynthesisErrorCodes_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::flexbe_msgs::msg::SynthesisErrorCodes value(::flexbe_msgs::msg::SynthesisErrorCodes::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::flexbe_msgs::msg::SynthesisErrorCodes msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::flexbe_msgs::msg::SynthesisErrorCodes>()
{
  return flexbe_msgs::msg::builder::Init_SynthesisErrorCodes_value();
}

}  // namespace flexbe_msgs

#endif  // FLEXBE_MSGS__MSG__DETAIL__SYNTHESIS_ERROR_CODES__BUILDER_HPP_
