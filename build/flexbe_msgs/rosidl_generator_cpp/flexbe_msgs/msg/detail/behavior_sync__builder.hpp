// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from flexbe_msgs:msg/BehaviorSync.idl
// generated code does not contain a copyright notice

#ifndef FLEXBE_MSGS__MSG__DETAIL__BEHAVIOR_SYNC__BUILDER_HPP_
#define FLEXBE_MSGS__MSG__DETAIL__BEHAVIOR_SYNC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "flexbe_msgs/msg/detail/behavior_sync__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace flexbe_msgs
{

namespace msg
{

namespace builder
{

class Init_BehaviorSync_current_state_checksum
{
public:
  explicit Init_BehaviorSync_current_state_checksum(::flexbe_msgs::msg::BehaviorSync & msg)
  : msg_(msg)
  {}
  ::flexbe_msgs::msg::BehaviorSync current_state_checksum(::flexbe_msgs::msg::BehaviorSync::_current_state_checksum_type arg)
  {
    msg_.current_state_checksum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::flexbe_msgs::msg::BehaviorSync msg_;
};

class Init_BehaviorSync_behavior_id
{
public:
  Init_BehaviorSync_behavior_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BehaviorSync_current_state_checksum behavior_id(::flexbe_msgs::msg::BehaviorSync::_behavior_id_type arg)
  {
    msg_.behavior_id = std::move(arg);
    return Init_BehaviorSync_current_state_checksum(msg_);
  }

private:
  ::flexbe_msgs::msg::BehaviorSync msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::flexbe_msgs::msg::BehaviorSync>()
{
  return flexbe_msgs::msg::builder::Init_BehaviorSync_behavior_id();
}

}  // namespace flexbe_msgs

#endif  // FLEXBE_MSGS__MSG__DETAIL__BEHAVIOR_SYNC__BUILDER_HPP_
