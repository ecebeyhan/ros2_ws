// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from srvs:msg/SensorStatus.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "srvs/msg/detail/sensor_status__struct.h"
#include "srvs/msg/detail/sensor_status__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

bool srvs__msg__sensor_type__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * srvs__msg__sensor_type__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool srvs__msg__sensor_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[37];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("srvs.msg._sensor_status.SensorStatus", full_classname_dest, 36) == 0);
  }
  srvs__msg__SensorStatus * ros_message = _ros_message;
  {  // sensorid
    PyObject * field = PyObject_GetAttrString(_pymsg, "sensorid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sensorid = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // unitid
    PyObject * field = PyObject_GetAttrString(_pymsg, "unitid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->unitid = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sensorname
    PyObject * field = PyObject_GetAttrString(_pymsg, "sensorname");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->sensorname, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // alive
    PyObject * field = PyObject_GetAttrString(_pymsg, "alive");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->alive = (Py_True == field);
    Py_DECREF(field);
  }
  {  // recording
    PyObject * field = PyObject_GetAttrString(_pymsg, "recording");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->recording = (Py_True == field);
    Py_DECREF(field);
  }
  {  // streaming
    PyObject * field = PyObject_GetAttrString(_pymsg, "streaming");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->streaming = (Py_True == field);
    Py_DECREF(field);
  }
  {  // sensortype
    PyObject * field = PyObject_GetAttrString(_pymsg, "sensortype");
    if (!field) {
      return false;
    }
    if (!srvs__msg__sensor_type__convert_from_py(field, &ros_message->sensortype)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * srvs__msg__sensor_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SensorStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("srvs.msg._sensor_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SensorStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  srvs__msg__SensorStatus * ros_message = (srvs__msg__SensorStatus *)raw_ros_message;
  {  // sensorid
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sensorid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sensorid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // unitid
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->unitid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "unitid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sensorname
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->sensorname.data,
      strlen(ros_message->sensorname.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "sensorname", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // alive
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->alive ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "alive", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // recording
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->recording ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "recording", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // streaming
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->streaming ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "streaming", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sensortype
    PyObject * field = NULL;
    field = srvs__msg__sensor_type__convert_to_py(&ros_message->sensortype);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "sensortype", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
