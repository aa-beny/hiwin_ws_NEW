// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from flexbe_msgs:msg/OutcomeCondition.idl
// generated code does not contain a copyright notice

#ifndef FLEXBE_MSGS__MSG__DETAIL__OUTCOME_CONDITION__BUILDER_HPP_
#define FLEXBE_MSGS__MSG__DETAIL__OUTCOME_CONDITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "flexbe_msgs/msg/detail/outcome_condition__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace flexbe_msgs
{

namespace msg
{

namespace builder
{

class Init_OutcomeCondition_state_outcome
{
public:
  explicit Init_OutcomeCondition_state_outcome(::flexbe_msgs::msg::OutcomeCondition & msg)
  : msg_(msg)
  {}
  ::flexbe_msgs::msg::OutcomeCondition state_outcome(::flexbe_msgs::msg::OutcomeCondition::_state_outcome_type arg)
  {
    msg_.state_outcome = std::move(arg);
    return std::move(msg_);
  }

private:
  ::flexbe_msgs::msg::OutcomeCondition msg_;
};

class Init_OutcomeCondition_state_name
{
public:
  Init_OutcomeCondition_state_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OutcomeCondition_state_outcome state_name(::flexbe_msgs::msg::OutcomeCondition::_state_name_type arg)
  {
    msg_.state_name = std::move(arg);
    return Init_OutcomeCondition_state_outcome(msg_);
  }

private:
  ::flexbe_msgs::msg::OutcomeCondition msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::flexbe_msgs::msg::OutcomeCondition>()
{
  return flexbe_msgs::msg::builder::Init_OutcomeCondition_state_name();
}

}  // namespace flexbe_msgs

#endif  // FLEXBE_MSGS__MSG__DETAIL__OUTCOME_CONDITION__BUILDER_HPP_
