// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from srvs:srv/GetSensorStatusList.idl
// generated code does not contain a copyright notice

#ifndef SRVS__SRV__DETAIL__GET_SENSOR_STATUS_LIST__BUILDER_HPP_
#define SRVS__SRV__DETAIL__GET_SENSOR_STATUS_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "srvs/srv/detail/get_sensor_status_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace srvs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::srvs::srv::GetSensorStatusList_Request>()
{
  return ::srvs::srv::GetSensorStatusList_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace srvs


namespace srvs
{

namespace srv
{

namespace builder
{

class Init_GetSensorStatusList_Response_status_list
{
public:
  Init_GetSensorStatusList_Response_status_list()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::srvs::srv::GetSensorStatusList_Response status_list(::srvs::srv::GetSensorStatusList_Response::_status_list_type arg)
  {
    msg_.status_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::srvs::srv::GetSensorStatusList_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::srvs::srv::GetSensorStatusList_Response>()
{
  return srvs::srv::builder::Init_GetSensorStatusList_Response_status_list();
}

}  // namespace srvs

#endif  // SRVS__SRV__DETAIL__GET_SENSOR_STATUS_LIST__BUILDER_HPP_
