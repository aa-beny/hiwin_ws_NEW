// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from flexbe_msgs:msg/BehaviorModification.idl
// generated code does not contain a copyright notice

#ifndef FLEXBE_MSGS__MSG__DETAIL__BEHAVIOR_MODIFICATION__BUILDER_HPP_
#define FLEXBE_MSGS__MSG__DETAIL__BEHAVIOR_MODIFICATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "flexbe_msgs/msg/detail/behavior_modification__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace flexbe_msgs
{

namespace msg
{

namespace builder
{

class Init_BehaviorModification_new_content
{
public:
  explicit Init_BehaviorModification_new_content(::flexbe_msgs::msg::BehaviorModification & msg)
  : msg_(msg)
  {}
  ::flexbe_msgs::msg::BehaviorModification new_content(::flexbe_msgs::msg::BehaviorModification::_new_content_type arg)
  {
    msg_.new_content = std::move(arg);
    return std::move(msg_);
  }

private:
  ::flexbe_msgs::msg::BehaviorModification msg_;
};

class Init_BehaviorModification_index_end
{
public:
  explicit Init_BehaviorModification_index_end(::flexbe_msgs::msg::BehaviorModification & msg)
  : msg_(msg)
  {}
  Init_BehaviorModification_new_content index_end(::flexbe_msgs::msg::BehaviorModification::_index_end_type arg)
  {
    msg_.index_end = std::move(arg);
    return Init_BehaviorModification_new_content(msg_);
  }

private:
  ::flexbe_msgs::msg::BehaviorModification msg_;
};

class Init_BehaviorModification_index_begin
{
public:
  Init_BehaviorModification_index_begin()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BehaviorModification_index_end index_begin(::flexbe_msgs::msg::BehaviorModification::_index_begin_type arg)
  {
    msg_.index_begin = std::move(arg);
    return Init_BehaviorModification_index_end(msg_);
  }

private:
  ::flexbe_msgs::msg::BehaviorModification msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::flexbe_msgs::msg::BehaviorModification>()
{
  return flexbe_msgs::msg::builder::Init_BehaviorModification_index_begin();
}

}  // namespace flexbe_msgs

#endif  // FLEXBE_MSGS__MSG__DETAIL__BEHAVIOR_MODIFICATION__BUILDER_HPP_
