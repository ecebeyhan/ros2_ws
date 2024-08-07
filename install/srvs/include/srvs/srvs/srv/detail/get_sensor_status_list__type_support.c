// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from srvs:srv/GetSensorStatusList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "srvs/srv/detail/get_sensor_status_list__rosidl_typesupport_introspection_c.h"
#include "srvs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "srvs/srv/detail/get_sensor_status_list__functions.h"
#include "srvs/srv/detail/get_sensor_status_list__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void srvs__srv__GetSensorStatusList_Request__rosidl_typesupport_introspection_c__GetSensorStatusList_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  srvs__srv__GetSensorStatusList_Request__init(message_memory);
}

void srvs__srv__GetSensorStatusList_Request__rosidl_typesupport_introspection_c__GetSensorStatusList_Request_fini_function(void * message_memory)
{
  srvs__srv__GetSensorStatusList_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember srvs__srv__GetSensorStatusList_Request__rosidl_typesupport_introspection_c__GetSensorStatusList_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(srvs__srv__GetSensorStatusList_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers srvs__srv__GetSensorStatusList_Request__rosidl_typesupport_introspection_c__GetSensorStatusList_Request_message_members = {
  "srvs__srv",  // message namespace
  "GetSensorStatusList_Request",  // message name
  1,  // number of fields
  sizeof(srvs__srv__GetSensorStatusList_Request),
  srvs__srv__GetSensorStatusList_Request__rosidl_typesupport_introspection_c__GetSensorStatusList_Request_message_member_array,  // message members
  srvs__srv__GetSensorStatusList_Request__rosidl_typesupport_introspection_c__GetSensorStatusList_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  srvs__srv__GetSensorStatusList_Request__rosidl_typesupport_introspection_c__GetSensorStatusList_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t srvs__srv__GetSensorStatusList_Request__rosidl_typesupport_introspection_c__GetSensorStatusList_Request_message_type_support_handle = {
  0,
  &srvs__srv__GetSensorStatusList_Request__rosidl_typesupport_introspection_c__GetSensorStatusList_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_srvs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, srvs, srv, GetSensorStatusList_Request)() {
  if (!srvs__srv__GetSensorStatusList_Request__rosidl_typesupport_introspection_c__GetSensorStatusList_Request_message_type_support_handle.typesupport_identifier) {
    srvs__srv__GetSensorStatusList_Request__rosidl_typesupport_introspection_c__GetSensorStatusList_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &srvs__srv__GetSensorStatusList_Request__rosidl_typesupport_introspection_c__GetSensorStatusList_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "srvs/srv/detail/get_sensor_status_list__rosidl_typesupport_introspection_c.h"
// already included above
// #include "srvs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "srvs/srv/detail/get_sensor_status_list__functions.h"
// already included above
// #include "srvs/srv/detail/get_sensor_status_list__struct.h"


// Include directives for member types
// Member `status_list`
#include "srvs/msg/sensor_status.h"
// Member `status_list`
#include "srvs/msg/detail/sensor_status__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void srvs__srv__GetSensorStatusList_Response__rosidl_typesupport_introspection_c__GetSensorStatusList_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  srvs__srv__GetSensorStatusList_Response__init(message_memory);
}

void srvs__srv__GetSensorStatusList_Response__rosidl_typesupport_introspection_c__GetSensorStatusList_Response_fini_function(void * message_memory)
{
  srvs__srv__GetSensorStatusList_Response__fini(message_memory);
}

size_t srvs__srv__GetSensorStatusList_Response__rosidl_typesupport_introspection_c__size_function__GetSensorStatusList_Response__status_list(
  const void * untyped_member)
{
  const srvs__msg__SensorStatus__Sequence * member =
    (const srvs__msg__SensorStatus__Sequence *)(untyped_member);
  return member->size;
}

const void * srvs__srv__GetSensorStatusList_Response__rosidl_typesupport_introspection_c__get_const_function__GetSensorStatusList_Response__status_list(
  const void * untyped_member, size_t index)
{
  const srvs__msg__SensorStatus__Sequence * member =
    (const srvs__msg__SensorStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

void * srvs__srv__GetSensorStatusList_Response__rosidl_typesupport_introspection_c__get_function__GetSensorStatusList_Response__status_list(
  void * untyped_member, size_t index)
{
  srvs__msg__SensorStatus__Sequence * member =
    (srvs__msg__SensorStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

void srvs__srv__GetSensorStatusList_Response__rosidl_typesupport_introspection_c__fetch_function__GetSensorStatusList_Response__status_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const srvs__msg__SensorStatus * item =
    ((const srvs__msg__SensorStatus *)
    srvs__srv__GetSensorStatusList_Response__rosidl_typesupport_introspection_c__get_const_function__GetSensorStatusList_Response__status_list(untyped_member, index));
  srvs__msg__SensorStatus * value =
    (srvs__msg__SensorStatus *)(untyped_value);
  *value = *item;
}

void srvs__srv__GetSensorStatusList_Response__rosidl_typesupport_introspection_c__assign_function__GetSensorStatusList_Response__status_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  srvs__msg__SensorStatus * item =
    ((srvs__msg__SensorStatus *)
    srvs__srv__GetSensorStatusList_Response__rosidl_typesupport_introspection_c__get_function__GetSensorStatusList_Response__status_list(untyped_member, index));
  const srvs__msg__SensorStatus * value =
    (const srvs__msg__SensorStatus *)(untyped_value);
  *item = *value;
}

bool srvs__srv__GetSensorStatusList_Response__rosidl_typesupport_introspection_c__resize_function__GetSensorStatusList_Response__status_list(
  void * untyped_member, size_t size)
{
  srvs__msg__SensorStatus__Sequence * member =
    (srvs__msg__SensorStatus__Sequence *)(untyped_member);
  srvs__msg__SensorStatus__Sequence__fini(member);
  return srvs__msg__SensorStatus__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember srvs__srv__GetSensorStatusList_Response__rosidl_typesupport_introspection_c__GetSensorStatusList_Response_message_member_array[1] = {
  {
    "status_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(srvs__srv__GetSensorStatusList_Response, status_list),  // bytes offset in struct
    NULL,  // default value
    srvs__srv__GetSensorStatusList_Response__rosidl_typesupport_introspection_c__size_function__GetSensorStatusList_Response__status_list,  // size() function pointer
    srvs__srv__GetSensorStatusList_Response__rosidl_typesupport_introspection_c__get_const_function__GetSensorStatusList_Response__status_list,  // get_const(index) function pointer
    srvs__srv__GetSensorStatusList_Response__rosidl_typesupport_introspection_c__get_function__GetSensorStatusList_Response__status_list,  // get(index) function pointer
    srvs__srv__GetSensorStatusList_Response__rosidl_typesupport_introspection_c__fetch_function__GetSensorStatusList_Response__status_list,  // fetch(index, &value) function pointer
    srvs__srv__GetSensorStatusList_Response__rosidl_typesupport_introspection_c__assign_function__GetSensorStatusList_Response__status_list,  // assign(index, value) function pointer
    srvs__srv__GetSensorStatusList_Response__rosidl_typesupport_introspection_c__resize_function__GetSensorStatusList_Response__status_list  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers srvs__srv__GetSensorStatusList_Response__rosidl_typesupport_introspection_c__GetSensorStatusList_Response_message_members = {
  "srvs__srv",  // message namespace
  "GetSensorStatusList_Response",  // message name
  1,  // number of fields
  sizeof(srvs__srv__GetSensorStatusList_Response),
  srvs__srv__GetSensorStatusList_Response__rosidl_typesupport_introspection_c__GetSensorStatusList_Response_message_member_array,  // message members
  srvs__srv__GetSensorStatusList_Response__rosidl_typesupport_introspection_c__GetSensorStatusList_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  srvs__srv__GetSensorStatusList_Response__rosidl_typesupport_introspection_c__GetSensorStatusList_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t srvs__srv__GetSensorStatusList_Response__rosidl_typesupport_introspection_c__GetSensorStatusList_Response_message_type_support_handle = {
  0,
  &srvs__srv__GetSensorStatusList_Response__rosidl_typesupport_introspection_c__GetSensorStatusList_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_srvs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, srvs, srv, GetSensorStatusList_Response)() {
  srvs__srv__GetSensorStatusList_Response__rosidl_typesupport_introspection_c__GetSensorStatusList_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, srvs, msg, SensorStatus)();
  if (!srvs__srv__GetSensorStatusList_Response__rosidl_typesupport_introspection_c__GetSensorStatusList_Response_message_type_support_handle.typesupport_identifier) {
    srvs__srv__GetSensorStatusList_Response__rosidl_typesupport_introspection_c__GetSensorStatusList_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &srvs__srv__GetSensorStatusList_Response__rosidl_typesupport_introspection_c__GetSensorStatusList_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "srvs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "srvs/srv/detail/get_sensor_status_list__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers srvs__srv__detail__get_sensor_status_list__rosidl_typesupport_introspection_c__GetSensorStatusList_service_members = {
  "srvs__srv",  // service namespace
  "GetSensorStatusList",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // srvs__srv__detail__get_sensor_status_list__rosidl_typesupport_introspection_c__GetSensorStatusList_Request_message_type_support_handle,
  NULL  // response message
  // srvs__srv__detail__get_sensor_status_list__rosidl_typesupport_introspection_c__GetSensorStatusList_Response_message_type_support_handle
};

static rosidl_service_type_support_t srvs__srv__detail__get_sensor_status_list__rosidl_typesupport_introspection_c__GetSensorStatusList_service_type_support_handle = {
  0,
  &srvs__srv__detail__get_sensor_status_list__rosidl_typesupport_introspection_c__GetSensorStatusList_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, srvs, srv, GetSensorStatusList_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, srvs, srv, GetSensorStatusList_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_srvs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, srvs, srv, GetSensorStatusList)() {
  if (!srvs__srv__detail__get_sensor_status_list__rosidl_typesupport_introspection_c__GetSensorStatusList_service_type_support_handle.typesupport_identifier) {
    srvs__srv__detail__get_sensor_status_list__rosidl_typesupport_introspection_c__GetSensorStatusList_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)srvs__srv__detail__get_sensor_status_list__rosidl_typesupport_introspection_c__GetSensorStatusList_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, srvs, srv, GetSensorStatusList_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, srvs, srv, GetSensorStatusList_Response)()->data;
  }

  return &srvs__srv__detail__get_sensor_status_list__rosidl_typesupport_introspection_c__GetSensorStatusList_service_type_support_handle;
}
