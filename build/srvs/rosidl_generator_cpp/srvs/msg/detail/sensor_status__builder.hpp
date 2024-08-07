// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from srvs:msg/SensorStatus.idl
// generated code does not contain a copyright notice

#ifndef SRVS__MSG__DETAIL__SENSOR_STATUS__BUILDER_HPP_
#define SRVS__MSG__DETAIL__SENSOR_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "srvs/msg/detail/sensor_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace srvs
{

namespace msg
{

namespace builder
{

class Init_SensorStatus_sensortype
{
public:
  explicit Init_SensorStatus_sensortype(::srvs::msg::SensorStatus & msg)
  : msg_(msg)
  {}
  ::srvs::msg::SensorStatus sensortype(::srvs::msg::SensorStatus::_sensortype_type arg)
  {
    msg_.sensortype = std::move(arg);
    return std::move(msg_);
  }

private:
  ::srvs::msg::SensorStatus msg_;
};

class Init_SensorStatus_streaming
{
public:
  explicit Init_SensorStatus_streaming(::srvs::msg::SensorStatus & msg)
  : msg_(msg)
  {}
  Init_SensorStatus_sensortype streaming(::srvs::msg::SensorStatus::_streaming_type arg)
  {
    msg_.streaming = std::move(arg);
    return Init_SensorStatus_sensortype(msg_);
  }

private:
  ::srvs::msg::SensorStatus msg_;
};

class Init_SensorStatus_recording
{
public:
  explicit Init_SensorStatus_recording(::srvs::msg::SensorStatus & msg)
  : msg_(msg)
  {}
  Init_SensorStatus_streaming recording(::srvs::msg::SensorStatus::_recording_type arg)
  {
    msg_.recording = std::move(arg);
    return Init_SensorStatus_streaming(msg_);
  }

private:
  ::srvs::msg::SensorStatus msg_;
};

class Init_SensorStatus_alive
{
public:
  explicit Init_SensorStatus_alive(::srvs::msg::SensorStatus & msg)
  : msg_(msg)
  {}
  Init_SensorStatus_recording alive(::srvs::msg::SensorStatus::_alive_type arg)
  {
    msg_.alive = std::move(arg);
    return Init_SensorStatus_recording(msg_);
  }

private:
  ::srvs::msg::SensorStatus msg_;
};

class Init_SensorStatus_sensorname
{
public:
  explicit Init_SensorStatus_sensorname(::srvs::msg::SensorStatus & msg)
  : msg_(msg)
  {}
  Init_SensorStatus_alive sensorname(::srvs::msg::SensorStatus::_sensorname_type arg)
  {
    msg_.sensorname = std::move(arg);
    return Init_SensorStatus_alive(msg_);
  }

private:
  ::srvs::msg::SensorStatus msg_;
};

class Init_SensorStatus_unitid
{
public:
  explicit Init_SensorStatus_unitid(::srvs::msg::SensorStatus & msg)
  : msg_(msg)
  {}
  Init_SensorStatus_sensorname unitid(::srvs::msg::SensorStatus::_unitid_type arg)
  {
    msg_.unitid = std::move(arg);
    return Init_SensorStatus_sensorname(msg_);
  }

private:
  ::srvs::msg::SensorStatus msg_;
};

class Init_SensorStatus_sensorid
{
public:
  Init_SensorStatus_sensorid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorStatus_unitid sensorid(::srvs::msg::SensorStatus::_sensorid_type arg)
  {
    msg_.sensorid = std::move(arg);
    return Init_SensorStatus_unitid(msg_);
  }

private:
  ::srvs::msg::SensorStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::srvs::msg::SensorStatus>()
{
  return srvs::msg::builder::Init_SensorStatus_sensorid();
}

}  // namespace srvs

#endif  // SRVS__MSG__DETAIL__SENSOR_STATUS__BUILDER_HPP_
