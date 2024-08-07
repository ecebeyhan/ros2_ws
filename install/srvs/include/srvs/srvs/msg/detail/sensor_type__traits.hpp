// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from srvs:msg/SensorType.idl
// generated code does not contain a copyright notice

#ifndef SRVS__MSG__DETAIL__SENSOR_TYPE__TRAITS_HPP_
#define SRVS__MSG__DETAIL__SENSOR_TYPE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "srvs/msg/detail/sensor_type__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace srvs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SensorType & msg,
  std::ostream & out)
{
  out << "{";
  // member: sensor_type
  {
    out << "sensor_type: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SensorType & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sensor_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_type: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SensorType & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace srvs

namespace rosidl_generator_traits
{

[[deprecated("use srvs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const srvs::msg::SensorType & msg,
  std::ostream & out, size_t indentation = 0)
{
  srvs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use srvs::msg::to_yaml() instead")]]
inline std::string to_yaml(const srvs::msg::SensorType & msg)
{
  return srvs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<srvs::msg::SensorType>()
{
  return "srvs::msg::SensorType";
}

template<>
inline const char * name<srvs::msg::SensorType>()
{
  return "srvs/msg/SensorType";
}

template<>
struct has_fixed_size<srvs::msg::SensorType>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<srvs::msg::SensorType>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<srvs::msg::SensorType>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SRVS__MSG__DETAIL__SENSOR_TYPE__TRAITS_HPP_
