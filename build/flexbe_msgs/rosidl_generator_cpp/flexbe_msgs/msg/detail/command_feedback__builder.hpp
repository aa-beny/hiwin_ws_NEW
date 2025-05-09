// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from flexbe_msgs:msg/CommandFeedback.idl
// generated code does not contain a copyright notice

#ifndef FLEXBE_MSGS__MSG__DETAIL__COMMAND_FEEDBACK__BUILDER_HPP_
#define FLEXBE_MSGS__MSG__DETAIL__COMMAND_FEEDBACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "flexbe_msgs/msg/detail/command_feedback__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace flexbe_msgs
{

namespace msg
{

namespace builder
{

class Init_CommandFeedback_args
{
public:
  explicit Init_CommandFeedback_args(::flexbe_msgs::msg::CommandFeedback & msg)
  : msg_(msg)
  {}
  ::flexbe_msgs::msg::CommandFeedback args(::flexbe_msgs::msg::CommandFeedback::_args_type arg)
  {
    msg_.args = std::move(arg);
    return std::move(msg_);
  }

private:
  ::flexbe_msgs::msg::CommandFeedback msg_;
};

class Init_CommandFeedback_command
{
public:
  Init_CommandFeedback_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CommandFeedback_args command(::flexbe_msgs::msg::CommandFeedback::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_CommandFeedback_args(msg_);
  }

private:
  ::flexbe_msgs::msg::CommandFeedback msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::flexbe_msgs::msg::CommandFeedback>()
{
  return flexbe_msgs::msg::builder::Init_CommandFeedback_command();
}

}  // namespace flexbe_msgs

#endif  // FLEXBE_MSGS__MSG__DETAIL__COMMAND_FEEDBACK__BUILDER_HPP_
