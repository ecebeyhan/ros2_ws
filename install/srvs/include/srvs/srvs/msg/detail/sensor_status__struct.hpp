// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from srvs:msg/SensorStatus.idl
// generated code does not contain a copyright notice

#ifndef SRVS__MSG__DETAIL__SENSOR_STATUS__STRUCT_HPP_
#define SRVS__MSG__DETAIL__SENSOR_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'sensortype'
#include "srvs/msg/detail/sensor_type__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__srvs__msg__SensorStatus __attribute__((deprecated))
#else
# define DEPRECATED__srvs__msg__SensorStatus __declspec(deprecated)
#endif

namespace srvs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SensorStatus_
{
  using Type = SensorStatus_<ContainerAllocator>;

  explicit SensorStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : sensortype(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sensorid = 0ul;
      this->unitid = 0ul;
      this->sensorname = "";
      this->alive = false;
      this->recording = false;
      this->streaming = false;
    }
  }

  explicit SensorStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : sensorname(_alloc),
    sensortype(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sensorid = 0ul;
      this->unitid = 0ul;
      this->sensorname = "";
      this->alive = false;
      this->recording = false;
      this->streaming = false;
    }
  }

  // field types and members
  using _sensorid_type =
    uint32_t;
  _sensorid_type sensorid;
  using _unitid_type =
    uint32_t;
  _unitid_type unitid;
  using _sensorname_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _sensorname_type sensorname;
  using _alive_type =
    bool;
  _alive_type alive;
  using _recording_type =
    bool;
  _recording_type recording;
  using _streaming_type =
    bool;
  _streaming_type streaming;
  using _sensortype_type =
    srvs::msg::SensorType_<ContainerAllocator>;
  _sensortype_type sensortype;

  // setters for named parameter idiom
  Type & set__sensorid(
    const uint32_t & _arg)
  {
    this->sensorid = _arg;
    return *this;
  }
  Type & set__unitid(
    const uint32_t & _arg)
  {
    this->unitid = _arg;
    return *this;
  }
  Type & set__sensorname(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->sensorname = _arg;
    return *this;
  }
  Type & set__alive(
    const bool & _arg)
  {
    this->alive = _arg;
    return *this;
  }
  Type & set__recording(
    const bool & _arg)
  {
    this->recording = _arg;
    return *this;
  }
  Type & set__streaming(
    const bool & _arg)
  {
    this->streaming = _arg;
    return *this;
  }
  Type & set__sensortype(
    const srvs::msg::SensorType_<ContainerAllocator> & _arg)
  {
    this->sensortype = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    srvs::msg::SensorStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const srvs::msg::SensorStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<srvs::msg::SensorStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<srvs::msg::SensorStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      srvs::msg::SensorStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<srvs::msg::SensorStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      srvs::msg::SensorStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<srvs::msg::SensorStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<srvs::msg::SensorStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<srvs::msg::SensorStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__srvs__msg__SensorStatus
    std::shared_ptr<srvs::msg::SensorStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__srvs__msg__SensorStatus
    std::shared_ptr<srvs::msg::SensorStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SensorStatus_ & other) const
  {
    if (this->sensorid != other.sensorid) {
      return false;
    }
    if (this->unitid != other.unitid) {
      return false;
    }
    if (this->sensorname != other.sensorname) {
      return false;
    }
    if (this->alive != other.alive) {
      return false;
    }
    if (this->recording != other.recording) {
      return false;
    }
    if (this->streaming != other.streaming) {
      return false;
    }
    if (this->sensortype != other.sensortype) {
      return false;
    }
    return true;
  }
  bool operator!=(const SensorStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SensorStatus_

// alias to use template instance with default allocator
using SensorStatus =
  srvs::msg::SensorStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace srvs

#endif  // SRVS__MSG__DETAIL__SENSOR_STATUS__STRUCT_HPP_
