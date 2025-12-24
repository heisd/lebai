# generated from rosidl_generator_py/resource/_idl.py.em
# with input from lebai_interfaces:msg/IOConditionalExpress.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_IOConditionalExpress(type):
    """Metaclass of message 'IOConditionalExpress'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'GROUP_ROBOT': 0,
        'GROUP_FLANGE': 1,
        'TYPE_ANALOG': 0,
        'TYPE_DIGITAL': 1,
        'LOGIC_OP_GT': 0,
        'LOGIC_OP_GE': 1,
        'LOGIC_OP_EQ': 2,
        'LOGIC_OP_NE': 3,
        'LOGIC_OP_LT': 4,
        'LOGIC_OP_LE': 5,
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
                'lebai_interfaces.msg.IOConditionalExpress')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__io_conditional_express
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__io_conditional_express
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__io_conditional_express
            cls._TYPE_SUPPORT = module.type_support_msg__msg__io_conditional_express
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__io_conditional_express

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'GROUP_ROBOT': cls.__constants['GROUP_ROBOT'],
            'GROUP_FLANGE': cls.__constants['GROUP_FLANGE'],
            'TYPE_ANALOG': cls.__constants['TYPE_ANALOG'],
            'TYPE_DIGITAL': cls.__constants['TYPE_DIGITAL'],
            'LOGIC_OP_GT': cls.__constants['LOGIC_OP_GT'],
            'LOGIC_OP_GE': cls.__constants['LOGIC_OP_GE'],
            'LOGIC_OP_EQ': cls.__constants['LOGIC_OP_EQ'],
            'LOGIC_OP_NE': cls.__constants['LOGIC_OP_NE'],
            'LOGIC_OP_LT': cls.__constants['LOGIC_OP_LT'],
            'LOGIC_OP_LE': cls.__constants['LOGIC_OP_LE'],
        }

    @property
    def GROUP_ROBOT(self):
        """Message constant 'GROUP_ROBOT'."""
        return Metaclass_IOConditionalExpress.__constants['GROUP_ROBOT']

    @property
    def GROUP_FLANGE(self):
        """Message constant 'GROUP_FLANGE'."""
        return Metaclass_IOConditionalExpress.__constants['GROUP_FLANGE']

    @property
    def TYPE_ANALOG(self):
        """Message constant 'TYPE_ANALOG'."""
        return Metaclass_IOConditionalExpress.__constants['TYPE_ANALOG']

    @property
    def TYPE_DIGITAL(self):
        """Message constant 'TYPE_DIGITAL'."""
        return Metaclass_IOConditionalExpress.__constants['TYPE_DIGITAL']

    @property
    def LOGIC_OP_GT(self):
        """Message constant 'LOGIC_OP_GT'."""
        return Metaclass_IOConditionalExpress.__constants['LOGIC_OP_GT']

    @property
    def LOGIC_OP_GE(self):
        """Message constant 'LOGIC_OP_GE'."""
        return Metaclass_IOConditionalExpress.__constants['LOGIC_OP_GE']

    @property
    def LOGIC_OP_EQ(self):
        """Message constant 'LOGIC_OP_EQ'."""
        return Metaclass_IOConditionalExpress.__constants['LOGIC_OP_EQ']

    @property
    def LOGIC_OP_NE(self):
        """Message constant 'LOGIC_OP_NE'."""
        return Metaclass_IOConditionalExpress.__constants['LOGIC_OP_NE']

    @property
    def LOGIC_OP_LT(self):
        """Message constant 'LOGIC_OP_LT'."""
        return Metaclass_IOConditionalExpress.__constants['LOGIC_OP_LT']

    @property
    def LOGIC_OP_LE(self):
        """Message constant 'LOGIC_OP_LE'."""
        return Metaclass_IOConditionalExpress.__constants['LOGIC_OP_LE']


class IOConditionalExpress(metaclass=Metaclass_IOConditionalExpress):
    """
    Message class 'IOConditionalExpress'.

    Constants:
      GROUP_ROBOT
      GROUP_FLANGE
      TYPE_ANALOG
      TYPE_DIGITAL
      LOGIC_OP_GT
      LOGIC_OP_GE
      LOGIC_OP_EQ
      LOGIC_OP_NE
      LOGIC_OP_LT
      LOGIC_OP_LE
    """

    __slots__ = [
        '_group',
        '_pin',
        '_type',
        '_float_value',
        '_uint_value',
        '_logic_operation',
    ]

    _fields_and_field_types = {
        'group': 'uint32',
        'pin': 'uint32',
        'type': 'uint32',
        'float_value': 'double',
        'uint_value': 'uint8',
        'logic_operation': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.group = kwargs.get('group', int())
        self.pin = kwargs.get('pin', int())
        self.type = kwargs.get('type', int())
        self.float_value = kwargs.get('float_value', float())
        self.uint_value = kwargs.get('uint_value', int())
        self.logic_operation = kwargs.get('logic_operation', int())

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
        if self.group != other.group:
            return False
        if self.pin != other.pin:
            return False
        if self.type != other.type:
            return False
        if self.float_value != other.float_value:
            return False
        if self.uint_value != other.uint_value:
            return False
        if self.logic_operation != other.logic_operation:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def group(self):
        """Message field 'group'."""
        return self._group

    @group.setter
    def group(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'group' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'group' field must be an unsigned integer in [0, 4294967295]"
        self._group = value

    @builtins.property
    def pin(self):
        """Message field 'pin'."""
        return self._pin

    @pin.setter
    def pin(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pin' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'pin' field must be an unsigned integer in [0, 4294967295]"
        self._pin = value

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'type' field must be an unsigned integer in [0, 4294967295]"
        self._type = value

    @builtins.property
    def float_value(self):
        """Message field 'float_value'."""
        return self._float_value

    @float_value.setter
    def float_value(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'float_value' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'float_value' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._float_value = value

    @builtins.property
    def uint_value(self):
        """Message field 'uint_value'."""
        return self._uint_value

    @uint_value.setter
    def uint_value(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'uint_value' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'uint_value' field must be an unsigned integer in [0, 255]"
        self._uint_value = value

    @builtins.property
    def logic_operation(self):
        """Message field 'logic_operation'."""
        return self._logic_operation

    @logic_operation.setter
    def logic_operation(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'logic_operation' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'logic_operation' field must be an unsigned integer in [0, 255]"
        self._logic_operation = value
