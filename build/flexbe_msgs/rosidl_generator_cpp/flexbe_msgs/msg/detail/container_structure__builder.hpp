// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from flexbe_msgs:msg/ContainerStructure.idl
// generated code does not contain a copyright notice

#ifndef FLEXBE_MSGS__MSG__DETAIL__CONTAINER_STRUCTURE__BUILDER_HPP_
#define FLEXBE_MSGS__MSG__DETAIL__CONTAINER_STRUCTURE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "flexbe_msgs/msg/detail/container_structure__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace flexbe_msgs
{

namespace msg
{

namespace builder
{

class Init_ContainerStructure_containers
{
public:
  explicit Init_ContainerStructure_containers(::flexbe_msgs::msg::ContainerStructure & msg)
  : msg_(msg)
  {}
  ::flexbe_msgs::msg::ContainerStructure containers(::flexbe_msgs::msg::ContainerStructure::_containers_type arg)
  {
    msg_.containers = std::move(arg);
    return std::move(msg_);
  }

private:
  ::flexbe_msgs::msg::ContainerStructure msg_;
};

class Init_ContainerStructure_behavior_id
{
public:
  Init_ContainerStructure_behavior_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ContainerStructure_containers behavior_id(::flexbe_msgs::msg::ContainerStructure::_behavior_id_type arg)
  {
    msg_.behavior_id = std::move(arg);
    return Init_ContainerStructure_containers(msg_);
  }

private:
  ::flexbe_msgs::msg::ContainerStructure msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::flexbe_msgs::msg::ContainerStructure>()
{
  return flexbe_msgs::msg::builder::Init_ContainerStructure_behavior_id();
}

}  // namespace flexbe_msgs

#endif  // FLEXBE_MSGS__MSG__DETAIL__CONTAINER_STRUCTURE__BUILDER_HPP_
