# generated from rosidl_generator_py/resource/_idl.py.em
# with input from lebai_interfaces:msg/TrajectoryMoveJoint.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'joint_pose'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TrajectoryMoveJoint(type):
    """Metaclass of message 'TrajectoryMoveJoint'."""

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
                'lebai_interfaces.msg.TrajectoryMoveJoint')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__trajectory_move_joint
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__trajectory_move_joint
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__trajectory_move_joint
            cls._TYPE_SUPPORT = module.type_support_msg__msg__trajectory_move_joint
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__trajectory_move_joint

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


class TrajectoryMoveJoint(metaclass=Metaclass_TrajectoryMoveJoint):
    """Message class 'TrajectoryMoveJoint'."""

    __slots__ = [
        '_common',
        '_is_joint_pose',
        '_joint_pose',
        '_cartesian_pose',
    ]

    _fields_and_field_types = {
        'common': 'lebai_interfaces/MoveCommon',
        'is_joint_pose': 'boolean',
        'joint_pose': 'sequence<double>',
        'cartesian_pose': 'geometry_msgs/Pose',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['lebai_interfaces', 'msg'], 'MoveCommon'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from lebai_interfaces.msg import MoveCommon
        self.common = kwargs.get('common', MoveCommon())
        self.is_joint_pose = kwargs.get('is_joint_pose', bool())
        self.joint_pose = array.array('d', kwargs.get('joint_pose', []))
        from geometry_msgs.msg import Pose
        self.cartesian_pose = kwargs.get('cartesian_pose', Pose())

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
        if self.common != other.common:
            return False
        if self.is_joint_pose != other.is_joint_pose:
            return False
        if self.joint_pose != other.joint_pose:
            return False
        if self.cartesian_pose != other.cartesian_pose:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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

    @builtins.property
    def is_joint_pose(self):
        """Message field 'is_joint_pose'."""
        return self._is_joint_pose

    @is_joint_pose.setter
    def is_joint_pose(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_joint_pose' field must be of type 'bool'"
        self._is_joint_pose = value

    @builtins.property
    def joint_pose(self):
        """Message field 'joint_pose'."""
        return self._joint_pose

    @joint_pose.setter
    def joint_pose(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'joint_pose' array.array() must have the type code of 'd'"
            self._joint_pose = value
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
                "The 'joint_pose' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._joint_pose = array.array('d', value)

    @builtins.property
    def cartesian_pose(self):
        """Message field 'cartesian_pose'."""
        return self._cartesian_pose

    @cartesian_pose.setter
    def cartesian_pose(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'cartesian_pose' field must be a sub message of type 'Pose'"
        self._cartesian_pose = value
