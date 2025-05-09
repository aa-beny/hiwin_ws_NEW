// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from flexbe_msgs:msg/BehaviorModification.idl
// generated code does not contain a copyright notice
#include "flexbe_msgs/msg/detail/behavior_modification__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "flexbe_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "flexbe_msgs/msg/detail/behavior_modification__struct.h"
#include "flexbe_msgs/msg/detail/behavior_modification__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // new_content
#include "rosidl_runtime_c/string_functions.h"  // new_content

// forward declare type support functions


using _BehaviorModification__ros_msg_type = flexbe_msgs__msg__BehaviorModification;

static bool _BehaviorModification__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BehaviorModification__ros_msg_type * ros_message = static_cast<const _BehaviorModification__ros_msg_type *>(untyped_ros_message);
  // Field name: index_begin
  {
    cdr << ros_message->index_begin;
  }

  // Field name: index_end
  {
    cdr << ros_message->index_end;
  }

  // Field name: new_content
  {
    const rosidl_runtime_c__String * str = &ros_message->new_content;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _BehaviorModification__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BehaviorModification__ros_msg_type * ros_message = static_cast<_BehaviorModification__ros_msg_type *>(untyped_ros_message);
  // Field name: index_begin
  {
    cdr >> ros_message->index_begin;
  }

  // Field name: index_end
  {
    cdr >> ros_message->index_end;
  }

  // Field name: new_content
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->new_content.data) {
      rosidl_runtime_c__String__init(&ros_message->new_content);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->new_content,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'new_content'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_flexbe_msgs
size_t get_serialized_size_flexbe_msgs__msg__BehaviorModification(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BehaviorModification__ros_msg_type * ros_message = static_cast<const _BehaviorModification__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name index_begin
  {
    size_t item_size = sizeof(ros_message->index_begin);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name index_end
  {
    size_t item_size = sizeof(ros_message->index_end);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name new_content
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->new_content.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _BehaviorModification__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_flexbe_msgs__msg__BehaviorModification(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_flexbe_msgs
size_t max_serialized_size_flexbe_msgs__msg__BehaviorModification(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: index_begin
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: index_end
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: new_content
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = flexbe_msgs__msg__BehaviorModification;
    is_plain =
      (
      offsetof(DataType, new_content) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _BehaviorModification__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_flexbe_msgs__msg__BehaviorModification(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_BehaviorModification = {
  "flexbe_msgs::msg",
  "BehaviorModification",
  _BehaviorModification__cdr_serialize,
  _BehaviorModification__cdr_deserialize,
  _BehaviorModification__get_serialized_size,
  _BehaviorModification__max_serialized_size
};

static rosidl_message_type_support_t _BehaviorModification__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BehaviorModification,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, flexbe_msgs, msg, BehaviorModification)() {
  return &_BehaviorModification__type_support;
}

#if defined(__cplusplus)
}
#endif
