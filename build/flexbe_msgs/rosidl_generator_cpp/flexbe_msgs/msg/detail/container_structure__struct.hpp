// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from flexbe_msgs:msg/ContainerStructure.idl
// generated code does not contain a copyright notice

#ifndef FLEXBE_MSGS__MSG__DETAIL__CONTAINER_STRUCTURE__STRUCT_HPP_
#define FLEXBE_MSGS__MSG__DETAIL__CONTAINER_STRUCTURE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'containers'
#include "flexbe_msgs/msg/detail/container__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__flexbe_msgs__msg__ContainerStructure __attribute__((deprecated))
#else
# define DEPRECATED__flexbe_msgs__msg__ContainerStructure __declspec(deprecated)
#endif

namespace flexbe_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ContainerStructure_
{
  using Type = ContainerStructure_<ContainerAllocator>;

  explicit ContainerStructure_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->behavior_id = 0l;
    }
  }

  explicit ContainerStructure_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->behavior_id = 0l;
    }
  }

  // field types and members
  using _behavior_id_type =
    int32_t;
  _behavior_id_type behavior_id;
  using _containers_type =
    std::vector<flexbe_msgs::msg::Container_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<flexbe_msgs::msg::Container_<ContainerAllocator>>>;
  _containers_type containers;

  // setters for named parameter idiom
  Type & set__behavior_id(
    const int32_t & _arg)
  {
    this->behavior_id = _arg;
    return *this;
  }
  Type & set__containers(
    const std::vector<flexbe_msgs::msg::Container_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<flexbe_msgs::msg::Container_<ContainerAllocator>>> & _arg)
  {
    this->containers = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    flexbe_msgs::msg::ContainerStructure_<ContainerAllocator> *;
  using ConstRawPtr =
    const flexbe_msgs::msg::ContainerStructure_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<flexbe_msgs::msg::ContainerStructure_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<flexbe_msgs::msg::ContainerStructure_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      flexbe_msgs::msg::ContainerStructure_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<flexbe_msgs::msg::ContainerStructure_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      flexbe_msgs::msg::ContainerStructure_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<flexbe_msgs::msg::ContainerStructure_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<flexbe_msgs::msg::ContainerStructure_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<flexbe_msgs::msg::ContainerStructure_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__flexbe_msgs__msg__ContainerStructure
    std::shared_ptr<flexbe_msgs::msg::ContainerStructure_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__flexbe_msgs__msg__ContainerStructure
    std::shared_ptr<flexbe_msgs::msg::ContainerStructure_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ContainerStructure_ & other) const
  {
    if (this->behavior_id != other.behavior_id) {
      return false;
    }
    if (this->containers != other.containers) {
      return false;
    }
    return true;
  }
  bool operator!=(const ContainerStructure_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ContainerStructure_

// alias to use template instance with default allocator
using ContainerStructure =
  flexbe_msgs::msg::ContainerStructure_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace flexbe_msgs

#endif  // FLEXBE_MSGS__MSG__DETAIL__CONTAINER_STRUCTURE__STRUCT_HPP_
