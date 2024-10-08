// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hangman_interfaces:msg/Progress.idl
// generated code does not contain a copyright notice

#ifndef HANGMAN_INTERFACES__MSG__DETAIL__PROGRESS__TRAITS_HPP_
#define HANGMAN_INTERFACES__MSG__DETAIL__PROGRESS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "hangman_interfaces/msg/detail/progress__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace hangman_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Progress & msg,
  std::ostream & out)
{
  out << "{";
  // member: current_state
  {
    out << "current_state: ";
    rosidl_generator_traits::value_to_yaml(msg.current_state, out);
    out << ", ";
  }

  // member: attempts_left
  {
    out << "attempts_left: ";
    rosidl_generator_traits::value_to_yaml(msg.attempts_left, out);
    out << ", ";
  }

  // member: game_over
  {
    out << "game_over: ";
    rosidl_generator_traits::value_to_yaml(msg.game_over, out);
    out << ", ";
  }

  // member: won
  {
    out << "won: ";
    rosidl_generator_traits::value_to_yaml(msg.won, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Progress & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: current_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_state: ";
    rosidl_generator_traits::value_to_yaml(msg.current_state, out);
    out << "\n";
  }

  // member: attempts_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "attempts_left: ";
    rosidl_generator_traits::value_to_yaml(msg.attempts_left, out);
    out << "\n";
  }

  // member: game_over
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "game_over: ";
    rosidl_generator_traits::value_to_yaml(msg.game_over, out);
    out << "\n";
  }

  // member: won
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "won: ";
    rosidl_generator_traits::value_to_yaml(msg.won, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Progress & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace hangman_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use hangman_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hangman_interfaces::msg::Progress & msg,
  std::ostream & out, size_t indentation = 0)
{
  hangman_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hangman_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const hangman_interfaces::msg::Progress & msg)
{
  return hangman_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<hangman_interfaces::msg::Progress>()
{
  return "hangman_interfaces::msg::Progress";
}

template<>
inline const char * name<hangman_interfaces::msg::Progress>()
{
  return "hangman_interfaces/msg/Progress";
}

template<>
struct has_fixed_size<hangman_interfaces::msg::Progress>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hangman_interfaces::msg::Progress>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<hangman_interfaces::msg::Progress>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HANGMAN_INTERFACES__MSG__DETAIL__PROGRESS__TRAITS_HPP_
