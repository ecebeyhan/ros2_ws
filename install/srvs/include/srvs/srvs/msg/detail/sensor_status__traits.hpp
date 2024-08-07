// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from srvs:msg/SensorStatus.idl
// generated code does not contain a copyright notice

#ifndef SRVS__MSG__DETAIL__SENSOR_STATUS__TRAITS_HPP_
#define SRVS__MSG__DETAIL__SENSOR_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "srvs/msg/detail/sensor_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'sensortype'
#include "srvs/msg/detail/sensor_type__traits.hpp"

namespace srvs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SensorStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: sensorid
  {
    out << "sensorid: ";
    rosidl_generator_traits::value_to_yaml(msg.sensorid, out);
    out << ", ";
  }

  // member: unitid
  {
    out << "unitid: ";
    rosidl_generator_traits::value_to_yaml(msg.unitid, out);
    out << ", ";
  }

  // member: sensorname
  {
    out << "sensorname: ";
    rosidl_generator_traits::value_to_yaml(msg.sensorname, out);
    out << ", ";
  }

  // member: alive
  {
    out << "alive: ";
    rosidl_generator_traits::value_to_yaml(msg.alive, out);
    out << ", ";
  }

  // member: recording
  {
    out << "recording: ";
    rosidl_generator_traits::value_to_yaml(msg.recording, out);
    out << ", ";
  }

  // member: streaming
  {
    out << "streaming: ";
    rosidl_generator_traits::value_to_yaml(msg.streaming, out);
    out << ", ";
  }

  // member: sensortype
  {
    out << "sensortype: ";
    to_flow_style_yaml(msg.sensortype, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SensorStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sensorid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensorid: ";
    rosidl_generator_traits::value_to_yaml(msg.sensorid, out);
    out << "\n";
  }

  // member: unitid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "unitid: ";
    rosidl_generator_traits::value_to_yaml(msg.unitid, out);
    out << "\n";
  }

  // member: sensorname
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensorname: ";
    rosidl_generator_traits::value_to_yaml(msg.sensorname, out);
    out << "\n";
  }

  // member: alive
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alive: ";
    rosidl_generator_traits::value_to_yaml(msg.alive, out);
    out << "\n";
  }

  // member: recording
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "recording: ";
    rosidl_generator_traits::value_to_yaml(msg.recording, out);
    out << "\n";
  }

  // member: streaming
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "streaming: ";
    rosidl_generator_traits::value_to_yaml(msg.streaming, out);
    out << "\n";
  }

  // member: sensortype
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensortype:\n";
    to_block_style_yaml(msg.sensortype, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SensorStatus & msg, bool use_flow_style = false)
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
  const srvs::msg::SensorStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  srvs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use srvs::msg::to_yaml() instead")]]
inline std::string to_yaml(const srvs::msg::SensorStatus & msg)
{
  return srvs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<srvs::msg::SensorStatus>()
{
  return "srvs::msg::SensorStatus";
}

template<>
inline const char * name<srvs::msg::SensorStatus>()
{
  return "srvs/msg/SensorStatus";
}

template<>
struct has_fixed_size<srvs::msg::SensorStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<srvs::msg::SensorStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<srvs::msg::SensorStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SRVS__MSG__DETAIL__SENSOR_STATUS__TRAITS_HPP_
