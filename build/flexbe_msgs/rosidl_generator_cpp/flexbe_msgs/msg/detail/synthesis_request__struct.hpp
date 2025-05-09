// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from flexbe_msgs:msg/SynthesisRequest.idl
// generated code does not contain a copyright notice

#ifndef FLEXBE_MSGS__MSG__DETAIL__SYNTHESIS_REQUEST__STRUCT_HPP_
#define FLEXBE_MSGS__MSG__DETAIL__SYNTHESIS_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__flexbe_msgs__msg__SynthesisRequest __attribute__((deprecated))
#else
# define DEPRECATED__flexbe_msgs__msg__SynthesisRequest __declspec(deprecated)
#endif

namespace flexbe_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SynthesisRequest_
{
  using Type = SynthesisRequest_<ContainerAllocator>;

  explicit SynthesisRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->system = "";
      this->goal = "";
      this->initial_condition = "";
    }
  }

  explicit SynthesisRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    system(_alloc),
    goal(_alloc),
    initial_condition(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->system = "";
      this->goal = "";
      this->initial_condition = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _system_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _system_type system;
  using _goal_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _goal_type goal;
  using _initial_condition_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _initial_condition_type initial_condition;
  using _sm_outcomes_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _sm_outcomes_type sm_outcomes;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__system(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->system = _arg;
    return *this;
  }
  Type & set__goal(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->goal = _arg;
    return *this;
  }
  Type & set__initial_condition(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->initial_condition = _arg;
    return *this;
  }
  Type & set__sm_outcomes(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->sm_outcomes = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    flexbe_msgs::msg::SynthesisRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const flexbe_msgs::msg::SynthesisRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<flexbe_msgs::msg::SynthesisRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<flexbe_msgs::msg::SynthesisRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      flexbe_msgs::msg::SynthesisRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<flexbe_msgs::msg::SynthesisRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      flexbe_msgs::msg::SynthesisRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<flexbe_msgs::msg::SynthesisRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<flexbe_msgs::msg::SynthesisRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<flexbe_msgs::msg::SynthesisRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__flexbe_msgs__msg__SynthesisRequest
    std::shared_ptr<flexbe_msgs::msg::SynthesisRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__flexbe_msgs__msg__SynthesisRequest
    std::shared_ptr<flexbe_msgs::msg::SynthesisRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SynthesisRequest_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->system != other.system) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    if (this->initial_condition != other.initial_condition) {
      return false;
    }
    if (this->sm_outcomes != other.sm_outcomes) {
      return false;
    }
    return true;
  }
  bool operator!=(const SynthesisRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SynthesisRequest_

// alias to use template instance with default allocator
using SynthesisRequest =
  flexbe_msgs::msg::SynthesisRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace flexbe_msgs

#endif  // FLEXBE_MSGS__MSG__DETAIL__SYNTHESIS_REQUEST__STRUCT_HPP_
