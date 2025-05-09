// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from flexbe_msgs:msg/BehaviorLog.idl
// generated code does not contain a copyright notice

#ifndef FLEXBE_MSGS__MSG__DETAIL__BEHAVIOR_LOG__BUILDER_HPP_
#define FLEXBE_MSGS__MSG__DETAIL__BEHAVIOR_LOG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "flexbe_msgs/msg/detail/behavior_log__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace flexbe_msgs
{

namespace msg
{

namespace builder
{

class Init_BehaviorLog_status_code
{
public:
  explicit Init_BehaviorLog_status_code(::flexbe_msgs::msg::BehaviorLog & msg)
  : msg_(msg)
  {}
  ::flexbe_msgs::msg::BehaviorLog status_code(::flexbe_msgs::msg::BehaviorLog::_status_code_type arg)
  {
    msg_.status_code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::flexbe_msgs::msg::BehaviorLog msg_;
};

class Init_BehaviorLog_text
{
public:
  Init_BehaviorLog_text()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BehaviorLog_status_code text(::flexbe_msgs::msg::BehaviorLog::_text_type arg)
  {
    msg_.text = std::move(arg);
    return Init_BehaviorLog_status_code(msg_);
  }

private:
  ::flexbe_msgs::msg::BehaviorLog msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::flexbe_msgs::msg::BehaviorLog>()
{
  return flexbe_msgs::msg::builder::Init_BehaviorLog_text();
}

}  // namespace flexbe_msgs

#endif  // FLEXBE_MSGS__MSG__DETAIL__BEHAVIOR_LOG__BUILDER_HPP_
