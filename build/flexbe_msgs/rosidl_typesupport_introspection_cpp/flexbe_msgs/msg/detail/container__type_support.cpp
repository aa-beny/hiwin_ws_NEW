// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from flexbe_msgs:msg/Container.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "flexbe_msgs/msg/detail/container__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace flexbe_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Container_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) flexbe_msgs::msg::Container(_init);
}

void Container_fini_function(void * message_memory)
{
  auto typed_message = static_cast<flexbe_msgs::msg::Container *>(message_memory);
  typed_message->~Container();
}

size_t size_function__Container__children(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Container__children(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__Container__children(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__Container__children(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__Container__children(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__Container__children(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__Container__children(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__Container__children(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Container__outcomes(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Container__outcomes(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__Container__outcomes(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__Container__outcomes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__Container__outcomes(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__Container__outcomes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__Container__outcomes(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__Container__outcomes(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Container__transitions(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Container__transitions(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__Container__transitions(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__Container__transitions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__Container__transitions(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__Container__transitions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__Container__transitions(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__Container__transitions(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Container__autonomy(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Container__autonomy(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__Container__autonomy(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__Container__autonomy(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int8_t *>(
    get_const_function__Container__autonomy(untyped_member, index));
  auto & value = *reinterpret_cast<int8_t *>(untyped_value);
  value = item;
}

void assign_function__Container__autonomy(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int8_t *>(
    get_function__Container__autonomy(untyped_member, index));
  const auto & value = *reinterpret_cast<const int8_t *>(untyped_value);
  item = value;
}

void resize_function__Container__autonomy(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int8_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Container_message_member_array[5] = {
  {
    "path",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs::msg::Container, path),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "children",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs::msg::Container, children),  // bytes offset in struct
    nullptr,  // default value
    size_function__Container__children,  // size() function pointer
    get_const_function__Container__children,  // get_const(index) function pointer
    get_function__Container__children,  // get(index) function pointer
    fetch_function__Container__children,  // fetch(index, &value) function pointer
    assign_function__Container__children,  // assign(index, value) function pointer
    resize_function__Container__children  // resize(index) function pointer
  },
  {
    "outcomes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs::msg::Container, outcomes),  // bytes offset in struct
    nullptr,  // default value
    size_function__Container__outcomes,  // size() function pointer
    get_const_function__Container__outcomes,  // get_const(index) function pointer
    get_function__Container__outcomes,  // get(index) function pointer
    fetch_function__Container__outcomes,  // fetch(index, &value) function pointer
    assign_function__Container__outcomes,  // assign(index, value) function pointer
    resize_function__Container__outcomes  // resize(index) function pointer
  },
  {
    "transitions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs::msg::Container, transitions),  // bytes offset in struct
    nullptr,  // default value
    size_function__Container__transitions,  // size() function pointer
    get_const_function__Container__transitions,  // get_const(index) function pointer
    get_function__Container__transitions,  // get(index) function pointer
    fetch_function__Container__transitions,  // fetch(index, &value) function pointer
    assign_function__Container__transitions,  // assign(index, value) function pointer
    resize_function__Container__transitions  // resize(index) function pointer
  },
  {
    "autonomy",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs::msg::Container, autonomy),  // bytes offset in struct
    nullptr,  // default value
    size_function__Container__autonomy,  // size() function pointer
    get_const_function__Container__autonomy,  // get_const(index) function pointer
    get_function__Container__autonomy,  // get(index) function pointer
    fetch_function__Container__autonomy,  // fetch(index, &value) function pointer
    assign_function__Container__autonomy,  // assign(index, value) function pointer
    resize_function__Container__autonomy  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Container_message_members = {
  "flexbe_msgs::msg",  // message namespace
  "Container",  // message name
  5,  // number of fields
  sizeof(flexbe_msgs::msg::Container),
  Container_message_member_array,  // message members
  Container_init_function,  // function to initialize message memory (memory has to be allocated)
  Container_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Container_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Container_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace flexbe_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<flexbe_msgs::msg::Container>()
{
  return &::flexbe_msgs::msg::rosidl_typesupport_introspection_cpp::Container_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, flexbe_msgs, msg, Container)() {
  return &::flexbe_msgs::msg::rosidl_typesupport_introspection_cpp::Container_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
