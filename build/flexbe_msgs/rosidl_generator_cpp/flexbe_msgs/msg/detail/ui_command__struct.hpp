// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from flexbe_msgs:msg/UICommand.idl
// generated code does not contain a copyright notice

#ifndef FLEXBE_MSGS__MSG__DETAIL__UI_COMMAND__STRUCT_HPP_
#define FLEXBE_MSGS__MSG__DETAIL__UI_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__flexbe_msgs__msg__UICommand __attribute__((deprecated))
#else
# define DEPRECATED__flexbe_msgs__msg__UICommand __declspec(deprecated)
#endif

namespace flexbe_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UICommand_
{
  using Type = UICommand_<ContainerAllocator>;

  explicit UICommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = "";
      this->key = "";
    }
  }

  explicit UICommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : command(_alloc),
    key(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = "";
      this->key = "";
    }
  }

  // field types and members
  using _command_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _command_type command;
  using _key_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _key_type key;

  // setters for named parameter idiom
  Type & set__command(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->command = _arg;
    return *this;
  }
  Type & set__key(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->key = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    flexbe_msgs::msg::UICommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const flexbe_msgs::msg::UICommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<flexbe_msgs::msg::UICommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<flexbe_msgs::msg::UICommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      flexbe_msgs::msg::UICommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<flexbe_msgs::msg::UICommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      flexbe_msgs::msg::UICommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<flexbe_msgs::msg::UICommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<flexbe_msgs::msg::UICommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<flexbe_msgs::msg::UICommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__flexbe_msgs__msg__UICommand
    std::shared_ptr<flexbe_msgs::msg::UICommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__flexbe_msgs__msg__UICommand
    std::shared_ptr<flexbe_msgs::msg::UICommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UICommand_ & other) const
  {
    if (this->command != other.command) {
      return false;
    }
    if (this->key != other.key) {
      return false;
    }
    return true;
  }
  bool operator!=(const UICommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UICommand_

// alias to use template instance with default allocator
using UICommand =
  flexbe_msgs::msg::UICommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace flexbe_msgs

#endif  // FLEXBE_MSGS__MSG__DETAIL__UI_COMMAND__STRUCT_HPP_
