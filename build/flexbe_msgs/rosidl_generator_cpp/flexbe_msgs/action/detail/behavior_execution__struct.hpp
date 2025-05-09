// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from flexbe_msgs:action/BehaviorExecution.idl
// generated code does not contain a copyright notice

#ifndef FLEXBE_MSGS__ACTION__DETAIL__BEHAVIOR_EXECUTION__STRUCT_HPP_
#define FLEXBE_MSGS__ACTION__DETAIL__BEHAVIOR_EXECUTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__flexbe_msgs__action__BehaviorExecution_Goal __attribute__((deprecated))
#else
# define DEPRECATED__flexbe_msgs__action__BehaviorExecution_Goal __declspec(deprecated)
#endif

namespace flexbe_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct BehaviorExecution_Goal_
{
  using Type = BehaviorExecution_Goal_<ContainerAllocator>;

  explicit BehaviorExecution_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->behavior_name = "";
    }
  }

  explicit BehaviorExecution_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : behavior_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->behavior_name = "";
    }
  }

  // field types and members
  using _behavior_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _behavior_name_type behavior_name;
  using _arg_keys_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _arg_keys_type arg_keys;
  using _arg_values_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _arg_values_type arg_values;
  using _input_keys_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _input_keys_type input_keys;
  using _input_values_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _input_values_type input_values;

  // setters for named parameter idiom
  Type & set__behavior_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->behavior_name = _arg;
    return *this;
  }
  Type & set__arg_keys(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->arg_keys = _arg;
    return *this;
  }
  Type & set__arg_values(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->arg_values = _arg;
    return *this;
  }
  Type & set__input_keys(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->input_keys = _arg;
    return *this;
  }
  Type & set__input_values(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->input_values = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    flexbe_msgs::action::BehaviorExecution_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const flexbe_msgs::action::BehaviorExecution_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<flexbe_msgs::action::BehaviorExecution_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<flexbe_msgs::action::BehaviorExecution_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      flexbe_msgs::action::BehaviorExecution_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<flexbe_msgs::action::BehaviorExecution_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      flexbe_msgs::action::BehaviorExecution_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<flexbe_msgs::action::BehaviorExecution_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<flexbe_msgs::action::BehaviorExecution_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<flexbe_msgs::action::BehaviorExecution_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__flexbe_msgs__action__BehaviorExecution_Goal
    std::shared_ptr<flexbe_msgs::action::BehaviorExecution_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__flexbe_msgs__action__BehaviorExecution_Goal
    std::shared_ptr<flexbe_msgs::action::BehaviorExecution_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BehaviorExecution_Goal_ & other) const
  {
    if (this->behavior_name != other.behavior_name) {
      return false;
    }
    if (this->arg_keys != other.arg_keys) {
      return false;
    }
    if (this->arg_values != other.arg_values) {
      return false;
    }
    if (this->input_keys != other.input_keys) {
      return false;
    }
    if (this->input_values != other.input_values) {
      return false;
    }
    return true;
  }
  bool operator!=(const BehaviorExecution_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BehaviorExecution_Goal_

// alias to use template instance with default allocator
using BehaviorExecution_Goal =
  flexbe_msgs::action::BehaviorExecution_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace flexbe_msgs


#ifndef _WIN32
# define DEPRECATED__flexbe_msgs__action__BehaviorExecution_Result __attribute__((deprecated))
#else
# define DEPRECATED__flexbe_msgs__action__BehaviorExecution_Result __declspec(deprecated)
#endif

namespace flexbe_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct BehaviorExecution_Result_
{
  using Type = BehaviorExecution_Result_<ContainerAllocator>;

  explicit BehaviorExecution_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->outcome = "";
    }
  }

  explicit BehaviorExecution_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : outcome(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->outcome = "";
    }
  }

  // field types and members
  using _outcome_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _outcome_type outcome;

  // setters for named parameter idiom
  Type & set__outcome(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->outcome = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    flexbe_msgs::action::BehaviorExecution_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const flexbe_msgs::action::BehaviorExecution_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<flexbe_msgs::action::BehaviorExecution_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<flexbe_msgs::action::BehaviorExecution_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      flexbe_msgs::action::BehaviorExecution_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<flexbe_msgs::action::BehaviorExecution_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      flexbe_msgs::action::BehaviorExecution_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<flexbe_msgs::action::BehaviorExecution_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<flexbe_msgs::action::BehaviorExecution_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<flexbe_msgs::action::BehaviorExecution_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__flexbe_msgs__action__BehaviorExecution_Result
    std::shared_ptr<flexbe_msgs::action::BehaviorExecution_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__flexbe_msgs__action__BehaviorExecution_Result
    std::shared_ptr<flexbe_msgs::action::BehaviorExecution_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BehaviorExecution_Result_ & other) const
  {
    if (this->outcome != other.outcome) {
      return false;
    }
    return true;
  }
  bool operator!=(const BehaviorExecution_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BehaviorExecution_Result_

// alias to use template instance with default allocator
using BehaviorExecution_Result =
  flexbe_msgs::action::BehaviorExecution_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace flexbe_msgs


#ifndef _WIN32
# define DEPRECATED__flexbe_msgs__action__BehaviorExecution_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__flexbe_msgs__action__BehaviorExecution_Feedback __declspec(deprecated)
#endif

namespace flexbe_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct BehaviorExecution_Feedback_
{
  using Type = BehaviorExecution_Feedback_<ContainerAllocator>;

  explicit BehaviorExecution_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_state = "";
    }
  }

  explicit BehaviorExecution_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : current_state(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_state = "";
    }
  }

  // field types and members
  using _current_state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _current_state_type current_state;

  // setters for named parameter idiom
  Type & set__current_state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->current_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    flexbe_msgs::action::BehaviorExecution_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const flexbe_msgs::action::BehaviorExecution_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<flexbe_msgs::action::BehaviorExecution_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<flexbe_msgs::action::BehaviorExecution_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      flexbe_msgs::action::BehaviorExecution_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<flexbe_msgs::action::BehaviorExecution_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      flexbe_msgs::action::BehaviorExecution_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<flexbe_msgs::action::BehaviorExecution_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<flexbe_msgs::action::BehaviorExecution_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<flexbe_msgs::action::BehaviorExecution_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__flexbe_msgs__action__BehaviorExecution_Feedback
    std::shared_ptr<flexbe_msgs::action::BehaviorExecution_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__flexbe_msgs__action__BehaviorExecution_Feedback
    std::shared_ptr<flexbe_msgs::action::BehaviorExecution_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BehaviorExecution_Feedback_ & other) const
  {
    if (this->current_state != other.current_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const BehaviorExecution_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BehaviorExecution_Feedback_

// alias to use template instance with default allocator
using BehaviorExecution_Feedback =
  flexbe_msgs::action::BehaviorExecution_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace flexbe_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "flexbe_msgs/action/detail/behavior_execution__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__flexbe_msgs__action__BehaviorExecution_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__flexbe_msgs__action__BehaviorExecution_SendGoal_Request __declspec(deprecated)
#endif

namespace flexbe_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct BehaviorExecution_SendGoal_Request_
{
  using Type = BehaviorExecution_SendGoal_Request_<ContainerAllocator>;

  explicit BehaviorExecution_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit BehaviorExecution_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    flexbe_msgs::action::BehaviorExecution_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const flexbe_msgs::action::BehaviorExecution_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    flexbe_msgs::action::BehaviorExecution_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const flexbe_msgs::action::BehaviorExecution_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<flexbe_msgs::action::BehaviorExecution_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<flexbe_msgs::action::BehaviorExecution_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      flexbe_msgs::action::BehaviorExecution_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<flexbe_msgs::action::BehaviorExecution_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      flexbe_msgs::action::BehaviorExecution_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<flexbe_msgs::action::BehaviorExecution_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<flexbe_msgs::action::BehaviorExecution_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<flexbe_msgs::action::BehaviorExecution_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__flexbe_msgs__action__BehaviorExecution_SendGoal_Request
    std::shared_ptr<flexbe_msgs::action::BehaviorExecution_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__flexbe_msgs__action__BehaviorExecution_SendGoal_Request
    std::shared_ptr<flexbe_msgs::action::BehaviorExecution_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BehaviorExecution_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const BehaviorExecution_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BehaviorExecution_SendGoal_Request_

// alias to use template instance with default allocator
using BehaviorExecution_SendGoal_Request =
  flexbe_msgs::action::BehaviorExecution_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace flexbe_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__flexbe_msgs__action__BehaviorExecution_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__flexbe_msgs__action__BehaviorExecution_SendGoal_Response __declspec(deprecated)
#endif

namespace flexbe_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct BehaviorExecution_SendGoal_Response_
{
  using Type = BehaviorExecution_SendGoal_Response_<ContainerAllocator>;

  explicit BehaviorExecution_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit BehaviorExecution_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    flexbe_msgs::action::BehaviorExecution_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const flexbe_msgs::action::BehaviorExecution_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<flexbe_msgs::action::BehaviorExecution_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<flexbe_msgs::action::BehaviorExecution_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      flexbe_msgs::action::BehaviorExecution_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<flexbe_msgs::action::BehaviorExecution_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      flexbe_msgs::action::BehaviorExecution_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<flexbe_msgs::action::BehaviorExecution_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<flexbe_msgs::action::BehaviorExecution_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<flexbe_msgs::action::BehaviorExecution_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__flexbe_msgs__action__BehaviorExecution_SendGoal_Response
    std::shared_ptr<flexbe_msgs::action::BehaviorExecution_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__flexbe_msgs__action__BehaviorExecution_SendGoal_Response
    std::shared_ptr<flexbe_msgs::action::BehaviorExecution_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BehaviorExecution_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const BehaviorExecution_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BehaviorExecution_SendGoal_Response_

// alias to use template instance with default allocator
using BehaviorExecution_SendGoal_Response =
  flexbe_msgs::action::BehaviorExecution_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace flexbe_msgs

namespace flexbe_msgs
{

namespace action
{

struct BehaviorExecution_SendGoal
{
  using Request = flexbe_msgs::action::BehaviorExecution_SendGoal_Request;
  using Response = flexbe_msgs::action::BehaviorExecution_SendGoal_Response;
};

}  // namespace action

}  // namespace flexbe_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__flexbe_msgs__action__BehaviorExecution_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__flexbe_msgs__action__BehaviorExecution_GetResult_Request __declspec(deprecated)
#endif

namespace flexbe_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct BehaviorExecution_GetResult_Request_
{
  using Type = BehaviorExecution_GetResult_Request_<ContainerAllocator>;

  explicit BehaviorExecution_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit BehaviorExecution_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    flexbe_msgs::action::BehaviorExecution_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const flexbe_msgs::action::BehaviorExecution_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<flexbe_msgs::action::BehaviorExecution_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<flexbe_msgs::action::BehaviorExecution_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      flexbe_msgs::action::BehaviorExecution_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<flexbe_msgs::action::BehaviorExecution_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      flexbe_msgs::action::BehaviorExecution_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<flexbe_msgs::action::BehaviorExecution_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<flexbe_msgs::action::BehaviorExecution_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<flexbe_msgs::action::BehaviorExecution_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__flexbe_msgs__action__BehaviorExecution_GetResult_Request
    std::shared_ptr<flexbe_msgs::action::BehaviorExecution_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__flexbe_msgs__action__BehaviorExecution_GetResult_Request
    std::shared_ptr<flexbe_msgs::action::BehaviorExecution_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BehaviorExecution_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const BehaviorExecution_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BehaviorExecution_GetResult_Request_

// alias to use template instance with default allocator
using BehaviorExecution_GetResult_Request =
  flexbe_msgs::action::BehaviorExecution_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace flexbe_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "flexbe_msgs/action/detail/behavior_execution__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__flexbe_msgs__action__BehaviorExecution_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__flexbe_msgs__action__BehaviorExecution_GetResult_Response __declspec(deprecated)
#endif

namespace flexbe_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct BehaviorExecution_GetResult_Response_
{
  using Type = BehaviorExecution_GetResult_Response_<ContainerAllocator>;

  explicit BehaviorExecution_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit BehaviorExecution_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    flexbe_msgs::action::BehaviorExecution_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const flexbe_msgs::action::BehaviorExecution_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    flexbe_msgs::action::BehaviorExecution_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const flexbe_msgs::action::BehaviorExecution_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<flexbe_msgs::action::BehaviorExecution_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<flexbe_msgs::action::BehaviorExecution_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      flexbe_msgs::action::BehaviorExecution_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<flexbe_msgs::action::BehaviorExecution_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      flexbe_msgs::action::BehaviorExecution_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<flexbe_msgs::action::BehaviorExecution_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<flexbe_msgs::action::BehaviorExecution_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<flexbe_msgs::action::BehaviorExecution_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__flexbe_msgs__action__BehaviorExecution_GetResult_Response
    std::shared_ptr<flexbe_msgs::action::BehaviorExecution_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__flexbe_msgs__action__BehaviorExecution_GetResult_Response
    std::shared_ptr<flexbe_msgs::action::BehaviorExecution_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BehaviorExecution_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const BehaviorExecution_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BehaviorExecution_GetResult_Response_

// alias to use template instance with default allocator
using BehaviorExecution_GetResult_Response =
  flexbe_msgs::action::BehaviorExecution_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace flexbe_msgs

namespace flexbe_msgs
{

namespace action
{

struct BehaviorExecution_GetResult
{
  using Request = flexbe_msgs::action::BehaviorExecution_GetResult_Request;
  using Response = flexbe_msgs::action::BehaviorExecution_GetResult_Response;
};

}  // namespace action

}  // namespace flexbe_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "flexbe_msgs/action/detail/behavior_execution__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__flexbe_msgs__action__BehaviorExecution_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__flexbe_msgs__action__BehaviorExecution_FeedbackMessage __declspec(deprecated)
#endif

namespace flexbe_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct BehaviorExecution_FeedbackMessage_
{
  using Type = BehaviorExecution_FeedbackMessage_<ContainerAllocator>;

  explicit BehaviorExecution_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit BehaviorExecution_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    flexbe_msgs::action::BehaviorExecution_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const flexbe_msgs::action::BehaviorExecution_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    flexbe_msgs::action::BehaviorExecution_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const flexbe_msgs::action::BehaviorExecution_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<flexbe_msgs::action::BehaviorExecution_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<flexbe_msgs::action::BehaviorExecution_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      flexbe_msgs::action::BehaviorExecution_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<flexbe_msgs::action::BehaviorExecution_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      flexbe_msgs::action::BehaviorExecution_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<flexbe_msgs::action::BehaviorExecution_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<flexbe_msgs::action::BehaviorExecution_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<flexbe_msgs::action::BehaviorExecution_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__flexbe_msgs__action__BehaviorExecution_FeedbackMessage
    std::shared_ptr<flexbe_msgs::action::BehaviorExecution_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__flexbe_msgs__action__BehaviorExecution_FeedbackMessage
    std::shared_ptr<flexbe_msgs::action::BehaviorExecution_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BehaviorExecution_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const BehaviorExecution_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BehaviorExecution_FeedbackMessage_

// alias to use template instance with default allocator
using BehaviorExecution_FeedbackMessage =
  flexbe_msgs::action::BehaviorExecution_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace flexbe_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace flexbe_msgs
{

namespace action
{

struct BehaviorExecution
{
  /// The goal message defined in the action definition.
  using Goal = flexbe_msgs::action::BehaviorExecution_Goal;
  /// The result message defined in the action definition.
  using Result = flexbe_msgs::action::BehaviorExecution_Result;
  /// The feedback message defined in the action definition.
  using Feedback = flexbe_msgs::action::BehaviorExecution_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = flexbe_msgs::action::BehaviorExecution_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = flexbe_msgs::action::BehaviorExecution_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = flexbe_msgs::action::BehaviorExecution_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct BehaviorExecution BehaviorExecution;

}  // namespace action

}  // namespace flexbe_msgs

#endif  // FLEXBE_MSGS__ACTION__DETAIL__BEHAVIOR_EXECUTION__STRUCT_HPP_
