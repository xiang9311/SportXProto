# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: pilot.proto

from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import common_pb2 as common__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='pilot.proto',
  package='com.xiang.proto.pilot',
  syntax='proto3',
  serialized_pb=b'\n\x0bpilot.proto\x12\x15\x63om.xiang.proto.pilot\x1a\x0c\x63ommon.proto\"\x82\x02\n\x0cRequest10001\x12.\n\x06\x63ommon\x18\x01 \x01(\x0b\x32\x1e.com.xiang.proto.RequestCommon\x12:\n\x06params\x18\x02 \x01(\x0b\x32*.com.xiang.proto.pilot.Request10001.Params\x1a\x85\x01\n\x06Params\x12\r\n\x05phone\x18\x01 \x01(\t\x12\x10\n\x08username\x18\x02 \x01(\t\x12\x11\n\tavatarKey\x18\x03 \x01(\t\x12\x12\n\nbucketName\x18\x04 \x01(\t\x12\x10\n\x08password\x18\x05 \x01(\t\x12!\n\x03sex\x18\x06 \x01(\x0e\x32\x14.com.xiang.proto.Sex\"\xa2\x01\n\rResponse10001\x12/\n\x06\x63ommon\x18\x01 \x01(\x0b\x32\x1f.com.xiang.proto.ResponseCommon\x12\x37\n\x04\x64\x61ta\x18\x02 \x01(\x0b\x32).com.xiang.proto.pilot.Response10001.Data\x1a\'\n\x04\x44\x61ta\x12\x0e\n\x06userId\x18\x01 \x01(\x05\x12\x0f\n\x07userKey\x18\x02 \x01(\t\"\xa5\x01\n\x0cRequest10002\x12.\n\x06\x63ommon\x18\x01 \x01(\x0b\x32\x1e.com.xiang.proto.RequestCommon\x12:\n\x06params\x18\x02 \x01(\x0b\x32*.com.xiang.proto.pilot.Request10002.Params\x1a)\n\x06Params\x12\r\n\x05phone\x18\x01 \x01(\t\x12\x10\n\x08password\x18\x02 \x01(\t\"\xd7\x01\n\rResponse10002\x12/\n\x06\x63ommon\x18\x01 \x01(\x0b\x32\x1f.com.xiang.proto.ResponseCommon\x12\x37\n\x04\x64\x61ta\x18\x02 \x01(\x0b\x32).com.xiang.proto.pilot.Response10002.Data\x1a\\\n\x04\x44\x61ta\x12-\n\tbriefUser\x18\x01 \x01(\x0b\x32\x1a.com.xiang.proto.BriefUser\x12\x0f\n\x07userKey\x18\x02 \x01(\t\x12\x14\n\x0crongyunToken\x18\x03 \x01(\tb\x06proto3'
  ,
  dependencies=[common__pb2.DESCRIPTOR,])
_sym_db.RegisterFileDescriptor(DESCRIPTOR)




_REQUEST10001_PARAMS = _descriptor.Descriptor(
  name='Params',
  full_name='com.xiang.proto.pilot.Request10001.Params',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='phone', full_name='com.xiang.proto.pilot.Request10001.Params.phone', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='username', full_name='com.xiang.proto.pilot.Request10001.Params.username', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='avatarKey', full_name='com.xiang.proto.pilot.Request10001.Params.avatarKey', index=2,
      number=3, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='bucketName', full_name='com.xiang.proto.pilot.Request10001.Params.bucketName', index=3,
      number=4, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='password', full_name='com.xiang.proto.pilot.Request10001.Params.password', index=4,
      number=5, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='sex', full_name='com.xiang.proto.pilot.Request10001.Params.sex', index=5,
      number=6, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=178,
  serialized_end=311,
)

_REQUEST10001 = _descriptor.Descriptor(
  name='Request10001',
  full_name='com.xiang.proto.pilot.Request10001',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='common', full_name='com.xiang.proto.pilot.Request10001.common', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='params', full_name='com.xiang.proto.pilot.Request10001.params', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[_REQUEST10001_PARAMS, ],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=53,
  serialized_end=311,
)


_RESPONSE10001_DATA = _descriptor.Descriptor(
  name='Data',
  full_name='com.xiang.proto.pilot.Response10001.Data',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='userId', full_name='com.xiang.proto.pilot.Response10001.Data.userId', index=0,
      number=1, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='userKey', full_name='com.xiang.proto.pilot.Response10001.Data.userKey', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=437,
  serialized_end=476,
)

_RESPONSE10001 = _descriptor.Descriptor(
  name='Response10001',
  full_name='com.xiang.proto.pilot.Response10001',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='common', full_name='com.xiang.proto.pilot.Response10001.common', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='data', full_name='com.xiang.proto.pilot.Response10001.data', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[_RESPONSE10001_DATA, ],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=314,
  serialized_end=476,
)


_REQUEST10002_PARAMS = _descriptor.Descriptor(
  name='Params',
  full_name='com.xiang.proto.pilot.Request10002.Params',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='phone', full_name='com.xiang.proto.pilot.Request10002.Params.phone', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='password', full_name='com.xiang.proto.pilot.Request10002.Params.password', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=603,
  serialized_end=644,
)

_REQUEST10002 = _descriptor.Descriptor(
  name='Request10002',
  full_name='com.xiang.proto.pilot.Request10002',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='common', full_name='com.xiang.proto.pilot.Request10002.common', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='params', full_name='com.xiang.proto.pilot.Request10002.params', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[_REQUEST10002_PARAMS, ],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=479,
  serialized_end=644,
)


