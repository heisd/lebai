# generated from rosidl_generator_py/resource/_idl.py.em
# with input from lebai_interfaces:msg/UntilInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_UntilInfo(type):
    """Metaclass of message 'UntilInfo'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'LOGIC_AND': 0,
        'LOGIC_OR': 1,
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
                'lebai_interfaces.msg.UntilInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__until_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__until_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__until_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__until_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__until_info

            from lebai_interfaces.msg import IOConditionalExpress
            if IOConditionalExpress.__class__._TYPE_SUPPORT is None:
                IOConditionalExpress.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'LOGIC_AND': cls.__constants['LOGIC_AND'],
            'LOGIC_OR': cls.__constants['LOGIC_OR'],
        }

    @property
    def LOGIC_AND(self):
        """Message constant 'LOGIC_AND'."""
        return Metaclass_UntilInfo.__constants['LOGIC_AND']

    @property
    def LOGIC_OR(self):
        """Message constant 'LOGIC_OR'."""
        return Metaclass_UntilInfo.__constants['LOGIC_OR']


class UntilInfo(metaclass=Metaclass_UntilInfo):
    """
    Message class 'UntilInfo'.

    Constants:
      LOGIC_AND
      LOGIC_OR
    """

    __slots__ = [
        '_io_express_logic',
        '_io_express',
    ]

    _fields_and_field_types = {
        'io_express_logic': 'uint8',
        'io_express': 'sequence<lebai_interfaces/IOConditionalExpress>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['lebai_interfaces', 'msg'], 'IOConditionalExpress')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.io_express_logic = kwargs.get('io_express_logic', int())
        self.io_express = kwargs.get('io_express', [])

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
        if self.io_express_logic != other.io_express_logic:
            return False
        if self.io_express != other.io_express:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def io_express_logic(self):
        """Message field 'io_express_logic'."""
        return self._io_express_logic

    @io_express_logic.setter
    def io_express_logic(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'io_express_logic' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'io_express_logic' field must be an unsigned integer in [0, 255]"
        self._io_express_logic = value

    @builtins.property
    def io_express(self):
        """Message field 'io_express'."""
        return self._io_express

    @io_express.setter
    def io_express(self, value):
        if __debug__:
            from lebai_interfaces.msg import IOConditionalExpress
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
                 all(isinstance(v, IOConditionalExpress) for v in value) and
                 True), \
                "The 'io_express' field must be a set or sequence and each value of type 'IOConditionalExpress'"
        self._io_express = value
