// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from srvs:msg/SensorType.idl
// generated code does not contain a copyright notice

#ifndef SRVS__MSG__DETAIL__SENSOR_TYPE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define SRVS__MSG__DETAIL__SENSOR_TYPE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "srvs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "srvs/msg/detail/sensor_type__struct.hpp"

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

#include "fastcdr/Cdr.h"

namespace srvs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_srvs
cdr_serialize(
  const srvs::msg::SensorType & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_srvs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  srvs::msg::SensorType & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_srvs
get_serialized_size(
  const srvs::msg::SensorType & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_srvs
max_serialized_size_SensorType(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace srvs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_srvs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, srvs, msg, SensorType)();

#ifdef __cplusplus
}
#endif

#endif  // SRVS__MSG__DETAIL__SENSOR_TYPE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