_RESPONSE10002_DATA = _descriptor.Descriptor(
  name='Data',
  full_name='com.xiang.proto.pilot.Response10002.Data',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='briefUser', full_name='com.xiang.proto.pilot.Response10002.Data.briefUser', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='userKey', full_name='com.xiang.proto.pilot.Response10002.Data.userKey', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='rongyunToken', full_name='com.xiang.proto.pilot.Response10002.Data.rongyunToken', index=2,
      number=3, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=770,
  serialized_end=862,
)

_RESPONSE10002 = _descriptor.Descriptor(
  name='Response10002',
  full_name='com.xiang.proto.pilot.Response10002',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='common', full_name='com.xiang.proto.pilot.Response10002.common', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='data', full_name='com.xiang.proto.pilot.Response10002.data', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[_RESPONSE10002_DATA, ],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=647,
  serialized_end=862,
)

_REQUEST10001_PARAMS.fields_by_name['sex'].enum_type = common__pb2._SEX
_REQUEST10001_PARAMS.containing_type = _REQUEST10001
_REQUEST10001.fields_by_name['common'].message_type = common__pb2._REQUESTCOMMON
_REQUEST10001.fields_by_name['params'].message_type = _REQUEST10001_PARAMS
_RESPONSE10001_DATA.containing_type = _RESPONSE10001
_RESPONSE10001.fields_by_name['common'].message_type = common__pb2._RESPONSECOMMON
_RESPONSE10001.fields_by_name['data'].message_type = _RESPONSE10001_DATA
_REQUEST10002_PARAMS.containing_type = _REQUEST10002
_REQUEST10002.fields_by_name['common'].message_type = common__pb2._REQUESTCOMMON
_REQUEST10002.fields_by_name['params'].message_type = _REQUEST10002_PARAMS
_RESPONSE10002_DATA.fields_by_name['briefUser'].message_type = common__pb2._BRIEFUSER
_RESPONSE10002_DATA.containing_type = _RESPONSE10002
_RESPONSE10002.fields_by_name['common'].message_type = common__pb2._RESPONSECOMMON
_RESPONSE10002.fields_by_name['data'].message_type = _RESPONSE10002_DATA
DESCRIPTOR.message_types_by_name['Request10001'] = _REQUEST10001
DESCRIPTOR.message_types_by_name['Response10001'] = _RESPONSE10001
DESCRIPTOR.message_types_by_name['Request10002'] = _REQUEST10002
DESCRIPTOR.message_types_by_name['Response10002'] = _RESPONSE10002

Request10001 = _reflection.GeneratedProtocolMessageType('Request10001', (_message.Message,), dict(

  Params = _reflection.GeneratedProtocolMessageType('Params', (_message.Message,), dict(
    DESCRIPTOR = _REQUEST10001_PARAMS,
    __module__ = 'pilot_pb2'
    # @@protoc_insertion_point(class_scope:com.xiang.proto.pilot.Request10001.Params)
    ))
  ,
  DESCRIPTOR = _REQUEST10001,
  __module__ = 'pilot_pb2'
  # @@protoc_insertion_point(class_scope:com.xiang.proto.pilot.Request10001)
  ))
_sym_db.RegisterMessage(Request10001)
_sym_db.RegisterMessage(Request10001.Params)

Response10001 = _reflection.GeneratedProtocolMessageType('Response10001', (_message.Message,), dict(

  Data = _reflection.GeneratedProtocolMessageType('Data', (_message.Message,), dict(
    DESCRIPTOR = _RESPONSE10001_DATA,
    __module__ = 'pilot_pb2'
    # @@protoc_insertion_point(class_scope:com.xiang.proto.pilot.Response10001.Data)
    ))
  ,
  DESCRIPTOR = _RESPONSE10001,
  __module__ = 'pilot_pb2'
  # @@protoc_insertion_point(class_scope:com.xiang.proto.pilot.Response10001)
  ))
_sym_db.RegisterMessage(Response10001)
_sym_db.RegisterMessage(Response10001.Data)

Request10002 = _reflection.GeneratedProtocolMessageType('Request10002', (_message.Message,), dict(

  Params = _reflection.GeneratedProtocolMessageType('Params', (_message.Message,), dict(
    DESCRIPTOR = _REQUEST10002_PARAMS,
    __module__ = 'pilot_pb2'
    # @@protoc_insertion_point(class_scope:com.xiang.proto.pilot.Request10002.Params)
    ))
  ,
  DESCRIPTOR = _REQUEST10002,
  __module__ = 'pilot_pb2'
  # @@protoc_insertion_point(class_scope:com.xiang.proto.pilot.Request10002)
  ))
_sym_db.RegisterMessage(Request10002)
_sym_db.RegisterMessage(Request10002.Params)

Response10002 = _reflection.GeneratedProtocolMessageType('Response10002', (_message.Message,), dict(

  Data = _reflection.GeneratedProtocolMessageType('Data', (_message.Message,), dict(
    DESCRIPTOR = _RESPONSE10002_DATA,
    __module__ = 'pilot_pb2'
    # @@protoc_insertion_point(class_scope:com.xiang.proto.pilot.Response10002.Data)
    ))
  ,
  DESCRIPTOR = _RESPONSE10002,
  __module__ = 'pilot_pb2'
  # @@protoc_insertion_point(class_scope:com.xiang.proto.pilot.Response10002)
  ))
_sym_db.RegisterMessage(Response10002)
_sym_db.RegisterMessage(Response10002.Data)


# @@protoc_insertion_point(module_scope)
