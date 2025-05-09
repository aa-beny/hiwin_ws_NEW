// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from flexbe_msgs:msg/BEStatus.idl
// generated code does not contain a copyright notice

#ifndef FLEXBE_MSGS__MSG__DETAIL__BE_STATUS__BUILDER_HPP_
#define FLEXBE_MSGS__MSG__DETAIL__BE_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "flexbe_msgs/msg/detail/be_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace flexbe_msgs
{

namespace msg
{

namespace builder
{

class Init_BEStatus_args
{
public:
  explicit Init_BEStatus_args(::flexbe_msgs::msg::BEStatus & msg)
  : msg_(msg)
  {}
  ::flexbe_msgs::msg::BEStatus args(::flexbe_msgs::msg::BEStatus::_args_type arg)
  {
    msg_.args = std::move(arg);
    return std::move(msg_);
  }

private:
  ::flexbe_msgs::msg::BEStatus msg_;
};

class Init_BEStatus_code
{
public:
  explicit Init_BEStatus_code(::flexbe_msgs::msg::BEStatus & msg)
  : msg_(msg)
  {}
  Init_BEStatus_args code(::flexbe_msgs::msg::BEStatus::_code_type arg)
  {
    msg_.code = std::move(arg);
    return Init_BEStatus_args(msg_);
  }

private:
  ::flexbe_msgs::msg::BEStatus msg_;
};

class Init_BEStatus_behavior_id
{
public:
  explicit Init_BEStatus_behavior_id(::flexbe_msgs::msg::BEStatus & msg)
  : msg_(msg)
  {}
  Init_BEStatus_code behavior_id(::flexbe_msgs::msg::BEStatus::_behavior_id_type arg)
  {
    msg_.behavior_id = std::move(arg);
    return Init_BEStatus_code(msg_);
  }

private:
  ::flexbe_msgs::msg::BEStatus msg_;
};

class Init_BEStatus_stamp
{
public:
  Init_BEStatus_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BEStatus_behavior_id stamp(::flexbe_msgs::msg::BEStatus::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_BEStatus_behavior_id(msg_);
  }

private:
  ::flexbe_msgs::msg::BEStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::flexbe_msgs::msg::BEStatus>()
{
  return flexbe_msgs::msg::builder::Init_BEStatus_stamp();
}

}  // namespace flexbe_msgs

#endif  // FLEXBE_MSGS__MSG__DETAIL__BE_STATUS__BUILDER_HPP_
