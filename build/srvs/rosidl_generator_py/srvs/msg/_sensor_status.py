# generated from rosidl_generator_py/resource/_idl.py.em
# with input from srvs:msg/SensorStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SensorStatus(type):
    """Metaclass of message 'SensorStatus'."""

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
            module = import_type_support('srvs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'srvs.msg.SensorStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sensor_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sensor_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sensor_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sensor_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sensor_status

            from srvs.msg import SensorType
            if SensorType.__class__._TYPE_SUPPORT is None:
                SensorType.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SensorStatus(metaclass=Metaclass_SensorStatus):
    """Message class 'SensorStatus'."""

    __slots__ = [
        '_sensorid',
        '_unitid',
        '_sensorname',
        '_alive',
        '_recording',
        '_streaming',
        '_sensortype',
    ]

    _fields_and_field_types = {
        'sensorid': 'uint32',
        'unitid': 'uint32',
        'sensorname': 'string',
        'alive': 'boolean',
        'recording': 'boolean',
        'streaming': 'boolean',
        'sensortype': 'srvs/SensorType',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['srvs', 'msg'], 'SensorType'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.sensorid = kwargs.get('sensorid', int())
        self.unitid = kwargs.get('unitid', int())
        self.sensorname = kwargs.get('sensorname', str())
        self.alive = kwargs.get('alive', bool())
        self.recording = kwargs.get('recording', bool())
        self.streaming = kwargs.get('streaming', bool())
        from srvs.msg import SensorType
        self.sensortype = kwargs.get('sensortype', SensorType())

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
        if self.sensorid != other.sensorid:
            return False
        if self.unitid != other.unitid:
            return False
        if self.sensorname != other.sensorname:
            return False
        if self.alive != other.alive:
            return False
        if self.recording != other.recording:
            return False
        if self.streaming != other.streaming:
            return False
        if self.sensortype != other.sensortype:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def sensorid(self):
        """Message field 'sensorid'."""
        return self._sensorid

    @sensorid.setter
    def sensorid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sensorid' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'sensorid' field must be an unsigned integer in [0, 4294967295]"
        self._sensorid = value

    @builtins.property
    def unitid(self):
        """Message field 'unitid'."""
        return self._unitid

    @unitid.setter
    def unitid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'unitid' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'unitid' field must be an unsigned integer in [0, 4294967295]"
        self._unitid = value

    @builtins.property
    def sensorname(self):
        """Message field 'sensorname'."""
        return self._sensorname

    @sensorname.setter
    def sensorname(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'sensorname' field must be of type 'str'"
        self._sensorname = value

    @builtins.property
    def alive(self):
        """Message field 'alive'."""
        return self._alive

    @alive.setter
    def alive(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'alive' field must be of type 'bool'"
        self._alive = value

    @builtins.property
    def recording(self):
        """Message field 'recording'."""
        return self._recording

    @recording.setter
    def recording(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'recording' field must be of type 'bool'"
        self._recording = value

    @builtins.property
    def streaming(self):
        """Message field 'streaming'."""
        return self._streaming

    @streaming.setter
    def streaming(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'streaming' field must be of type 'bool'"
        self._streaming = value

    @builtins.property
    def sensortype(self):
        """Message field 'sensortype'."""
        return self._sensortype

    @sensortype.setter
    def sensortype(self, value):
        if __debug__:
            from srvs.msg import SensorType
            assert \
                isinstance(value, SensorType), \
                "The 'sensortype' field must be a sub message of type 'SensorType'"
        self._sensortype = value
