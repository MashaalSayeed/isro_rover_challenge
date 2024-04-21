// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:srv/AddObjectSrv.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__ADD_OBJECT_SRV__STRUCT_H_
#define INTERFACES__SRV__DETAIL__ADD_OBJECT_SRV__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

// Struct defined in srv/AddObjectSrv in the package interfaces.
typedef struct interfaces__srv__AddObjectSrv_Request
{
  geometry_msgs__msg__Pose pose;
  int8_t tag;
} interfaces__srv__AddObjectSrv_Request;

// Struct for a sequence of interfaces__srv__AddObjectSrv_Request.
typedef struct interfaces__srv__AddObjectSrv_Request__Sequence
{
  interfaces__srv__AddObjectSrv_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__AddObjectSrv_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/AddObjectSrv in the package interfaces.
typedef struct interfaces__srv__AddObjectSrv_Response
{
  int8_t success;
} interfaces__srv__AddObjectSrv_Response;

// Struct for a sequence of interfaces__srv__AddObjectSrv_Response.
typedef struct interfaces__srv__AddObjectSrv_Response__Sequence
{
  interfaces__srv__AddObjectSrv_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__AddObjectSrv_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__SRV__DETAIL__ADD_OBJECT_SRV__STRUCT_H_
