// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from srvs:srv/GetSensorStatusList.idl
// generated code does not contain a copyright notice

#ifndef SRVS__SRV__DETAIL__GET_SENSOR_STATUS_LIST__TRAITS_HPP_
#define SRVS__SRV__DETAIL__GET_SENSOR_STATUS_LIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "srvs/srv/detail/get_sensor_status_list__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace srvs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetSensorStatusList_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetSensorStatusList_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetSensorStatusList_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace srvs

namespace rosidl_generator_traits
{

[[deprecated("use srvs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const srvs::srv::GetSensorStatusList_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  srvs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use srvs::srv::to_yaml() instead")]]
inline std::string to_yaml(const srvs::srv::GetSensorStatusList_Request & msg)
{
  return srvs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<srvs::srv::GetSensorStatusList_Request>()
{
  return "srvs::srv::GetSensorStatusList_Request";
}

template<>
inline const char * name<srvs::srv::GetSensorStatusList_Request>()
{
  return "srvs/srv/GetSensorStatusList_Request";
}

template<>
struct has_fixed_size<srvs::srv::GetSensorStatusList_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<srvs::srv::GetSensorStatusList_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<srvs::srv::GetSensorStatusList_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'status_list'
#include "srvs/msg/detail/sensor_status__traits.hpp"

namespace srvs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetSensorStatusList_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status_list
  {
    if (msg.status_list.size() == 0) {
      out << "status_list: []";
    } else {
      out << "status_list: [";
      size_t pending_items = msg.status_list.size();
      for (auto item : msg.status_list) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetSensorStatusList_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.status_list.size() == 0) {
      out << "status_list: []\n";
    } else {
      out << "status_list:\n";
      for (auto item : msg.status_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetSensorStatusList_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace srvs

namespace rosidl_generator_traits
{

[[deprecated("use srvs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const srvs::srv::GetSensorStatusList_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  srvs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use srvs::srv::to_yaml() instead")]]
inline std::string to_yaml(const srvs::srv::GetSensorStatusList_Response & msg)
{
  return srvs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<srvs::srv::GetSensorStatusList_Response>()
{
  return "srvs::srv::GetSensorStatusList_Response";
}

template<>
inline const char * name<srvs::srv::GetSensorStatusList_Response>()
{
  return "srvs/srv/GetSensorStatusList_Response";
}

template<>
struct has_fixed_size<srvs::srv::GetSensorStatusList_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<srvs::srv::GetSensorStatusList_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<srvs::srv::GetSensorStatusList_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<srvs::srv::GetSensorStatusList>()
{
  return "srvs::srv::GetSensorStatusList";
}

template<>
inline const char * name<srvs::srv::GetSensorStatusList>()
{
  return "srvs/srv/GetSensorStatusList";
}

template<>
struct has_fixed_size<srvs::srv::GetSensorStatusList>
  : std::integral_constant<
    bool,
    has_fixed_size<srvs::srv::GetSensorStatusList_Request>::value &&
    has_fixed_size<srvs::srv::GetSensorStatusList_Response>::value
  >
{
};

template<>
struct has_bounded_size<srvs::srv::GetSensorStatusList>
  : std::integral_constant<
    bool,
    has_bounded_size<srvs::srv::GetSensorStatusList_Request>::value &&
    has_bounded_size<srvs::srv::GetSensorStatusList_Response>::value
  >
{
};

template<>
struct is_service<srvs::srv::GetSensorStatusList>
  : std::true_type
{
};

template<>
struct is_service_request<srvs::srv::GetSensorStatusList_Request>
  : std::true_type
{
};

template<>
struct is_service_response<srvs::srv::GetSensorStatusList_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SRVS__SRV__DETAIL__GET_SENSOR_STATUS_LIST__TRAITS_HPP_
