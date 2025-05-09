// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from flexbe_msgs:msg/OutcomeRequest.idl
// generated code does not contain a copyright notice

#ifndef FLEXBE_MSGS__MSG__DETAIL__OUTCOME_REQUEST__BUILDER_HPP_
#define FLEXBE_MSGS__MSG__DETAIL__OUTCOME_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "flexbe_msgs/msg/detail/outcome_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace flexbe_msgs
{

namespace msg
{

namespace builder
{

class Init_OutcomeRequest_target
{
public:
  explicit Init_OutcomeRequest_target(::flexbe_msgs::msg::OutcomeRequest & msg)
  : msg_(msg)
  {}
  ::flexbe_msgs::msg::OutcomeRequest target(::flexbe_msgs::msg::OutcomeRequest::_target_type arg)
  {
    msg_.target = std::move(arg);
    return std::move(msg_);
  }

private:
  ::flexbe_msgs::msg::OutcomeRequest msg_;
};

class Init_OutcomeRequest_outcome
{
public:
  Init_OutcomeRequest_outcome()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OutcomeRequest_target outcome(::flexbe_msgs::msg::OutcomeRequest::_outcome_type arg)
  {
    msg_.outcome = std::move(arg);
    return Init_OutcomeRequest_target(msg_);
  }

private:
  ::flexbe_msgs::msg::OutcomeRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::flexbe_msgs::msg::OutcomeRequest>()
{
  return flexbe_msgs::msg::builder::Init_OutcomeRequest_outcome();
}

}  // namespace flexbe_msgs

#endif  // FLEXBE_MSGS__MSG__DETAIL__OUTCOME_REQUEST__BUILDER_HPP_
