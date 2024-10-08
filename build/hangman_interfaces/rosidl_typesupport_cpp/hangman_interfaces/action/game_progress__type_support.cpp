// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from hangman_interfaces:action/GameProgress.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "hangman_interfaces/action/detail/game_progress__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace hangman_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GameProgress_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GameProgress_Goal_type_support_ids_t;

static const _GameProgress_Goal_type_support_ids_t _GameProgress_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GameProgress_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GameProgress_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GameProgress_Goal_type_support_symbol_names_t _GameProgress_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hangman_interfaces, action, GameProgress_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hangman_interfaces, action, GameProgress_Goal)),
  }
};

typedef struct _GameProgress_Goal_type_support_data_t
{
  void * data[2];
} _GameProgress_Goal_type_support_data_t;

static _GameProgress_Goal_type_support_data_t _GameProgress_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GameProgress_Goal_message_typesupport_map = {
  2,
  "hangman_interfaces",
  &_GameProgress_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_GameProgress_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_GameProgress_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GameProgress_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GameProgress_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace hangman_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hangman_interfaces::action::GameProgress_Goal>()
{
  return &::hangman_interfaces::action::rosidl_typesupport_cpp::GameProgress_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, hangman_interfaces, action, GameProgress_Goal)() {
  return get_message_type_support_handle<hangman_interfaces::action::GameProgress_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "hangman_interfaces/action/detail/game_progress__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace hangman_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GameProgress_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GameProgress_Result_type_support_ids_t;

static const _GameProgress_Result_type_support_ids_t _GameProgress_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GameProgress_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GameProgress_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GameProgress_Result_type_support_symbol_names_t _GameProgress_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hangman_interfaces, action, GameProgress_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hangman_interfaces, action, GameProgress_Result)),
  }
};

typedef struct _GameProgress_Result_type_support_data_t
{
  void * data[2];
} _GameProgress_Result_type_support_data_t;

static _GameProgress_Result_type_support_data_t _GameProgress_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GameProgress_Result_message_typesupport_map = {
  2,
  "hangman_interfaces",
  &_GameProgress_Result_message_typesupport_ids.typesupport_identifier[0],
  &_GameProgress_Result_message_typesupport_symbol_names.symbol_name[0],
  &_GameProgress_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GameProgress_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GameProgress_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace hangman_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hangman_interfaces::action::GameProgress_Result>()
{
  return &::hangman_interfaces::action::rosidl_typesupport_cpp::GameProgress_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, hangman_interfaces, action, GameProgress_Result)() {
  return get_message_type_support_handle<hangman_interfaces::action::GameProgress_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "hangman_interfaces/action/detail/game_progress__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace hangman_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GameProgress_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GameProgress_Feedback_type_support_ids_t;

static const _GameProgress_Feedback_type_support_ids_t _GameProgress_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GameProgress_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GameProgress_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GameProgress_Feedback_type_support_symbol_names_t _GameProgress_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hangman_interfaces, action, GameProgress_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hangman_interfaces, action, GameProgress_Feedback)),
  }
};

typedef struct _GameProgress_Feedback_type_support_data_t
{
  void * data[2];
} _GameProgress_Feedback_type_support_data_t;

static _GameProgress_Feedback_type_support_data_t _GameProgress_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GameProgress_Feedback_message_typesupport_map = {
  2,
  "hangman_interfaces",
  &_GameProgress_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_GameProgress_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_GameProgress_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GameProgress_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GameProgress_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace hangman_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hangman_interfaces::action::GameProgress_Feedback>()
{
  return &::hangman_interfaces::action::rosidl_typesupport_cpp::GameProgress_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, hangman_interfaces, action, GameProgress_Feedback)() {
  return get_message_type_support_handle<hangman_interfaces::action::GameProgress_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "hangman_interfaces/action/detail/game_progress__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace hangman_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GameProgress_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GameProgress_SendGoal_Request_type_support_ids_t;

static const _GameProgress_SendGoal_Request_type_support_ids_t _GameProgress_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GameProgress_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GameProgress_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GameProgress_SendGoal_Request_type_support_symbol_names_t _GameProgress_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hangman_interfaces, action, GameProgress_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hangman_interfaces, action, GameProgress_SendGoal_Request)),
  }
};

