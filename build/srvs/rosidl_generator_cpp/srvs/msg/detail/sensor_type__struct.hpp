// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from srvs:msg/SensorType.idl
// generated code does not contain a copyright notice

#ifndef SRVS__MSG__DETAIL__SENSOR_TYPE__STRUCT_HPP_
#define SRVS__MSG__DETAIL__SENSOR_TYPE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__srvs__msg__SensorType __attribute__((deprecated))
#else
# define DEPRECATED__srvs__msg__SensorType __declspec(deprecated)
#endif

namespace srvs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SensorType_
{
  using Type = SensorType_<ContainerAllocator>;

  explicit SensorType_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sensor_type = 0;
    }
  }

  explicit SensorType_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sensor_type = 0;
    }
  }

  // field types and members
  using _sensor_type_type =
    uint8_t;
  _sensor_type_type sensor_type;

  // setters for named parameter idiom
  Type & set__sensor_type(
    const uint8_t & _arg)
  {
    this->sensor_type = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t UNDEFINED =
    0u;
  static constexpr uint8_t CAMERA =
    1u;
  static constexpr uint8_t MIC =
    2u;

  // pointer types
  using RawPtr =
    srvs::msg::SensorType_<ContainerAllocator> *;
  using ConstRawPtr =
    const srvs::msg::SensorType_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<srvs::msg::SensorType_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<srvs::msg::SensorType_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      srvs::msg::SensorType_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<srvs::msg::SensorType_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      srvs::msg::SensorType_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<srvs::msg::SensorType_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<srvs::msg::SensorType_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<srvs::msg::SensorType_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__srvs__msg__SensorType
    std::shared_ptr<srvs::msg::SensorType_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__srvs__msg__SensorType
    std::shared_ptr<srvs::msg::SensorType_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SensorType_ & other) const
  {
    if (this->sensor_type != other.sensor_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const SensorType_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SensorType_

// alias to use template instance with default allocator
using SensorType =
  srvs::msg::SensorType_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SensorType_<ContainerAllocator>::UNDEFINED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SensorType_<ContainerAllocator>::CAMERA;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SensorType_<ContainerAllocator>::MIC;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace srvs

#endif  // SRVS__MSG__DETAIL__SENSOR_TYPE__STRUCT_HPP_
