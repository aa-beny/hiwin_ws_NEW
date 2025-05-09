// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from flexbe_msgs:msg/BehaviorRequest.idl
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
#include "flexbe_msgs/msg/detail/behavior_request__struct.h"
#include "flexbe_msgs/msg/detail/behavior_request__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "flexbe_msgs/msg/detail/container__functions.h"
// end nested array functions include
bool flexbe_msgs__msg__container__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * flexbe_msgs__msg__container__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool flexbe_msgs__msg__behavior_request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[50];
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
    assert(strncmp("flexbe_msgs.msg._behavior_request.BehaviorRequest", full_classname_dest, 49) == 0);
  }
  flexbe_msgs__msg__BehaviorRequest * ros_message = _ros_message;
  {  // behavior_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "behavior_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->behavior_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // autonomy_level
    PyObject * field = PyObject_GetAttrString(_pymsg, "autonomy_level");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->autonomy_level = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // arg_keys
    PyObject * field = PyObject_GetAttrString(_pymsg, "arg_keys");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'arg_keys'");
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
      if (!rosidl_runtime_c__String__Sequence__init(&(ros_message->arg_keys), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create String__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_runtime_c__String * dest = ros_message->arg_keys.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyUnicode_Check(item));
        PyObject * encoded_item = PyUnicode_AsUTF8String(item);
        if (!encoded_item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        rosidl_runtime_c__String__assign(&dest[i], PyBytes_AS_STRING(encoded_item));
        Py_DECREF(encoded_item);
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // arg_values
    PyObject * field = PyObject_GetAttrString(_pymsg, "arg_values");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'arg_values'");
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
      if (!rosidl_runtime_c__String__Sequence__init(&(ros_message->arg_values), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create String__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_runtime_c__String * dest = ros_message->arg_values.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyUnicode_Check(item));
        PyObject * encoded_item = PyUnicode_AsUTF8String(item);
        if (!encoded_item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        rosidl_runtime_c__String__assign(&dest[i], PyBytes_AS_STRING(encoded_item));
        Py_DECREF(encoded_item);
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // structure
    PyObject * field = PyObject_GetAttrString(_pymsg, "structure");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'structure'");
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
    if (!flexbe_msgs__msg__Container__Sequence__init(&(ros_message->structure), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create flexbe_msgs__msg__Container__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    flexbe_msgs__msg__Container * dest = ros_message->structure.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!flexbe_msgs__msg__container__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * flexbe_msgs__msg__behavior_request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of BehaviorRequest */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("flexbe_msgs.msg._behavior_request");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "BehaviorRequest");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  flexbe_msgs__msg__BehaviorRequest * ros_message = (flexbe_msgs__msg__BehaviorRequest *)raw_ros_message;
  {  // behavior_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->behavior_name.data,
      strlen(ros_message->behavior_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "behavior_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // autonomy_level
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->autonomy_level);
    {
      int rc = PyObject_SetAttrString(_pymessage, "autonomy_level", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // arg_keys
    PyObject * field = NULL;
    size_t size = ros_message->arg_keys.size;
    rosidl_runtime_c__String * src = ros_message->arg_keys.data;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      PyObject * decoded_item = PyUnicode_DecodeUTF8(src[i].data, strlen(src[i].data), "replace");
      if (!decoded_item) {
        return NULL;
      }
      int rc = PyList_SetItem(field, i, decoded_item);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "arg_keys", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // arg_values
    PyObject * field = NULL;
    size_t size = ros_message->arg_values.size;
    rosidl_runtime_c__String * src = ros_message->arg_values.data;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      PyObject * decoded_item = PyUnicode_DecodeUTF8(src[i].data, strlen(src[i].data), "replace");
      if (!decoded_item) {
        return NULL;
      }
      int rc = PyList_SetItem(field, i, decoded_item);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "arg_values", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // structure
    PyObject * field = NULL;
    size_t size = ros_message->structure.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    flexbe_msgs__msg__Container * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->structure.data[i]);
      PyObject * pyitem = flexbe_msgs__msg__container__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "structure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
