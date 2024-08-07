// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from srvs:srv/GetSensorStatusList.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "srvs/srv/detail/get_sensor_status_list__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace srvs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetSensorStatusList_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) srvs::srv::GetSensorStatusList_Request(_init);
}

void GetSensorStatusList_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<srvs::srv::GetSensorStatusList_Request *>(message_memory);
  typed_message->~GetSensorStatusList_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetSensorStatusList_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(srvs::srv::GetSensorStatusList_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetSensorStatusList_Request_message_members = {
  "srvs::srv",  // message namespace
  "GetSensorStatusList_Request",  // message name
  1,  // number of fields
  sizeof(srvs::srv::GetSensorStatusList_Request),
  GetSensorStatusList_Request_message_member_array,  // message members
  GetSensorStatusList_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetSensorStatusList_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetSensorStatusList_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetSensorStatusList_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace srvs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<srvs::srv::GetSensorStatusList_Request>()
{
  return &::srvs::srv::rosidl_typesupport_introspection_cpp::GetSensorStatusList_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, srvs, srv, GetSensorStatusList_Request)() {
  return &::srvs::srv::rosidl_typesupport_introspection_cpp::GetSensorStatusList_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "srvs/srv/detail/get_sensor_status_list__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace srvs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetSensorStatusList_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) srvs::srv::GetSensorStatusList_Response(_init);
}

void GetSensorStatusList_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<srvs::srv::GetSensorStatusList_Response *>(message_memory);
  typed_message->~GetSensorStatusList_Response();
}

size_t size_function__GetSensorStatusList_Response__status_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<srvs::msg::SensorStatus> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetSensorStatusList_Response__status_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<srvs::msg::SensorStatus> *>(untyped_member);
  return &member[index];
}

void * get_function__GetSensorStatusList_Response__status_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<srvs::msg::SensorStatus> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetSensorStatusList_Response__status_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const srvs::msg::SensorStatus *>(
    get_const_function__GetSensorStatusList_Response__status_list(untyped_member, index));
  auto & value = *reinterpret_cast<srvs::msg::SensorStatus *>(untyped_value);
  value = item;
}

void assign_function__GetSensorStatusList_Response__status_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<srvs::msg::SensorStatus *>(
    get_function__GetSensorStatusList_Response__status_list(untyped_member, index));
  const auto & value = *reinterpret_cast<const srvs::msg::SensorStatus *>(untyped_value);
  item = value;
}

void resize_function__GetSensorStatusList_Response__status_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<srvs::msg::SensorStatus> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetSensorStatusList_Response_message_member_array[1] = {
  {
    "status_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<srvs::msg::SensorStatus>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(srvs::srv::GetSensorStatusList_Response, status_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetSensorStatusList_Response__status_list,  // size() function pointer
    get_const_function__GetSensorStatusList_Response__status_list,  // get_const(index) function pointer
    get_function__GetSensorStatusList_Response__status_list,  // get(index) function pointer
    fetch_function__GetSensorStatusList_Response__status_list,  // fetch(index, &value) function pointer
    assign_function__GetSensorStatusList_Response__status_list,  // assign(index, value) function pointer
    resize_function__GetSensorStatusList_Response__status_list  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetSensorStatusList_Response_message_members = {
  "srvs::srv",  // message namespace
  "GetSensorStatusList_Response",  // message name
  1,  // number of fields
  sizeof(srvs::srv::GetSensorStatusList_Response),
  GetSensorStatusList_Response_message_member_array,  // message members
  GetSensorStatusList_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetSensorStatusList_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetSensorStatusList_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetSensorStatusList_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace srvs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<srvs::srv::GetSensorStatusList_Response>()
{
  return &::srvs::srv::rosidl_typesupport_introspection_cpp::GetSensorStatusList_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, srvs, srv, GetSensorStatusList_Response)() {
  return &::srvs::srv::rosidl_typesupport_introspection_cpp::GetSensorStatusList_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "srvs/srv/detail/get_sensor_status_list__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace srvs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers GetSensorStatusList_service_members = {
  "srvs::srv",  // service namespace
  "GetSensorStatusList",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<srvs::srv::GetSensorStatusList>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t GetSensorStatusList_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetSensorStatusList_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace srvs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<srvs::srv::GetSensorStatusList>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::srvs::srv::rosidl_typesupport_introspection_cpp::GetSensorStatusList_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::srvs::srv::GetSensorStatusList_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::srvs::srv::GetSensorStatusList_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, srvs, srv, GetSensorStatusList)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<srvs::srv::GetSensorStatusList>();
}

#ifdef __cplusplus
}
#endif
