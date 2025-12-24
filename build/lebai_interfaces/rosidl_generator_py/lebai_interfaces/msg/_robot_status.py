# generated from rosidl_generator_py/resource/_idl.py.em
# with input from lebai_interfaces:msg/RobotStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RobotStatus(type):
    """Metaclass of message 'RobotStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('lebai_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'lebai_interfaces.msg.RobotStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__robot_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__robot_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__robot_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__robot_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__robot_status

            from lebai_interfaces.msg import RobotMode
            if RobotMode.__class__._TYPE_SUPPORT is None:
                RobotMode.__class__.__import_type_support__()

            from lebai_interfaces.msg import TriState
            if TriState.__class__._TYPE_SUPPORT is None:
                TriState.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotStatus(metaclass=Metaclass_RobotStatus):
    """Message class 'RobotStatus'."""

    __slots__ = [
        '_header',
        '_mode',
        '_e_stopped',
        '_drives_powered',
        '_motion_possible',
        '_in_motion',
        '_in_error',
        '_error_code',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'mode': 'lebai_interfaces/RobotMode',
        'e_stopped': 'lebai_interfaces/TriState',
        'drives_powered': 'lebai_interfaces/TriState',
        'motion_possible': 'lebai_interfaces/TriState',
        'in_motion': 'lebai_interfaces/TriState',
        'in_error': 'lebai_interfaces/TriState',
        'error_code': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['lebai_interfaces', 'msg'], 'RobotMode'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['lebai_interfaces', 'msg'], 'TriState'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['lebai_interfaces', 'msg'], 'TriState'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['lebai_interfaces', 'msg'], 'TriState'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['lebai_interfaces', 'msg'], 'TriState'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['lebai_interfaces', 'msg'], 'TriState'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from lebai_interfaces.msg import RobotMode
        self.mode = kwargs.get('mode', RobotMode())
        from lebai_interfaces.msg import TriState
        self.e_stopped = kwargs.get('e_stopped', TriState())
        from lebai_interfaces.msg import TriState
        self.drives_powered = kwargs.get('drives_powered', TriState())
        from lebai_interfaces.msg import TriState
        self.motion_possible = kwargs.get('motion_possible', TriState())
        from lebai_interfaces.msg import TriState
        self.in_motion = kwargs.get('in_motion', TriState())
        from lebai_interfaces.msg import TriState
        self.in_error = kwargs.get('in_error', TriState())
        self.error_code = kwargs.get('error_code', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.mode != other.mode:
            return False
        if self.e_stopped != other.e_stopped:
            return False
        if self.drives_powered != other.drives_powered:
            return False
        if self.motion_possible != other.motion_possible:
            return False
        if self.in_motion != other.in_motion:
            return False
        if self.in_error != other.in_error:
            return False
        if self.error_code != other.error_code:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if __debug__:
            from lebai_interfaces.msg import RobotMode
            assert \
                isinstance(value, RobotMode), \
                "The 'mode' field must be a sub message of type 'RobotMode'"
        self._mode = value

    @builtins.property
    def e_stopped(self):
        """Message field 'e_stopped'."""
        return self._e_stopped

    @e_stopped.setter
    def e_stopped(self, value):
        if __debug__:
            from lebai_interfaces.msg import TriState
            assert \
                isinstance(value, TriState), \
                "The 'e_stopped' field must be a sub message of type 'TriState'"
        self._e_stopped = value

    @builtins.property
    def drives_powered(self):
        """Message field 'drives_powered'."""
        return self._drives_powered

    @drives_powered.setter
    def drives_powered(self, value):
        if __debug__:
            from lebai_interfaces.msg import TriState
            assert \
                isinstance(value, TriState), \
                "The 'drives_powered' field must be a sub message of type 'TriState'"
        self._drives_powered = value

    @builtins.property
    def motion_possible(self):
        """Message field 'motion_possible'."""
        return self._motion_possible

    @motion_possible.setter
    def motion_possible(self, value):
        if __debug__:
            from lebai_interfaces.msg import TriState
            assert \
                isinstance(value, TriState), \
                "The 'motion_possible' field must be a sub message of type 'TriState'"
        self._motion_possible = value

    @builtins.property
    def in_motion(self):
        """Message field 'in_motion'."""
        return self._in_motion

    @in_motion.setter
    def in_motion(self, value):
        if __debug__:
            from lebai_interfaces.msg import TriState
            assert \
                isinstance(value, TriState), \
                "The 'in_motion' field must be a sub message of type 'TriState'"
        self._in_motion = value

    @builtins.property
    def in_error(self):
        """Message field 'in_error'."""
        return self._in_error

    @in_error.setter
    def in_error(self, value):
        if __debug__:
            from lebai_interfaces.msg import TriState
            assert \
                isinstance(value, TriState), \
                "The 'in_error' field must be a sub message of type 'TriState'"
        self._in_error = value

    @builtins.property
    def error_code(self):
        """Message field 'error_code'."""
        return self._error_code

    @error_code.setter
    def error_code(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'error_code' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'error_code' field must be an integer in [-2147483648, 2147483647]"
        self._error_code = value
