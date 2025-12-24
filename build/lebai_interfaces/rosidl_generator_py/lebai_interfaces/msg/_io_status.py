# generated from rosidl_generator_py/resource/_idl.py.em
# with input from lebai_interfaces:msg/IOStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'robot_ain'
# Member 'robot_aout'
# Member 'robot_ain_type'
# Member 'robot_aout_type'
# Member 'extend_ain'
# Member 'extend_aout'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_IOStatus(type):
    """Metaclass of message 'IOStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'VOLTAGETYPE': 0,
        'CURRENTTYPE': 1,
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
                'lebai_interfaces.msg.IOStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__io_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__io_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__io_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__io_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__io_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'VOLTAGETYPE': cls.__constants['VOLTAGETYPE'],
            'CURRENTTYPE': cls.__constants['CURRENTTYPE'],
        }

    @property
    def VOLTAGETYPE(self):
        """Message constant 'VOLTAGETYPE'."""
        return Metaclass_IOStatus.__constants['VOLTAGETYPE']

    @property
    def CURRENTTYPE(self):
        """Message constant 'CURRENTTYPE'."""
        return Metaclass_IOStatus.__constants['CURRENTTYPE']


class IOStatus(metaclass=Metaclass_IOStatus):
    """
    Message class 'IOStatus'.

    Constants:
      VOLTAGETYPE
      CURRENTTYPE
    """

    __slots__ = [
        '_robot_din',
        '_robot_dout',
        '_robot_ain',
        '_robot_aout',
        '_robot_ain_type',
        '_robot_aout_type',
        '_flange_din',
        '_flange_dout',
        '_extend_din',
        '_extend_dout',
        '_extend_ain',
        '_extend_aout',
    ]

    _fields_and_field_types = {
        'robot_din': 'sequence<boolean>',
        'robot_dout': 'sequence<boolean>',
        'robot_ain': 'sequence<float>',
        'robot_aout': 'sequence<float>',
        'robot_ain_type': 'sequence<uint8>',
        'robot_aout_type': 'sequence<uint8>',
        'flange_din': 'sequence<boolean>',
        'flange_dout': 'sequence<boolean>',
        'extend_din': 'sequence<boolean>',
        'extend_dout': 'sequence<boolean>',
        'extend_ain': 'sequence<float>',
        'extend_aout': 'sequence<float>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.robot_din = kwargs.get('robot_din', [])
        self.robot_dout = kwargs.get('robot_dout', [])
        self.robot_ain = array.array('f', kwargs.get('robot_ain', []))
        self.robot_aout = array.array('f', kwargs.get('robot_aout', []))
        self.robot_ain_type = array.array('B', kwargs.get('robot_ain_type', []))
        self.robot_aout_type = array.array('B', kwargs.get('robot_aout_type', []))
        self.flange_din = kwargs.get('flange_din', [])
        self.flange_dout = kwargs.get('flange_dout', [])
        self.extend_din = kwargs.get('extend_din', [])
        self.extend_dout = kwargs.get('extend_dout', [])
        self.extend_ain = array.array('f', kwargs.get('extend_ain', []))
        self.extend_aout = array.array('f', kwargs.get('extend_aout', []))

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
        if self.robot_din != other.robot_din:
            return False
        if self.robot_dout != other.robot_dout:
            return False
        if self.robot_ain != other.robot_ain:
            return False
        if self.robot_aout != other.robot_aout:
            return False
        if self.robot_ain_type != other.robot_ain_type:
            return False
        if self.robot_aout_type != other.robot_aout_type:
            return False
        if self.flange_din != other.flange_din:
            return False
        if self.flange_dout != other.flange_dout:
            return False
        if self.extend_din != other.extend_din:
            return False
        if self.extend_dout != other.extend_dout:
            return False
        if self.extend_ain != other.extend_ain:
            return False
        if self.extend_aout != other.extend_aout:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def robot_din(self):
        """Message field 'robot_din'."""
        return self._robot_din

    @robot_din.setter
    def robot_din(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'robot_din' field must be a set or sequence and each value of type 'bool'"
        self._robot_din = value

    @builtins.property
    def robot_dout(self):
        """Message field 'robot_dout'."""
        return self._robot_dout

    @robot_dout.setter
    def robot_dout(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'robot_dout' field must be a set or sequence and each value of type 'bool'"
        self._robot_dout = value

    @builtins.property
    def robot_ain(self):
        """Message field 'robot_ain'."""
        return self._robot_ain

    @robot_ain.setter
    def robot_ain(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'robot_ain' array.array() must have the type code of 'f'"
            self._robot_ain = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'robot_ain' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._robot_ain = array.array('f', value)

    @builtins.property
    def robot_aout(self):
        """Message field 'robot_aout'."""
        return self._robot_aout

    @robot_aout.setter
    def robot_aout(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'robot_aout' array.array() must have the type code of 'f'"
            self._robot_aout = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'robot_aout' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._robot_aout = array.array('f', value)

    @builtins.property
    def robot_ain_type(self):
        """Message field 'robot_ain_type'."""
        return self._robot_ain_type

    @robot_ain_type.setter
    def robot_ain_type(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'robot_ain_type' array.array() must have the type code of 'B'"
            self._robot_ain_type = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'robot_ain_type' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._robot_ain_type = array.array('B', value)

    @builtins.property
    def robot_aout_type(self):
        """Message field 'robot_aout_type'."""
        return self._robot_aout_type

    @robot_aout_type.setter
    def robot_aout_type(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'robot_aout_type' array.array() must have the type code of 'B'"
            self._robot_aout_type = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'robot_aout_type' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._robot_aout_type = array.array('B', value)

    @builtins.property
    def flange_din(self):
        """Message field 'flange_din'."""
        return self._flange_din

    @flange_din.setter
    def flange_din(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'flange_din' field must be a set or sequence and each value of type 'bool'"
        self._flange_din = value

    @builtins.property
    def flange_dout(self):
        """Message field 'flange_dout'."""
        return self._flange_dout

    @flange_dout.setter
    def flange_dout(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'flange_dout' field must be a set or sequence and each value of type 'bool'"
        self._flange_dout = value

    @builtins.property
    def extend_din(self):
        """Message field 'extend_din'."""
        return self._extend_din

    @extend_din.setter
    def extend_din(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'extend_din' field must be a set or sequence and each value of type 'bool'"
        self._extend_din = value

    @builtins.property
    def extend_dout(self):
        """Message field 'extend_dout'."""
        return self._extend_dout

    @extend_dout.setter
    def extend_dout(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'extend_dout' field must be a set or sequence and each value of type 'bool'"
        self._extend_dout = value

    @builtins.property
    def extend_ain(self):
        """Message field 'extend_ain'."""
        return self._extend_ain

    @extend_ain.setter
    def extend_ain(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'extend_ain' array.array() must have the type code of 'f'"
            self._extend_ain = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'extend_ain' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._extend_ain = array.array('f', value)

    @builtins.property
    def extend_aout(self):
        """Message field 'extend_aout'."""
        return self._extend_aout

    @extend_aout.setter
    def extend_aout(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'extend_aout' array.array() must have the type code of 'f'"
            self._extend_aout = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'extend_aout' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._extend_aout = array.array('f', value)
