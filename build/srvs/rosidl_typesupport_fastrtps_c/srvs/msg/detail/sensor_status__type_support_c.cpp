// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from srvs:msg/SensorStatus.idl
// generated code does not contain a copyright notice
#include "srvs/msg/detail/sensor_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "srvs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "srvs/msg/detail/sensor_status__struct.h"
#include "srvs/msg/detail/sensor_status__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // sensorname
#include "rosidl_runtime_c/string_functions.h"  // sensorname
#include "srvs/msg/detail/sensor_type__functions.h"  // sensortype

// forward declare type support functions
size_t get_serialized_size_srvs__msg__SensorType(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_srvs__msg__SensorType(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, srvs, msg, SensorType)();


using _SensorStatus__ros_msg_type = srvs__msg__SensorStatus;

static bool _SensorStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SensorStatus__ros_msg_type * ros_message = static_cast<const _SensorStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: sensorid
  {
    cdr << ros_message->sensorid;
  }

  // Field name: unitid
  {
    cdr << ros_message->unitid;
  }

  // Field name: sensorname
  {
    const rosidl_runtime_c__String * str = &ros_message->sensorname;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: alive
  {
    cdr << (ros_message->alive ? true : false);
  }

  // Field name: recording
  {
    cdr << (ros_message->recording ? true : false);
  }

  // Field name: streaming
  {
    cdr << (ros_message->streaming ? true : false);
  }

  // Field name: sensortype
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, srvs, msg, SensorType
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->sensortype, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _SensorStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SensorStatus__ros_msg_type * ros_message = static_cast<_SensorStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: sensorid
  {
    cdr >> ros_message->sensorid;
  }

  // Field name: unitid
  {
    cdr >> ros_message->unitid;
  }

  // Field name: sensorname
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->sensorname.data) {
      rosidl_runtime_c__String__init(&ros_message->sensorname);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->sensorname,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'sensorname'\n");
      return false;
    }
  }

  // Field name: alive
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->alive = tmp ? true : false;
  }

  // Field name: recording
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->recording = tmp ? true : false;
  }

  // Field name: streaming
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->streaming = tmp ? true : false;
  }

  // Field name: sensortype
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, srvs, msg, SensorType
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->sensortype))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_srvs
size_t get_serialized_size_srvs__msg__SensorStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SensorStatus__ros_msg_type * ros_message = static_cast<const _SensorStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name sensorid
  {
    size_t item_size = sizeof(ros_message->sensorid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name unitid
  {
    size_t item_size = sizeof(ros_message->unitid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sensorname
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->sensorname.size + 1);
  // field.name alive
  {
    size_t item_size = sizeof(ros_message->alive);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name recording
  {
    size_t item_size = sizeof(ros_message->recording);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name streaming
  {
    size_t item_size = sizeof(ros_message->streaming);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sensortype

  current_alignment += get_serialized_size_srvs__msg__SensorType(
    &(ros_message->sensortype), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _SensorStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_srvs__msg__SensorStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_srvs
size_t max_serialized_size_srvs__msg__SensorStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: sensorid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: unitid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: sensorname
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: alive
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: recording
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: streaming
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sensortype
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_srvs__msg__SensorType(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = srvs__msg__SensorStatus;
    is_plain =
      (
      offsetof(DataType, sensortype) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SensorStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_srvs__msg__SensorStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SensorStatus = {
  "srvs::msg",
  "SensorStatus",
  _SensorStatus__cdr_serialize,
  _SensorStatus__cdr_deserialize,
  _SensorStatus__get_serialized_size,
  _SensorStatus__max_serialized_size
};

static rosidl_message_type_support_t _SensorStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SensorStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, srvs, msg, SensorStatus)() {
  return &_SensorStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
