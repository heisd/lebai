// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lebai_interfaces:msg/IOStatus.idl
// generated code does not contain a copyright notice

#ifndef LEBAI_INTERFACES__MSG__DETAIL__IO_STATUS__TRAITS_HPP_
#define LEBAI_INTERFACES__MSG__DETAIL__IO_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lebai_interfaces/msg/detail/io_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace lebai_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const IOStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: robot_din
  {
    if (msg.robot_din.size() == 0) {
      out << "robot_din: []";
    } else {
      out << "robot_din: [";
      size_t pending_items = msg.robot_din.size();
      for (auto item : msg.robot_din) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: robot_dout
  {
    if (msg.robot_dout.size() == 0) {
      out << "robot_dout: []";
    } else {
      out << "robot_dout: [";
      size_t pending_items = msg.robot_dout.size();
      for (auto item : msg.robot_dout) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: robot_ain
  {
    if (msg.robot_ain.size() == 0) {
      out << "robot_ain: []";
    } else {
      out << "robot_ain: [";
      size_t pending_items = msg.robot_ain.size();
      for (auto item : msg.robot_ain) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: robot_aout
  {
    if (msg.robot_aout.size() == 0) {
      out << "robot_aout: []";
    } else {
      out << "robot_aout: [";
      size_t pending_items = msg.robot_aout.size();
      for (auto item : msg.robot_aout) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: robot_ain_type
  {
    if (msg.robot_ain_type.size() == 0) {
      out << "robot_ain_type: []";
    } else {
      out << "robot_ain_type: [";
      size_t pending_items = msg.robot_ain_type.size();
      for (auto item : msg.robot_ain_type) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: robot_aout_type
  {
    if (msg.robot_aout_type.size() == 0) {
      out << "robot_aout_type: []";
    } else {
      out << "robot_aout_type: [";
      size_t pending_items = msg.robot_aout_type.size();
      for (auto item : msg.robot_aout_type) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: flange_din
  {
    if (msg.flange_din.size() == 0) {
      out << "flange_din: []";
    } else {
      out << "flange_din: [";
      size_t pending_items = msg.flange_din.size();
      for (auto item : msg.flange_din) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: flange_dout
  {
    if (msg.flange_dout.size() == 0) {
      out << "flange_dout: []";
    } else {
      out << "flange_dout: [";
      size_t pending_items = msg.flange_dout.size();
      for (auto item : msg.flange_dout) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: extend_din
  {
    if (msg.extend_din.size() == 0) {
      out << "extend_din: []";
    } else {
      out << "extend_din: [";
      size_t pending_items = msg.extend_din.size();
      for (auto item : msg.extend_din) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: extend_dout
  {
    if (msg.extend_dout.size() == 0) {
      out << "extend_dout: []";
    } else {
      out << "extend_dout: [";
      size_t pending_items = msg.extend_dout.size();
      for (auto item : msg.extend_dout) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: extend_ain
  {
    if (msg.extend_ain.size() == 0) {
      out << "extend_ain: []";
    } else {
      out << "extend_ain: [";
      size_t pending_items = msg.extend_ain.size();
      for (auto item : msg.extend_ain) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: extend_aout
  {
    if (msg.extend_aout.size() == 0) {
      out << "extend_aout: []";
    } else {
      out << "extend_aout: [";
      size_t pending_items = msg.extend_aout.size();
      for (auto item : msg.extend_aout) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IOStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: robot_din
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.robot_din.size() == 0) {
      out << "robot_din: []\n";
    } else {
      out << "robot_din:\n";
      for (auto item : msg.robot_din) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: robot_dout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.robot_dout.size() == 0) {
      out << "robot_dout: []\n";
    } else {
      out << "robot_dout:\n";
      for (auto item : msg.robot_dout) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: robot_ain
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.robot_ain.size() == 0) {
      out << "robot_ain: []\n";
    } else {
      out << "robot_ain:\n";
      for (auto item : msg.robot_ain) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: robot_aout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.robot_aout.size() == 0) {
      out << "robot_aout: []\n";
    } else {
      out << "robot_aout:\n";
      for (auto item : msg.robot_aout) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: robot_ain_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.robot_ain_type.size() == 0) {
      out << "robot_ain_type: []\n";
    } else {
      out << "robot_ain_type:\n";
      for (auto item : msg.robot_ain_type) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: robot_aout_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.robot_aout_type.size() == 0) {
      out << "robot_aout_type: []\n";
    } else {
      out << "robot_aout_type:\n";
      for (auto item : msg.robot_aout_type) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: flange_din
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.flange_din.size() == 0) {
      out << "flange_din: []\n";
    } else {
      out << "flange_din:\n";
      for (auto item : msg.flange_din) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: flange_dout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.flange_dout.size() == 0) {
      out << "flange_dout: []\n";
    } else {
      out << "flange_dout:\n";
      for (auto item : msg.flange_dout) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: extend_din
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.extend_din.size() == 0) {
      out << "extend_din: []\n";
    } else {
      out << "extend_din:\n";
      for (auto item : msg.extend_din) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: extend_dout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.extend_dout.size() == 0) {
      out << "extend_dout: []\n";
    } else {
      out << "extend_dout:\n";
      for (auto item : msg.extend_dout) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: extend_ain
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.extend_ain.size() == 0) {
      out << "extend_ain: []\n";
    } else {
      out << "extend_ain:\n";
      for (auto item : msg.extend_ain) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: extend_aout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.extend_aout.size() == 0) {
      out << "extend_aout: []\n";
    } else {
      out << "extend_aout:\n";
      for (auto item : msg.extend_aout) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IOStatus & msg, bool use_flow_style = false)
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

}  // namespace lebai_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use lebai_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const lebai_interfaces::msg::IOStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  lebai_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lebai_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const lebai_interfaces::msg::IOStatus & msg)
{
  return lebai_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<lebai_interfaces::msg::IOStatus>()
{
  return "lebai_interfaces::msg::IOStatus";
}

template<>
inline const char * name<lebai_interfaces::msg::IOStatus>()
{
  return "lebai_interfaces/msg/IOStatus";
}

template<>
struct has_fixed_size<lebai_interfaces::msg::IOStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<lebai_interfaces::msg::IOStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<lebai_interfaces::msg::IOStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LEBAI_INTERFACES__MSG__DETAIL__IO_STATUS__TRAITS_HPP_
