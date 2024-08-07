// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from srvs:msg/SensorType.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "srvs/msg/detail/sensor_type__rosidl_typesupport_introspection_c.h"
#include "srvs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "srvs/msg/detail/sensor_type__functions.h"
#include "srvs/msg/detail/sensor_type__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void srvs__msg__SensorType__rosidl_typesupport_introspection_c__SensorType_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  srvs__msg__SensorType__init(message_memory);
}

void srvs__msg__SensorType__rosidl_typesupport_introspection_c__SensorType_fini_function(void * message_memory)
{
  srvs__msg__SensorType__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember srvs__msg__SensorType__rosidl_typesupport_introspection_c__SensorType_message_member_array[1] = {
  {
    "sensor_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(srvs__msg__SensorType, sensor_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers srvs__msg__SensorType__rosidl_typesupport_introspection_c__SensorType_message_members = {
  "srvs__msg",  // message namespace
  "SensorType",  // message name
  1,  // number of fields
  sizeof(srvs__msg__SensorType),
  srvs__msg__SensorType__rosidl_typesupport_introspection_c__SensorType_message_member_array,  // message members
  srvs__msg__SensorType__rosidl_typesupport_introspection_c__SensorType_init_function,  // function to initialize message memory (memory has to be allocated)
  srvs__msg__SensorType__rosidl_typesupport_introspection_c__SensorType_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t srvs__msg__SensorType__rosidl_typesupport_introspection_c__SensorType_message_type_support_handle = {
  0,
  &srvs__msg__SensorType__rosidl_typesupport_introspection_c__SensorType_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_srvs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, srvs, msg, SensorType)() {
  if (!srvs__msg__SensorType__rosidl_typesupport_introspection_c__SensorType_message_type_support_handle.typesupport_identifier) {
    srvs__msg__SensorType__rosidl_typesupport_introspection_c__SensorType_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &srvs__msg__SensorType__rosidl_typesupport_introspection_c__SensorType_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
