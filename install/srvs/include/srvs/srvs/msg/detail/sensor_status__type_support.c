// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from srvs:msg/SensorStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "srvs/msg/detail/sensor_status__rosidl_typesupport_introspection_c.h"
#include "srvs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "srvs/msg/detail/sensor_status__functions.h"
#include "srvs/msg/detail/sensor_status__struct.h"


// Include directives for member types
// Member `sensorname`
#include "rosidl_runtime_c/string_functions.h"
// Member `sensortype`
#include "srvs/msg/sensor_type.h"
// Member `sensortype`
#include "srvs/msg/detail/sensor_type__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void srvs__msg__SensorStatus__rosidl_typesupport_introspection_c__SensorStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  srvs__msg__SensorStatus__init(message_memory);
}

void srvs__msg__SensorStatus__rosidl_typesupport_introspection_c__SensorStatus_fini_function(void * message_memory)
{
  srvs__msg__SensorStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember srvs__msg__SensorStatus__rosidl_typesupport_introspection_c__SensorStatus_message_member_array[7] = {
  {
    "sensorid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(srvs__msg__SensorStatus, sensorid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "unitid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(srvs__msg__SensorStatus, unitid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sensorname",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(srvs__msg__SensorStatus, sensorname),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "alive",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(srvs__msg__SensorStatus, alive),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "recording",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(srvs__msg__SensorStatus, recording),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "streaming",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(srvs__msg__SensorStatus, streaming),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sensortype",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(srvs__msg__SensorStatus, sensortype),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers srvs__msg__SensorStatus__rosidl_typesupport_introspection_c__SensorStatus_message_members = {
  "srvs__msg",  // message namespace
  "SensorStatus",  // message name
  7,  // number of fields
  sizeof(srvs__msg__SensorStatus),
  srvs__msg__SensorStatus__rosidl_typesupport_introspection_c__SensorStatus_message_member_array,  // message members
  srvs__msg__SensorStatus__rosidl_typesupport_introspection_c__SensorStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  srvs__msg__SensorStatus__rosidl_typesupport_introspection_c__SensorStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t srvs__msg__SensorStatus__rosidl_typesupport_introspection_c__SensorStatus_message_type_support_handle = {
  0,
  &srvs__msg__SensorStatus__rosidl_typesupport_introspection_c__SensorStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_srvs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, srvs, msg, SensorStatus)() {
  srvs__msg__SensorStatus__rosidl_typesupport_introspection_c__SensorStatus_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, srvs, msg, SensorType)();
  if (!srvs__msg__SensorStatus__rosidl_typesupport_introspection_c__SensorStatus_message_type_support_handle.typesupport_identifier) {
    srvs__msg__SensorStatus__rosidl_typesupport_introspection_c__SensorStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &srvs__msg__SensorStatus__rosidl_typesupport_introspection_c__SensorStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