typedef struct _GameProgress_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _GameProgress_SendGoal_Request_type_support_data_t;

static _GameProgress_SendGoal_Request_type_support_data_t _GameProgress_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GameProgress_SendGoal_Request_message_typesupport_map = {
  2,
  "hangman_interfaces",
  &_GameProgress_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GameProgress_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GameProgress_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GameProgress_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GameProgress_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace hangman_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hangman_interfaces::action::GameProgress_SendGoal_Request>()
{
  return &::hangman_interfaces::action::rosidl_typesupport_cpp::GameProgress_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, hangman_interfaces, action, GameProgress_SendGoal_Request)() {
  return get_message_type_support_handle<hangman_interfaces::action::GameProgress_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "hangman_interfaces/action/detail/game_progress__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace hangman_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GameProgress_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GameProgress_SendGoal_Response_type_support_ids_t;

static const _GameProgress_SendGoal_Response_type_support_ids_t _GameProgress_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GameProgress_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GameProgress_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GameProgress_SendGoal_Response_type_support_symbol_names_t _GameProgress_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hangman_interfaces, action, GameProgress_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hangman_interfaces, action, GameProgress_SendGoal_Response)),
  }
};

typedef struct _GameProgress_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _GameProgress_SendGoal_Response_type_support_data_t;

static _GameProgress_SendGoal_Response_type_support_data_t _GameProgress_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GameProgress_SendGoal_Response_message_typesupport_map = {
  2,
  "hangman_interfaces",
  &_GameProgress_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GameProgress_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GameProgress_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GameProgress_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GameProgress_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace hangman_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hangman_interfaces::action::GameProgress_SendGoal_Response>()
{
  return &::hangman_interfaces::action::rosidl_typesupport_cpp::GameProgress_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, hangman_interfaces, action, GameProgress_SendGoal_Response)() {
  return get_message_type_support_handle<hangman_interfaces::action::GameProgress_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "hangman_interfaces/action/detail/game_progress__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace hangman_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GameProgress_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GameProgress_SendGoal_type_support_ids_t;

static const _GameProgress_SendGoal_type_support_ids_t _GameProgress_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GameProgress_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GameProgress_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GameProgress_SendGoal_type_support_symbol_names_t _GameProgress_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hangman_interfaces, action, GameProgress_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hangman_interfaces, action, GameProgress_SendGoal)),
  }
};

typedef struct _GameProgress_SendGoal_type_support_data_t
{
  void * data[2];
} _GameProgress_SendGoal_type_support_data_t;

static _GameProgress_SendGoal_type_support_data_t _GameProgress_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GameProgress_SendGoal_service_typesupport_map = {
  2,
  "hangman_interfaces",
  &_GameProgress_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_GameProgress_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_GameProgress_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GameProgress_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GameProgress_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace hangman_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<hangman_interfaces::action::GameProgress_SendGoal>()
{
  return &::hangman_interfaces::action::rosidl_typesupport_cpp::GameProgress_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "hangman_interfaces/action/detail/game_progress__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace hangman_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GameProgress_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GameProgress_GetResult_Request_type_support_ids_t;

static const _GameProgress_GetResult_Request_type_support_ids_t _GameProgress_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GameProgress_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GameProgress_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GameProgress_GetResult_Request_type_support_symbol_names_t _GameProgress_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hangman_interfaces, action, GameProgress_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hangman_interfaces, action, GameProgress_GetResult_Request)),
  }
};

typedef struct _GameProgress_GetResult_Request_type_support_data_t
{
  void * data[2];
} _GameProgress_GetResult_Request_type_support_data_t;

static _GameProgress_GetResult_Request_type_support_data_t _GameProgress_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GameProgress_GetResult_Request_message_typesupport_map = {
  2,
  "hangman_interfaces",
  &_GameProgress_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GameProgress_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GameProgress_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GameProgress_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GameProgress_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace hangman_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hangman_interfaces::action::GameProgress_GetResult_Request>()
{
  return &::hangman_interfaces::action::rosidl_typesupport_cpp::GameProgress_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, hangman_interfaces, action, GameProgress_GetResult_Request)() {
  return get_message_type_support_handle<hangman_interfaces::action::GameProgress_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "hangman_interfaces/action/detail/game_progress__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace hangman_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GameProgress_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GameProgress_GetResult_Response_type_support_ids_t;

static const _GameProgress_GetResult_Response_type_support_ids_t _GameProgress_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GameProgress_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GameProgress_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GameProgress_GetResult_Response_type_support_symbol_names_t _GameProgress_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hangman_interfaces, action, GameProgress_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hangman_interfaces, action, GameProgress_GetResult_Response)),
  }
};

