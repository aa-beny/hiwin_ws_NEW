// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from flexbe_msgs:msg/BehaviorModification.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "flexbe_msgs/msg/detail/behavior_modification__struct.h"
#include "flexbe_msgs/msg/detail/behavior_modification__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace flexbe_msgs
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _BehaviorModification_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BehaviorModification_type_support_ids_t;

static const _BehaviorModification_type_support_ids_t _BehaviorModification_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _BehaviorModification_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BehaviorModification_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BehaviorModification_type_support_symbol_names_t _BehaviorModification_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, flexbe_msgs, msg, BehaviorModification)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, flexbe_msgs, msg, BehaviorModification)),
  }
};

typedef struct _BehaviorModification_type_support_data_t
{
  void * data[2];
} _BehaviorModification_type_support_data_t;

static _BehaviorModification_type_support_data_t _BehaviorModification_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BehaviorModification_message_typesupport_map = {
  2,
  "flexbe_msgs",
  &_BehaviorModification_message_typesupport_ids.typesupport_identifier[0],
  &_BehaviorModification_message_typesupport_symbol_names.symbol_name[0],
  &_BehaviorModification_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t BehaviorModification_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BehaviorModification_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace flexbe_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, flexbe_msgs, msg, BehaviorModification)() {
  return &::flexbe_msgs::msg::rosidl_typesupport_c::BehaviorModification_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
