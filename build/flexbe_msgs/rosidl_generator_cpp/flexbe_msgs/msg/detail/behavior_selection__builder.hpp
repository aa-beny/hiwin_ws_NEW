// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from flexbe_msgs:msg/BehaviorSelection.idl
// generated code does not contain a copyright notice

#ifndef FLEXBE_MSGS__MSG__DETAIL__BEHAVIOR_SELECTION__BUILDER_HPP_
#define FLEXBE_MSGS__MSG__DETAIL__BEHAVIOR_SELECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "flexbe_msgs/msg/detail/behavior_selection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace flexbe_msgs
{

namespace msg
{

namespace builder
{

class Init_BehaviorSelection_modifications
{
public:
  explicit Init_BehaviorSelection_modifications(::flexbe_msgs::msg::BehaviorSelection & msg)
  : msg_(msg)
  {}
  ::flexbe_msgs::msg::BehaviorSelection modifications(::flexbe_msgs::msg::BehaviorSelection::_modifications_type arg)
  {
    msg_.modifications = std::move(arg);
    return std::move(msg_);
  }

private:
  ::flexbe_msgs::msg::BehaviorSelection msg_;
};

class Init_BehaviorSelection_input_values
{
public:
  explicit Init_BehaviorSelection_input_values(::flexbe_msgs::msg::BehaviorSelection & msg)
  : msg_(msg)
  {}
  Init_BehaviorSelection_modifications input_values(::flexbe_msgs::msg::BehaviorSelection::_input_values_type arg)
  {
    msg_.input_values = std::move(arg);
    return Init_BehaviorSelection_modifications(msg_);
  }

private:
  ::flexbe_msgs::msg::BehaviorSelection msg_;
};

class Init_BehaviorSelection_input_keys
{
public:
  explicit Init_BehaviorSelection_input_keys(::flexbe_msgs::msg::BehaviorSelection & msg)
  : msg_(msg)
  {}
  Init_BehaviorSelection_input_values input_keys(::flexbe_msgs::msg::BehaviorSelection::_input_keys_type arg)
  {
    msg_.input_keys = std::move(arg);
    return Init_BehaviorSelection_input_values(msg_);
  }

private:
  ::flexbe_msgs::msg::BehaviorSelection msg_;
};

class Init_BehaviorSelection_arg_values
{
public:
  explicit Init_BehaviorSelection_arg_values(::flexbe_msgs::msg::BehaviorSelection & msg)
  : msg_(msg)
  {}
  Init_BehaviorSelection_input_keys arg_values(::flexbe_msgs::msg::BehaviorSelection::_arg_values_type arg)
  {
    msg_.arg_values = std::move(arg);
    return Init_BehaviorSelection_input_keys(msg_);
  }

private:
  ::flexbe_msgs::msg::BehaviorSelection msg_;
};

class Init_BehaviorSelection_arg_keys
{
public:
  explicit Init_BehaviorSelection_arg_keys(::flexbe_msgs::msg::BehaviorSelection & msg)
  : msg_(msg)
  {}
  Init_BehaviorSelection_arg_values arg_keys(::flexbe_msgs::msg::BehaviorSelection::_arg_keys_type arg)
  {
    msg_.arg_keys = std::move(arg);
    return Init_BehaviorSelection_arg_values(msg_);
  }

private:
  ::flexbe_msgs::msg::BehaviorSelection msg_;
};

class Init_BehaviorSelection_autonomy_level
{
public:
  explicit Init_BehaviorSelection_autonomy_level(::flexbe_msgs::msg::BehaviorSelection & msg)
  : msg_(msg)
  {}
  Init_BehaviorSelection_arg_keys autonomy_level(::flexbe_msgs::msg::BehaviorSelection::_autonomy_level_type arg)
  {
    msg_.autonomy_level = std::move(arg);
    return Init_BehaviorSelection_arg_keys(msg_);
  }

private:
  ::flexbe_msgs::msg::BehaviorSelection msg_;
};

class Init_BehaviorSelection_behavior_checksum
{
public:
  explicit Init_BehaviorSelection_behavior_checksum(::flexbe_msgs::msg::BehaviorSelection & msg)
  : msg_(msg)
  {}
  Init_BehaviorSelection_autonomy_level behavior_checksum(::flexbe_msgs::msg::BehaviorSelection::_behavior_checksum_type arg)
  {
    msg_.behavior_checksum = std::move(arg);
    return Init_BehaviorSelection_autonomy_level(msg_);
  }

private:
  ::flexbe_msgs::msg::BehaviorSelection msg_;
};

class Init_BehaviorSelection_behavior_id
{
public:
  Init_BehaviorSelection_behavior_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BehaviorSelection_behavior_checksum behavior_id(::flexbe_msgs::msg::BehaviorSelection::_behavior_id_type arg)
  {
    msg_.behavior_id = std::move(arg);
    return Init_BehaviorSelection_behavior_checksum(msg_);
  }

private:
  ::flexbe_msgs::msg::BehaviorSelection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::flexbe_msgs::msg::BehaviorSelection>()
{
  return flexbe_msgs::msg::builder::Init_BehaviorSelection_behavior_id();
}

}  // namespace flexbe_msgs

#endif  // FLEXBE_MSGS__MSG__DETAIL__BEHAVIOR_SELECTION__BUILDER_HPP_
