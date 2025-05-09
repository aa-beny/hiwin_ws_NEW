// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from flexbe_msgs:msg/CommandFeedback.idl
// generated code does not contain a copyright notice

#ifndef FLEXBE_MSGS__MSG__DETAIL__COMMAND_FEEDBACK__STRUCT_HPP_
#define FLEXBE_MSGS__MSG__DETAIL__COMMAND_FEEDBACK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__flexbe_msgs__msg__CommandFeedback __attribute__((deprecated))
#else
# define DEPRECATED__flexbe_msgs__msg__CommandFeedback __declspec(deprecated)
#endif

namespace flexbe_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CommandFeedback_
{
  using Type = CommandFeedback_<ContainerAllocator>;

  explicit CommandFeedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = "";
    }
  }

  explicit CommandFeedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : command(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = "";
    }
  }

  // field types and members
  using _command_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _command_type command;
  using _args_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _args_type args;

  // setters for named parameter idiom
  Type & set__command(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->command = _arg;
    return *this;
  }
  Type & set__args(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->args = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    flexbe_msgs::msg::CommandFeedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const flexbe_msgs::msg::CommandFeedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<flexbe_msgs::msg::CommandFeedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<flexbe_msgs::msg::CommandFeedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      flexbe_msgs::msg::CommandFeedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<flexbe_msgs::msg::CommandFeedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      flexbe_msgs::msg::CommandFeedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<flexbe_msgs::msg::CommandFeedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<flexbe_msgs::msg::CommandFeedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<flexbe_msgs::msg::CommandFeedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__flexbe_msgs__msg__CommandFeedback
    std::shared_ptr<flexbe_msgs::msg::CommandFeedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__flexbe_msgs__msg__CommandFeedback
    std::shared_ptr<flexbe_msgs::msg::CommandFeedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CommandFeedback_ & other) const
  {
    if (this->command != other.command) {
      return false;
    }
    if (this->args != other.args) {
      return false;
    }
    return true;
  }
  bool operator!=(const CommandFeedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CommandFeedback_

// alias to use template instance with default allocator
using CommandFeedback =
  flexbe_msgs::msg::CommandFeedback_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace flexbe_msgs

#endif  // FLEXBE_MSGS__MSG__DETAIL__COMMAND_FEEDBACK__STRUCT_HPP_
