// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from lebai_interfaces:msg/UntilInfo.idl
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
#include "lebai_interfaces/msg/detail/until_info__struct.h"
#include "lebai_interfaces/msg/detail/until_info__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "lebai_interfaces/msg/detail/io_conditional_express__functions.h"
// end nested array functions include
bool lebai_interfaces__msg__io_conditional_express__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * lebai_interfaces__msg__io_conditional_express__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool lebai_interfaces__msg__until_info__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[43];
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
    assert(strncmp("lebai_interfaces.msg._until_info.UntilInfo", full_classname_dest, 42) == 0);
  }
  lebai_interfaces__msg__UntilInfo * ros_message = _ros_message;
  {  // io_express_logic
    PyObject * field = PyObject_GetAttrString(_pymsg, "io_express_logic");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->io_express_logic = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // io_express
    PyObject * field = PyObject_GetAttrString(_pymsg, "io_express");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'io_express'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!lebai_interfaces__msg__IOConditionalExpress__Sequence__init(&(ros_message->io_express), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create lebai_interfaces__msg__IOConditionalExpress__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    lebai_interfaces__msg__IOConditionalExpress * dest = ros_message->io_express.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!lebai_interfaces__msg__io_conditional_express__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * lebai_interfaces__msg__until_info__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of UntilInfo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("lebai_interfaces.msg._until_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "UntilInfo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  lebai_interfaces__msg__UntilInfo * ros_message = (lebai_interfaces__msg__UntilInfo *)raw_ros_message;
  {  // io_express_logic
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->io_express_logic);
    {
      int rc = PyObject_SetAttrString(_pymessage, "io_express_logic", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // io_express
    PyObject * field = NULL;
    size_t size = ros_message->io_express.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    lebai_interfaces__msg__IOConditionalExpress * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->io_express.data[i]);
      PyObject * pyitem = lebai_interfaces__msg__io_conditional_express__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "io_express", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
