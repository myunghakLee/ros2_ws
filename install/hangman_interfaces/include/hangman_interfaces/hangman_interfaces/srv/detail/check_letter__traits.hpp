// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hangman_interfaces:srv/CheckLetter.idl
// generated code does not contain a copyright notice

#ifndef HANGMAN_INTERFACES__SRV__DETAIL__CHECK_LETTER__TRAITS_HPP_
#define HANGMAN_INTERFACES__SRV__DETAIL__CHECK_LETTER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "hangman_interfaces/srv/detail/check_letter__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace hangman_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const CheckLetter_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CheckLetter_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CheckLetter_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace hangman_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use hangman_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hangman_interfaces::srv::CheckLetter_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  hangman_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hangman_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const hangman_interfaces::srv::CheckLetter_Request & msg)
{
  return hangman_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<hangman_interfaces::srv::CheckLetter_Request>()
{
  return "hangman_interfaces::srv::CheckLetter_Request";
}

template<>
inline const char * name<hangman_interfaces::srv::CheckLetter_Request>()
{
  return "hangman_interfaces/srv/CheckLetter_Request";
}

template<>
struct has_fixed_size<hangman_interfaces::srv::CheckLetter_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<hangman_interfaces::srv::CheckLetter_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<hangman_interfaces::srv::CheckLetter_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace hangman_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const CheckLetter_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: updated_word_state
  {
    out << "updated_word_state: ";
    rosidl_generator_traits::value_to_yaml(msg.updated_word_state, out);
    out << ", ";
  }

  // member: is_correct
  {
    out << "is_correct: ";
    rosidl_generator_traits::value_to_yaml(msg.is_correct, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CheckLetter_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: updated_word_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "updated_word_state: ";
    rosidl_generator_traits::value_to_yaml(msg.updated_word_state, out);
    out << "\n";
  }

  // member: is_correct
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_correct: ";
    rosidl_generator_traits::value_to_yaml(msg.is_correct, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CheckLetter_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace hangman_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use hangman_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hangman_interfaces::srv::CheckLetter_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  hangman_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hangman_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const hangman_interfaces::srv::CheckLetter_Response & msg)
{
  return hangman_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<hangman_interfaces::srv::CheckLetter_Response>()
{
  return "hangman_interfaces::srv::CheckLetter_Response";
}

template<>
inline const char * name<hangman_interfaces::srv::CheckLetter_Response>()
{
  return "hangman_interfaces/srv/CheckLetter_Response";
}

template<>
struct has_fixed_size<hangman_interfaces::srv::CheckLetter_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hangman_interfaces::srv::CheckLetter_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<hangman_interfaces::srv::CheckLetter_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hangman_interfaces::srv::CheckLetter>()
{
  return "hangman_interfaces::srv::CheckLetter";
}

template<>
inline const char * name<hangman_interfaces::srv::CheckLetter>()
{
  return "hangman_interfaces/srv/CheckLetter";
}

template<>
struct has_fixed_size<hangman_interfaces::srv::CheckLetter>
  : std::integral_constant<
    bool,
    has_fixed_size<hangman_interfaces::srv::CheckLetter_Request>::value &&
    has_fixed_size<hangman_interfaces::srv::CheckLetter_Response>::value
  >
{
};

template<>
struct has_bounded_size<hangman_interfaces::srv::CheckLetter>
  : std::integral_constant<
    bool,
    has_bounded_size<hangman_interfaces::srv::CheckLetter_Request>::value &&
    has_bounded_size<hangman_interfaces::srv::CheckLetter_Response>::value
  >
{
};

template<>
struct is_service<hangman_interfaces::srv::CheckLetter>
  : std::true_type
{
};

template<>
struct is_service_request<hangman_interfaces::srv::CheckLetter_Request>
  : std::true_type
{
};

template<>
struct is_service_response<hangman_interfaces::srv::CheckLetter_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // HANGMAN_INTERFACES__SRV__DETAIL__CHECK_LETTER__TRAITS_HPP_
