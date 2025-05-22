// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from ros2_base:action/CountNumber.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ros2_base/action/detail/count_number__struct.h"
#include "ros2_base/action/detail/count_number__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace ros2_base
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _CountNumber_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CountNumber_Goal_type_support_ids_t;

static const _CountNumber_Goal_type_support_ids_t _CountNumber_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _CountNumber_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CountNumber_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CountNumber_Goal_type_support_symbol_names_t _CountNumber_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_base, action, CountNumber_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_base, action, CountNumber_Goal)),
  }
};

typedef struct _CountNumber_Goal_type_support_data_t
{
  void * data[2];
} _CountNumber_Goal_type_support_data_t;

static _CountNumber_Goal_type_support_data_t _CountNumber_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CountNumber_Goal_message_typesupport_map = {
  2,
  "ros2_base",
  &_CountNumber_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_CountNumber_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_CountNumber_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CountNumber_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CountNumber_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ros2_base

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ros2_base, action, CountNumber_Goal)() {
  return &::ros2_base::action::rosidl_typesupport_c::CountNumber_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ros2_base/action/detail/count_number__struct.h"
// already included above
// #include "ros2_base/action/detail/count_number__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ros2_base
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _CountNumber_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CountNumber_Result_type_support_ids_t;

static const _CountNumber_Result_type_support_ids_t _CountNumber_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _CountNumber_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CountNumber_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CountNumber_Result_type_support_symbol_names_t _CountNumber_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_base, action, CountNumber_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_base, action, CountNumber_Result)),
  }
};

typedef struct _CountNumber_Result_type_support_data_t
{
  void * data[2];
} _CountNumber_Result_type_support_data_t;

static _CountNumber_Result_type_support_data_t _CountNumber_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CountNumber_Result_message_typesupport_map = {
  2,
  "ros2_base",
  &_CountNumber_Result_message_typesupport_ids.typesupport_identifier[0],
  &_CountNumber_Result_message_typesupport_symbol_names.symbol_name[0],
  &_CountNumber_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CountNumber_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CountNumber_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ros2_base

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ros2_base, action, CountNumber_Result)() {
  return &::ros2_base::action::rosidl_typesupport_c::CountNumber_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ros2_base/action/detail/count_number__struct.h"
// already included above
// #include "ros2_base/action/detail/count_number__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ros2_base
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _CountNumber_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CountNumber_Feedback_type_support_ids_t;

static const _CountNumber_Feedback_type_support_ids_t _CountNumber_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _CountNumber_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CountNumber_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CountNumber_Feedback_type_support_symbol_names_t _CountNumber_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_base, action, CountNumber_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_base, action, CountNumber_Feedback)),
  }
};

typedef struct _CountNumber_Feedback_type_support_data_t
{
  void * data[2];
} _CountNumber_Feedback_type_support_data_t;

static _CountNumber_Feedback_type_support_data_t _CountNumber_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CountNumber_Feedback_message_typesupport_map = {
  2,
  "ros2_base",
  &_CountNumber_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_CountNumber_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_CountNumber_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CountNumber_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CountNumber_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ros2_base

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ros2_base, action, CountNumber_Feedback)() {
  return &::ros2_base::action::rosidl_typesupport_c::CountNumber_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ros2_base/action/detail/count_number__struct.h"
// already included above
// #include "ros2_base/action/detail/count_number__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ros2_base
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _CountNumber_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CountNumber_SendGoal_Request_type_support_ids_t;

static const _CountNumber_SendGoal_Request_type_support_ids_t _CountNumber_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _CountNumber_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CountNumber_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CountNumber_SendGoal_Request_type_support_symbol_names_t _CountNumber_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_base, action, CountNumber_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_base, action, CountNumber_SendGoal_Request)),
  }
};

typedef struct _CountNumber_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _CountNumber_SendGoal_Request_type_support_data_t;

static _CountNumber_SendGoal_Request_type_support_data_t _CountNumber_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CountNumber_SendGoal_Request_message_typesupport_map = {
  2,
  "ros2_base",
  &_CountNumber_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_CountNumber_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_CountNumber_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CountNumber_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CountNumber_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ros2_base

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ros2_base, action, CountNumber_SendGoal_Request)() {
  return &::ros2_base::action::rosidl_typesupport_c::CountNumber_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ros2_base/action/detail/count_number__struct.h"
// already included above
// #include "ros2_base/action/detail/count_number__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ros2_base
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _CountNumber_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CountNumber_SendGoal_Response_type_support_ids_t;

static const _CountNumber_SendGoal_Response_type_support_ids_t _CountNumber_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _CountNumber_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CountNumber_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CountNumber_SendGoal_Response_type_support_symbol_names_t _CountNumber_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_base, action, CountNumber_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_base, action, CountNumber_SendGoal_Response)),
  }
};

typedef struct _CountNumber_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _CountNumber_SendGoal_Response_type_support_data_t;

static _CountNumber_SendGoal_Response_type_support_data_t _CountNumber_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CountNumber_SendGoal_Response_message_typesupport_map = {
  2,
  "ros2_base",
  &_CountNumber_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_CountNumber_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_CountNumber_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CountNumber_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CountNumber_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ros2_base

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ros2_base, action, CountNumber_SendGoal_Response)() {
  return &::ros2_base::action::rosidl_typesupport_c::CountNumber_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ros2_base/action/detail/count_number__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ros2_base
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _CountNumber_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CountNumber_SendGoal_type_support_ids_t;

static const _CountNumber_SendGoal_type_support_ids_t _CountNumber_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _CountNumber_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CountNumber_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CountNumber_SendGoal_type_support_symbol_names_t _CountNumber_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_base, action, CountNumber_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_base, action, CountNumber_SendGoal)),
  }
};

