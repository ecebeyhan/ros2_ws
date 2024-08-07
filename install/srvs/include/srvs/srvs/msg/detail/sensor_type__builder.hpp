// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from srvs:msg/SensorType.idl
// generated code does not contain a copyright notice

#ifndef SRVS__MSG__DETAIL__SENSOR_TYPE__BUILDER_HPP_
#define SRVS__MSG__DETAIL__SENSOR_TYPE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "srvs/msg/detail/sensor_type__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace srvs
{

namespace msg
{

namespace builder
{

class Init_SensorType_sensor_type
{
public:
  Init_SensorType_sensor_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::srvs::msg::SensorType sensor_type(::srvs::msg::SensorType::_sensor_type_type arg)
  {
    msg_.sensor_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::srvs::msg::SensorType msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::srvs::msg::SensorType>()
{
  return srvs::msg::builder::Init_SensorType_sensor_type();
}

}  // namespace srvs

#endif  // SRVS__MSG__DETAIL__SENSOR_TYPE__BUILDER_HPP_
