// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from flexbe_msgs:msg/BehaviorRequest.idl
// generated code does not contain a copyright notice

#ifndef FLEXBE_MSGS__MSG__DETAIL__BEHAVIOR_REQUEST__BUILDER_HPP_
#define FLEXBE_MSGS__MSG__DETAIL__BEHAVIOR_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "flexbe_msgs/msg/detail/behavior_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace flexbe_msgs
{

namespace msg
{

namespace builder
{

class Init_BehaviorRequest_structure
{
public:
  explicit Init_BehaviorRequest_structure(::flexbe_msgs::msg::BehaviorRequest & msg)
  : msg_(msg)
  {}
  ::flexbe_msgs::msg::BehaviorRequest structure(::flexbe_msgs::msg::BehaviorRequest::_structure_type arg)
  {
    msg_.structure = std::move(arg);
    return std::move(msg_);
  }

private:
  ::flexbe_msgs::msg::BehaviorRequest msg_;
};

class Init_BehaviorRequest_arg_values
{
public:
  explicit Init_BehaviorRequest_arg_values(::flexbe_msgs::msg::BehaviorRequest & msg)
  : msg_(msg)
  {}
  Init_BehaviorRequest_structure arg_values(::flexbe_msgs::msg::BehaviorRequest::_arg_values_type arg)
  {
    msg_.arg_values = std::move(arg);
    return Init_BehaviorRequest_structure(msg_);
  }

private:
  ::flexbe_msgs::msg::BehaviorRequest msg_;
};

class Init_BehaviorRequest_arg_keys
{
public:
  explicit Init_BehaviorRequest_arg_keys(::flexbe_msgs::msg::BehaviorRequest & msg)
  : msg_(msg)
  {}
  Init_BehaviorRequest_arg_values arg_keys(::flexbe_msgs::msg::BehaviorRequest::_arg_keys_type arg)
  {
    msg_.arg_keys = std::move(arg);
    return Init_BehaviorRequest_arg_values(msg_);
  }

private:
  ::flexbe_msgs::msg::BehaviorRequest msg_;
};

class Init_BehaviorRequest_autonomy_level
{
public:
  explicit Init_BehaviorRequest_autonomy_level(::flexbe_msgs::msg::BehaviorRequest & msg)
  : msg_(msg)
  {}
  Init_BehaviorRequest_arg_keys autonomy_level(::flexbe_msgs::msg::BehaviorRequest::_autonomy_level_type arg)
  {
    msg_.autonomy_level = std::move(arg);
    return Init_BehaviorRequest_arg_keys(msg_);
  }

private:
  ::flexbe_msgs::msg::BehaviorRequest msg_;
};

class Init_BehaviorRequest_behavior_name
{
public:
  Init_BehaviorRequest_behavior_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BehaviorRequest_autonomy_level behavior_name(::flexbe_msgs::msg::BehaviorRequest::_behavior_name_type arg)
  {
    msg_.behavior_name = std::move(arg);
    return Init_BehaviorRequest_autonomy_level(msg_);
  }

private:
  ::flexbe_msgs::msg::BehaviorRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::flexbe_msgs::msg::BehaviorRequest>()
{
  return flexbe_msgs::msg::builder::Init_BehaviorRequest_behavior_name();
}

}  // namespace flexbe_msgs

#endif  // FLEXBE_MSGS__MSG__DETAIL__BEHAVIOR_REQUEST__BUILDER_HPP_