typedef struct _CountNumber_SendGoal_type_support_data_t
{
  void * data[2];
} _CountNumber_SendGoal_type_support_data_t;

static _CountNumber_SendGoal_type_support_data_t _CountNumber_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CountNumber_SendGoal_service_typesupport_map = {
  2,
  "ros2_base",
  &_CountNumber_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_CountNumber_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_CountNumber_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t CountNumber_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CountNumber_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ros2_base

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, ros2_base, action, CountNumber_SendGoal)() {
  return &::ros2_base::action::rosidl_typesupport_c::CountNumber_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ros2_base/action/detail/count_number__struct.h"
// already included above
// #include "ros2_base/action/detail/count_number__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ros2_base
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _CountNumber_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CountNumber_GetResult_Request_type_support_ids_t;

static const _CountNumber_GetResult_Request_type_support_ids_t _CountNumber_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _CountNumber_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CountNumber_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CountNumber_GetResult_Request_type_support_symbol_names_t _CountNumber_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_base, action, CountNumber_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_base, action, CountNumber_GetResult_Request)),
  }
};

typedef struct _CountNumber_GetResult_Request_type_support_data_t
{
  void * data[2];
} _CountNumber_GetResult_Request_type_support_data_t;

static _CountNumber_GetResult_Request_type_support_data_t _CountNumber_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CountNumber_GetResult_Request_message_typesupport_map = {
  2,
  "ros2_base",
  &_CountNumber_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_CountNumber_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_CountNumber_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CountNumber_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CountNumber_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ros2_base

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ros2_base, action, CountNumber_GetResult_Request)() {
  return &::ros2_base::action::rosidl_typesupport_c::CountNumber_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ros2_base/action/detail/count_number__struct.h"
// already included above
// #include "ros2_base/action/detail/count_number__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ros2_base
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _CountNumber_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CountNumber_GetResult_Response_type_support_ids_t;

static const _CountNumber_GetResult_Response_type_support_ids_t _CountNumber_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _CountNumber_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CountNumber_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CountNumber_GetResult_Response_type_support_symbol_names_t _CountNumber_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_base, action, CountNumber_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_base, action, CountNumber_GetResult_Response)),
  }
};

typedef struct _CountNumber_GetResult_Response_type_support_data_t
{
  void * data[2];
} _CountNumber_GetResult_Response_type_support_data_t;

static _CountNumber_GetResult_Response_type_support_data_t _CountNumber_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CountNumber_GetResult_Response_message_typesupport_map = {
  2,
  "ros2_base",
  &_CountNumber_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_CountNumber_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_CountNumber_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CountNumber_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CountNumber_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ros2_base

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ros2_base, action, CountNumber_GetResult_Response)() {
  return &::ros2_base::action::rosidl_typesupport_c::CountNumber_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ros2_base/action/detail/count_number__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ros2_base
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _CountNumber_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CountNumber_GetResult_type_support_ids_t;

static const _CountNumber_GetResult_type_support_ids_t _CountNumber_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _CountNumber_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CountNumber_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CountNumber_GetResult_type_support_symbol_names_t _CountNumber_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_base, action, CountNumber_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_base, action, CountNumber_GetResult)),
  }
};

typedef struct _CountNumber_GetResult_type_support_data_t
{
  void * data[2];
} _CountNumber_GetResult_type_support_data_t;

static _CountNumber_GetResult_type_support_data_t _CountNumber_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CountNumber_GetResult_service_typesupport_map = {
  2,
  "ros2_base",
  &_CountNumber_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_CountNumber_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_CountNumber_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t CountNumber_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CountNumber_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ros2_base

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, ros2_base, action, CountNumber_GetResult)() {
  return &::ros2_base::action::rosidl_typesupport_c::CountNumber_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ros2_base/action/detail/count_number__struct.h"
// already included above
// #include "ros2_base/action/detail/count_number__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ros2_base
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _CountNumber_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CountNumber_FeedbackMessage_type_support_ids_t;

static const _CountNumber_FeedbackMessage_type_support_ids_t _CountNumber_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _CountNumber_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CountNumber_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CountNumber_FeedbackMessage_type_support_symbol_names_t _CountNumber_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_base, action, CountNumber_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_base, action, CountNumber_FeedbackMessage)),
  }
};

typedef struct _CountNumber_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _CountNumber_FeedbackMessage_type_support_data_t;

static _CountNumber_FeedbackMessage_type_support_data_t _CountNumber_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CountNumber_FeedbackMessage_message_typesupport_map = {
  2,
  "ros2_base",
  &_CountNumber_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_CountNumber_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_CountNumber_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CountNumber_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CountNumber_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ros2_base

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ros2_base, action, CountNumber_FeedbackMessage)() {
  return &::ros2_base::action::rosidl_typesupport_c::CountNumber_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "ros2_base/action/count_number.h"
// already included above
// #include "ros2_base/action/detail/count_number__type_support.h"

static rosidl_action_type_support_t _ros2_base__action__CountNumber__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, ros2_base, action, CountNumber)()
{
  // Thread-safe by always writing the same values to the static struct
  _ros2_base__action__CountNumber__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, ros2_base, action, CountNumber_SendGoal)();
  _ros2_base__action__CountNumber__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, ros2_base, action, CountNumber_GetResult)();
  _ros2_base__action__CountNumber__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _ros2_base__action__CountNumber__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, ros2_base, action, CountNumber_FeedbackMessage)();
  _ros2_base__action__CountNumber__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_ros2_base__action__CountNumber__typesupport_c;
}

#ifdef __cplusplus
}
#endif