typedef struct _GameProgress_GetResult_Response_type_support_data_t
{
  void * data[2];
} _GameProgress_GetResult_Response_type_support_data_t;

static _GameProgress_GetResult_Response_type_support_data_t _GameProgress_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GameProgress_GetResult_Response_message_typesupport_map = {
  2,
  "hangman_interfaces",
  &_GameProgress_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GameProgress_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GameProgress_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GameProgress_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GameProgress_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace hangman_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hangman_interfaces::action::GameProgress_GetResult_Response>()
{
  return &::hangman_interfaces::action::rosidl_typesupport_cpp::GameProgress_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, hangman_interfaces, action, GameProgress_GetResult_Response)() {
  return get_message_type_support_handle<hangman_interfaces::action::GameProgress_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "hangman_interfaces/action/detail/game_progress__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace hangman_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GameProgress_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GameProgress_GetResult_type_support_ids_t;

static const _GameProgress_GetResult_type_support_ids_t _GameProgress_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GameProgress_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GameProgress_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GameProgress_GetResult_type_support_symbol_names_t _GameProgress_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hangman_interfaces, action, GameProgress_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hangman_interfaces, action, GameProgress_GetResult)),
  }
};

typedef struct _GameProgress_GetResult_type_support_data_t
{
  void * data[2];
} _GameProgress_GetResult_type_support_data_t;

static _GameProgress_GetResult_type_support_data_t _GameProgress_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GameProgress_GetResult_service_typesupport_map = {
  2,
  "hangman_interfaces",
  &_GameProgress_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_GameProgress_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_GameProgress_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GameProgress_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GameProgress_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace hangman_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<hangman_interfaces::action::GameProgress_GetResult>()
{
  return &::hangman_interfaces::action::rosidl_typesupport_cpp::GameProgress_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "hangman_interfaces/action/detail/game_progress__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace hangman_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GameProgress_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GameProgress_FeedbackMessage_type_support_ids_t;

static const _GameProgress_FeedbackMessage_type_support_ids_t _GameProgress_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GameProgress_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GameProgress_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GameProgress_FeedbackMessage_type_support_symbol_names_t _GameProgress_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hangman_interfaces, action, GameProgress_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hangman_interfaces, action, GameProgress_FeedbackMessage)),
  }
};

typedef struct _GameProgress_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _GameProgress_FeedbackMessage_type_support_data_t;

static _GameProgress_FeedbackMessage_type_support_data_t _GameProgress_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GameProgress_FeedbackMessage_message_typesupport_map = {
  2,
  "hangman_interfaces",
  &_GameProgress_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_GameProgress_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_GameProgress_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GameProgress_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GameProgress_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace hangman_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hangman_interfaces::action::GameProgress_FeedbackMessage>()
{
  return &::hangman_interfaces::action::rosidl_typesupport_cpp::GameProgress_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, hangman_interfaces, action, GameProgress_FeedbackMessage)() {
  return get_message_type_support_handle<hangman_interfaces::action::GameProgress_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "hangman_interfaces/action/detail/game_progress__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace hangman_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t GameProgress_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace hangman_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<hangman_interfaces::action::GameProgress>()
{
  using ::hangman_interfaces::action::rosidl_typesupport_cpp::GameProgress_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  GameProgress_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::hangman_interfaces::action::GameProgress::Impl::SendGoalService>();
  GameProgress_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::hangman_interfaces::action::GameProgress::Impl::GetResultService>();
  GameProgress_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::hangman_interfaces::action::GameProgress::Impl::CancelGoalService>();
  GameProgress_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::hangman_interfaces::action::GameProgress::Impl::FeedbackMessage>();
  GameProgress_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::hangman_interfaces::action::GameProgress::Impl::GoalStatusMessage>();
  return &GameProgress_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
