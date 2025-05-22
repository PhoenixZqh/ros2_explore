// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_base:action/CountNumber.idl
// generated code does not contain a copyright notice

#ifndef ROS2_BASE__ACTION__DETAIL__COUNT_NUMBER__STRUCT_H_
#define ROS2_BASE__ACTION__DETAIL__COUNT_NUMBER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/CountNumber in the package ros2_base.
typedef struct ros2_base__action__CountNumber_Goal
{
  int32_t order;
} ros2_base__action__CountNumber_Goal;

// Struct for a sequence of ros2_base__action__CountNumber_Goal.
typedef struct ros2_base__action__CountNumber_Goal__Sequence
{
  ros2_base__action__CountNumber_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_base__action__CountNumber_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/CountNumber in the package ros2_base.
typedef struct ros2_base__action__CountNumber_Result
{
  int32_t result;
} ros2_base__action__CountNumber_Result;

// Struct for a sequence of ros2_base__action__CountNumber_Result.
typedef struct ros2_base__action__CountNumber_Result__Sequence
{
  ros2_base__action__CountNumber_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_base__action__CountNumber_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/CountNumber in the package ros2_base.
typedef struct ros2_base__action__CountNumber_Feedback
{
  int32_t progress;
} ros2_base__action__CountNumber_Feedback;

// Struct for a sequence of ros2_base__action__CountNumber_Feedback.
typedef struct ros2_base__action__CountNumber_Feedback__Sequence
{
  ros2_base__action__CountNumber_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_base__action__CountNumber_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "ros2_base/action/detail/count_number__struct.h"

/// Struct defined in action/CountNumber in the package ros2_base.
typedef struct ros2_base__action__CountNumber_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  ros2_base__action__CountNumber_Goal goal;
} ros2_base__action__CountNumber_SendGoal_Request;

// Struct for a sequence of ros2_base__action__CountNumber_SendGoal_Request.
typedef struct ros2_base__action__CountNumber_SendGoal_Request__Sequence
{
  ros2_base__action__CountNumber_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_base__action__CountNumber_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/CountNumber in the package ros2_base.
typedef struct ros2_base__action__CountNumber_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} ros2_base__action__CountNumber_SendGoal_Response;

// Struct for a sequence of ros2_base__action__CountNumber_SendGoal_Response.
typedef struct ros2_base__action__CountNumber_SendGoal_Response__Sequence
{
  ros2_base__action__CountNumber_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_base__action__CountNumber_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/CountNumber in the package ros2_base.
typedef struct ros2_base__action__CountNumber_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} ros2_base__action__CountNumber_GetResult_Request;

// Struct for a sequence of ros2_base__action__CountNumber_GetResult_Request.
typedef struct ros2_base__action__CountNumber_GetResult_Request__Sequence
{
  ros2_base__action__CountNumber_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_base__action__CountNumber_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "ros2_base/action/detail/count_number__struct.h"

/// Struct defined in action/CountNumber in the package ros2_base.
typedef struct ros2_base__action__CountNumber_GetResult_Response
{
  int8_t status;
  ros2_base__action__CountNumber_Result result;
} ros2_base__action__CountNumber_GetResult_Response;

// Struct for a sequence of ros2_base__action__CountNumber_GetResult_Response.
typedef struct ros2_base__action__CountNumber_GetResult_Response__Sequence
{
  ros2_base__action__CountNumber_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_base__action__CountNumber_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "ros2_base/action/detail/count_number__struct.h"

/// Struct defined in action/CountNumber in the package ros2_base.
typedef struct ros2_base__action__CountNumber_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  ros2_base__action__CountNumber_Feedback feedback;
} ros2_base__action__CountNumber_FeedbackMessage;

// Struct for a sequence of ros2_base__action__CountNumber_FeedbackMessage.
typedef struct ros2_base__action__CountNumber_FeedbackMessage__Sequence
{
  ros2_base__action__CountNumber_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_base__action__CountNumber_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_BASE__ACTION__DETAIL__COUNT_NUMBER__STRUCT_H_
