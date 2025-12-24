# generated from rosidl_generator_py/resource/_idl.py.em
# with input from lebai_interfaces:srv/MoveCircle.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'way_point_joint_pose'
# Member 'end_point_joint_pose'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MoveCircle_Request(type):
    """Metaclass of message 'MoveCircle_Request'."""

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
                'lebai_interfaces.srv.MoveCircle_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__move_circle__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__move_circle__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__move_circle__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__move_circle__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__move_circle__request

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from lebai_interfaces.msg import MoveCommon
            if MoveCommon.__class__._TYPE_SUPPORT is None:
                MoveCommon.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MoveCircle_Request(metaclass=Metaclass_MoveCircle_Request):
    """Message class 'MoveCircle_Request'."""

    __slots__ = [
        '_way_point_is_joint_pose',
        '_way_point_joint_pose',
        '_way_point_cartesian_pose',
        '_end_point_is_joint_pose',
        '_end_point_joint_pose',
        '_end_point_cartesian_pose',
        '_circle_angle',
        '_common',
    ]

    _fields_and_field_types = {
        'way_point_is_joint_pose': 'boolean',
        'way_point_joint_pose': 'sequence<double>',
        'way_point_cartesian_pose': 'geometry_msgs/Pose',
        'end_point_is_joint_pose': 'boolean',
        'end_point_joint_pose': 'sequence<double>',
        'end_point_cartesian_pose': 'geometry_msgs/Pose',
        'circle_angle': 'double',
        'common': 'lebai_interfaces/MoveCommon',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['lebai_interfaces', 'msg'], 'MoveCommon'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.way_point_is_joint_pose = kwargs.get('way_point_is_joint_pose', bool())
        self.way_point_joint_pose = array.array('d', kwargs.get('way_point_joint_pose', []))
        from geometry_msgs.msg import Pose
        self.way_point_cartesian_pose = kwargs.get('way_point_cartesian_pose', Pose())
        self.end_point_is_joint_pose = kwargs.get('end_point_is_joint_pose', bool())
        self.end_point_joint_pose = array.array('d', kwargs.get('end_point_joint_pose', []))
        from geometry_msgs.msg import Pose
        self.end_point_cartesian_pose = kwargs.get('end_point_cartesian_pose', Pose())
        self.circle_angle = kwargs.get('circle_angle', float())
        from lebai_interfaces.msg import MoveCommon
        self.common = kwargs.get('common', MoveCommon())

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
        if self.way_point_is_joint_pose != other.way_point_is_joint_pose:
            return False
        if self.way_point_joint_pose != other.way_point_joint_pose:
            return False
        if self.way_point_cartesian_pose != other.way_point_cartesian_pose:
            return False
        if self.end_point_is_joint_pose != other.end_point_is_joint_pose:
            return False
        if self.end_point_joint_pose != other.end_point_joint_pose:
            return False
        if self.end_point_cartesian_pose != other.end_point_cartesian_pose:
            return False
        if self.circle_angle != other.circle_angle:
            return False
        if self.common != other.common:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def way_point_is_joint_pose(self):
        """Message field 'way_point_is_joint_pose'."""
        return self._way_point_is_joint_pose

    @way_point_is_joint_pose.setter
    def way_point_is_joint_pose(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'way_point_is_joint_pose' field must be of type 'bool'"
        self._way_point_is_joint_pose = value

    @builtins.property
    def way_point_joint_pose(self):
        """Message field 'way_point_joint_pose'."""
        return self._way_point_joint_pose

    @way_point_joint_pose.setter
    def way_point_joint_pose(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'way_point_joint_pose' array.array() must have the type code of 'd'"
            self._way_point_joint_pose = value
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
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'way_point_joint_pose' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._way_point_joint_pose = array.array('d', value)

    @builtins.property
    def way_point_cartesian_pose(self):
        """Message field 'way_point_cartesian_pose'."""
        return self._way_point_cartesian_pose

    @way_point_cartesian_pose.setter
    def way_point_cartesian_pose(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'way_point_cartesian_pose' field must be a sub message of type 'Pose'"
        self._way_point_cartesian_pose = value

    @builtins.property
    def end_point_is_joint_pose(self):
        """Message field 'end_point_is_joint_pose'."""
        return self._end_point_is_joint_pose

    @end_point_is_joint_pose.setter
    def end_point_is_joint_pose(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'end_point_is_joint_pose' field must be of type 'bool'"
        self._end_point_is_joint_pose = value

    @builtins.property
    def end_point_joint_pose(self):
        """Message field 'end_point_joint_pose'."""
        return self._end_point_joint_pose

    @end_point_joint_pose.setter
    def end_point_joint_pose(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'end_point_joint_pose' array.array() must have the type code of 'd'"
            self._end_point_joint_pose = value
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
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'end_point_joint_pose' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._end_point_joint_pose = array.array('d', value)

    @builtins.property
    def end_point_cartesian_pose(self):
        """Message field 'end_point_cartesian_pose'."""
        return self._end_point_cartesian_pose

    @end_point_cartesian_pose.setter
    def end_point_cartesian_pose(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'end_point_cartesian_pose' field must be a sub message of type 'Pose'"
        self._end_point_cartesian_pose = value

    @builtins.property
    def circle_angle(self):
        """Message field 'circle_angle'."""
        return self._circle_angle

    @circle_angle.setter
    def circle_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'circle_angle' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'circle_angle' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._circle_angle = value

    @builtins.property
    def common(self):
        """Message field 'common'."""
        return self._common

    @common.setter
    def common(self, value):
        if __debug__:
            from lebai_interfaces.msg import MoveCommon
            assert \
                isinstance(value, MoveCommon), \
                "The 'common' field must be a sub message of type 'MoveCommon'"
        self._common = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_MoveCircle_Response(type):
    """Metaclass of message 'MoveCircle_Response'."""

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
                'lebai_interfaces.srv.MoveCircle_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__move_circle__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__move_circle__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__move_circle__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__move_circle__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__move_circle__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MoveCircle_Response(metaclass=Metaclass_MoveCircle_Response):
    """Message class 'MoveCircle_Response'."""

    __slots__ = [
        '_ret',
    ]

    _fields_and_field_types = {
        'ret': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.ret = kwargs.get('ret', bool())

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
        if self.ret != other.ret:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def ret(self):
        """Message field 'ret'."""
        return self._ret

    @ret.setter
    def ret(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ret' field must be of type 'bool'"
        self._ret = value


class Metaclass_MoveCircle(type):
    """Metaclass of service 'MoveCircle'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('lebai_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'lebai_interfaces.srv.MoveCircle')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__move_circle

            from lebai_interfaces.srv import _move_circle
            if _move_circle.Metaclass_MoveCircle_Request._TYPE_SUPPORT is None:
                _move_circle.Metaclass_MoveCircle_Request.__import_type_support__()
            if _move_circle.Metaclass_MoveCircle_Response._TYPE_SUPPORT is None:
                _move_circle.Metaclass_MoveCircle_Response.__import_type_support__()


class MoveCircle(metaclass=Metaclass_MoveCircle):
    from lebai_interfaces.srv._move_circle import MoveCircle_Request as Request
    from lebai_interfaces.srv._move_circle import MoveCircle_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
