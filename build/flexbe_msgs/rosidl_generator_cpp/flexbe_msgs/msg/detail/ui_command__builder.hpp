// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from flexbe_msgs:msg/UICommand.idl
// generated code does not contain a copyright notice

#ifndef FLEXBE_MSGS__MSG__DETAIL__UI_COMMAND__BUILDER_HPP_
#define FLEXBE_MSGS__MSG__DETAIL__UI_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "flexbe_msgs/msg/detail/ui_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace flexbe_msgs
{

namespace msg
{

namespace builder
{

class Init_UICommand_key
{
public:
  explicit Init_UICommand_key(::flexbe_msgs::msg::UICommand & msg)
  : msg_(msg)
  {}
  ::flexbe_msgs::msg::UICommand key(::flexbe_msgs::msg::UICommand::_key_type arg)
  {
    msg_.key = std::move(arg);
    return std::move(msg_);
  }

private:
  ::flexbe_msgs::msg::UICommand msg_;
};

class Init_UICommand_command
{
public:
  Init_UICommand_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UICommand_key command(::flexbe_msgs::msg::UICommand::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_UICommand_key(msg_);
  }

private:
  ::flexbe_msgs::msg::UICommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::flexbe_msgs::msg::UICommand>()
{
  return flexbe_msgs::msg::builder::Init_UICommand_command();
}

}  // namespace flexbe_msgs

#endif  // FLEXBE_MSGS__MSG__DETAIL__UI_COMMAND__BUILDER_HPP_
