// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from lebai_interfaces:msg/IOConditionalExpress.idl
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
#include "lebai_interfaces/msg/detail/io_conditional_express__struct.h"
#include "lebai_interfaces/msg/detail/io_conditional_express__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool lebai_interfaces__msg__io_conditional_express__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[66];
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
    assert(strncmp("lebai_interfaces.msg._io_conditional_express.IOConditionalExpress", full_classname_dest, 65) == 0);
  }
  lebai_interfaces__msg__IOConditionalExpress * ros_message = _ros_message;
  {  // group
    PyObject * field = PyObject_GetAttrString(_pymsg, "group");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->group = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pin
    PyObject * field = PyObject_GetAttrString(_pymsg, "pin");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pin = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // type
    PyObject * field = PyObject_GetAttrString(_pymsg, "type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->type = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // float_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "float_value");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->float_value = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // uint_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "uint_value");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->uint_value = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // logic_operation
    PyObject * field = PyObject_GetAttrString(_pymsg, "logic_operation");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->logic_operation = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * lebai_interfaces__msg__io_conditional_express__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of IOConditionalExpress */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("lebai_interfaces.msg._io_conditional_express");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "IOConditionalExpress");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  lebai_interfaces__msg__IOConditionalExpress * ros_message = (lebai_interfaces__msg__IOConditionalExpress *)raw_ros_message;
  {  // group
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->group);
    {
      int rc = PyObject_SetAttrString(_pymessage, "group", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pin
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->pin);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pin", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // float_value
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->float_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "float_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // uint_value
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->uint_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "uint_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // logic_operation
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->logic_operation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "logic_operation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
