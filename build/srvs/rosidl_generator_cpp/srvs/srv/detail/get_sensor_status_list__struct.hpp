// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from srvs:srv/GetSensorStatusList.idl
// generated code does not contain a copyright notice

#ifndef SRVS__SRV__DETAIL__GET_SENSOR_STATUS_LIST__STRUCT_HPP_
#define SRVS__SRV__DETAIL__GET_SENSOR_STATUS_LIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__srvs__srv__GetSensorStatusList_Request __attribute__((deprecated))
#else
# define DEPRECATED__srvs__srv__GetSensorStatusList_Request __declspec(deprecated)
#endif

namespace srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetSensorStatusList_Request_
{
  using Type = GetSensorStatusList_Request_<ContainerAllocator>;

  explicit GetSensorStatusList_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetSensorStatusList_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    srvs::srv::GetSensorStatusList_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const srvs::srv::GetSensorStatusList_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<srvs::srv::GetSensorStatusList_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<srvs::srv::GetSensorStatusList_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      srvs::srv::GetSensorStatusList_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<srvs::srv::GetSensorStatusList_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      srvs::srv::GetSensorStatusList_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<srvs::srv::GetSensorStatusList_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<srvs::srv::GetSensorStatusList_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<srvs::srv::GetSensorStatusList_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__srvs__srv__GetSensorStatusList_Request
    std::shared_ptr<srvs::srv::GetSensorStatusList_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__srvs__srv__GetSensorStatusList_Request
    std::shared_ptr<srvs::srv::GetSensorStatusList_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetSensorStatusList_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetSensorStatusList_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetSensorStatusList_Request_

// alias to use template instance with default allocator
using GetSensorStatusList_Request =
  srvs::srv::GetSensorStatusList_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace srvs


// Include directives for member types
// Member 'status_list'
#include "srvs/msg/detail/sensor_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__srvs__srv__GetSensorStatusList_Response __attribute__((deprecated))
#else
# define DEPRECATED__srvs__srv__GetSensorStatusList_Response __declspec(deprecated)
#endif

namespace srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetSensorStatusList_Response_
{
  using Type = GetSensorStatusList_Response_<ContainerAllocator>;

  explicit GetSensorStatusList_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit GetSensorStatusList_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _status_list_type =
    std::vector<srvs::msg::SensorStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<srvs::msg::SensorStatus_<ContainerAllocator>>>;
  _status_list_type status_list;

  // setters for named parameter idiom
  Type & set__status_list(
    const std::vector<srvs::msg::SensorStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<srvs::msg::SensorStatus_<ContainerAllocator>>> & _arg)
  {
    this->status_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    srvs::srv::GetSensorStatusList_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const srvs::srv::GetSensorStatusList_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<srvs::srv::GetSensorStatusList_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<srvs::srv::GetSensorStatusList_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      srvs::srv::GetSensorStatusList_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<srvs::srv::GetSensorStatusList_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      srvs::srv::GetSensorStatusList_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<srvs::srv::GetSensorStatusList_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<srvs::srv::GetSensorStatusList_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<srvs::srv::GetSensorStatusList_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__srvs__srv__GetSensorStatusList_Response
    std::shared_ptr<srvs::srv::GetSensorStatusList_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__srvs__srv__GetSensorStatusList_Response
    std::shared_ptr<srvs::srv::GetSensorStatusList_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetSensorStatusList_Response_ & other) const
  {
    if (this->status_list != other.status_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetSensorStatusList_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetSensorStatusList_Response_

// alias to use template instance with default allocator
using GetSensorStatusList_Response =
  srvs::srv::GetSensorStatusList_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace srvs

namespace srvs
{

namespace srv
{

struct GetSensorStatusList
{
  using Request = srvs::srv::GetSensorStatusList_Request;
  using Response = srvs::srv::GetSensorStatusList_Response;
};

}  // namespace srv

}  // namespace srvs

#endif  // SRVS__SRV__DETAIL__GET_SENSOR_STATUS_LIST__STRUCT_HPP_
