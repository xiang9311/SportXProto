// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: token.proto

#import "GPBProtocolBuffers_RuntimeSupport.h"
#import "Token.pbobjc.h"
#import "Common.pbobjc.h"
// @@protoc_insertion_point(imports)

#pragma mark - TokenRoot

@implementation TokenRoot

+ (GPBExtensionRegistry*)extensionRegistry {
  // This is called by +initialize so there is no need to worry
  // about thread safety and initialization of registry.
  static GPBExtensionRegistry* registry = nil;
  if (!registry) {
    GPBDebugCheckRuntimeVersion();
    registry = [[GPBExtensionRegistry alloc] init];
    [registry addExtensions:[CommonRoot extensionRegistry]];
  }
  return registry;
}

@end

#pragma mark - TokenRoot_FileDescriptor

static GPBFileDescriptor *TokenRoot_FileDescriptor(void) {
  // This is called by +initialize so there is no need to worry
  // about thread safety of the singleton.
  static GPBFileDescriptor *descriptor = NULL;
  if (!descriptor) {
    GPBDebugCheckRuntimeVersion();
    descriptor = [[GPBFileDescriptor alloc] initWithPackage:@"com.xiang.proto.pilot"
                                                     syntax:GPBFileSyntaxProto3];
  }
  return descriptor;
}

#pragma mark - Request11001

@implementation Request11001

@dynamic hasCommon, common;
@dynamic hasParams, params;

typedef struct Request11001__storage_ {
  uint32_t _has_storage_[1];
  RequestCommon *common;
  Request11001_Params *params;
} Request11001__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "common",
        .number = Request11001_FieldNumber_Common,
        .hasIndex = 0,
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
        .offset = offsetof(Request11001__storage_, common),
        .defaultValue.valueMessage = nil,
        .dataTypeSpecific.className = GPBStringifySymbol(RequestCommon),
        .fieldOptions = NULL,
      },
      {
        .name = "params",
        .number = Request11001_FieldNumber_Params,
        .hasIndex = 1,
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
        .offset = offsetof(Request11001__storage_, params),
        .defaultValue.valueMessage = nil,
        .dataTypeSpecific.className = GPBStringifySymbol(Request11001_Params),
        .fieldOptions = NULL,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[Request11001 class]
                                     rootClass:[TokenRoot class]
                                          file:TokenRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:sizeof(fields) / sizeof(GPBMessageFieldDescription)
                                        oneofs:NULL
                                    oneofCount:0
                                         enums:NULL
                                     enumCount:0
                                        ranges:NULL
                                    rangeCount:0
                                   storageSize:sizeof(Request11001__storage_)
                                    wireFormat:NO];
    NSAssert(descriptor == nil, @"Startup recursed!");
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - Request11001_Params

@implementation Request11001_Params


typedef struct Request11001_Params__storage_ {
  uint32_t _has_storage_[0];
} Request11001_Params__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[Request11001_Params class]
                                     rootClass:[TokenRoot class]
                                          file:TokenRoot_FileDescriptor()
                                        fields:NULL
                                    fieldCount:0
                                        oneofs:NULL
                                    oneofCount:0
                                         enums:NULL
                                     enumCount:0
                                        ranges:NULL
                                    rangeCount:0
                                   storageSize:sizeof(Request11001_Params__storage_)
                                    wireFormat:NO];
    NSAssert(descriptor == nil, @"Startup recursed!");
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - Response11001

@implementation Response11001

@dynamic hasCommon, common;
@dynamic hasData_p, data_p;

typedef struct Response11001__storage_ {
  uint32_t _has_storage_[1];
  ResponseCommon *common;
  Response11001_Data *data_p;
} Response11001__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "common",
        .number = Response11001_FieldNumber_Common,
        .hasIndex = 0,
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
        .offset = offsetof(Response11001__storage_, common),
        .defaultValue.valueMessage = nil,
        .dataTypeSpecific.className = GPBStringifySymbol(ResponseCommon),
        .fieldOptions = NULL,
      },
      {
        .name = "data_p",
        .number = Response11001_FieldNumber_Data_p,
        .hasIndex = 1,
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
        .offset = offsetof(Response11001__storage_, data_p),
        .defaultValue.valueMessage = nil,
        .dataTypeSpecific.className = GPBStringifySymbol(Response11001_Data),
        .fieldOptions = NULL,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[Response11001 class]
                                     rootClass:[TokenRoot class]
                                          file:TokenRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:sizeof(fields) / sizeof(GPBMessageFieldDescription)
                                        oneofs:NULL
                                    oneofCount:0
                                         enums:NULL
                                     enumCount:0
                                        ranges:NULL
                                    rangeCount:0
                                   storageSize:sizeof(Response11001__storage_)
                                    wireFormat:NO];
    NSAssert(descriptor == nil, @"Startup recursed!");
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - Response11001_Data

@implementation Response11001_Data

@dynamic qiniuToken;

typedef struct Response11001_Data__storage_ {
  uint32_t _has_storage_[1];
  NSString *qiniuToken;
} Response11001_Data__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "qiniuToken",
        .number = Response11001_Data_FieldNumber_QiniuToken,
        .hasIndex = 0,
        .flags = GPBFieldOptional | GPBFieldTextFormatNameCustom,
        .dataType = GPBDataTypeString,
        .offset = offsetof(Response11001_Data__storage_, qiniuToken),
        .defaultValue.valueString = nil,
        .dataTypeSpecific.className = NULL,
        .fieldOptions = NULL,
      },
    };
#if GPBOBJC_SKIP_MESSAGE_TEXTFORMAT_EXTRAS
    const char *extraTextFormatInfo = NULL;
#else
    static const char *extraTextFormatInfo = "\001\001\n\000";
#endif  // GPBOBJC_SKIP_MESSAGE_TEXTFORMAT_EXTRAS
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[Response11001_Data class]
                                     rootClass:[TokenRoot class]
                                          file:TokenRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:sizeof(fields) / sizeof(GPBMessageFieldDescription)
                                        oneofs:NULL
                                    oneofCount:0
                                         enums:NULL
                                     enumCount:0
                                        ranges:NULL
                                    rangeCount:0
                                   storageSize:sizeof(Response11001_Data__storage_)
                                    wireFormat:NO
                           extraTextFormatInfo:extraTextFormatInfo];
    NSAssert(descriptor == nil, @"Startup recursed!");
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - Request11002

@implementation Request11002

@dynamic hasCommon, common;
@dynamic hasParams, params;

typedef struct Request11002__storage_ {
  uint32_t _has_storage_[1];
  RequestCommon *common;
  Request11002_Params *params;
} Request11002__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "common",
        .number = Request11002_FieldNumber_Common,
        .hasIndex = 0,
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
        .offset = offsetof(Request11002__storage_, common),
        .defaultValue.valueMessage = nil,
        .dataTypeSpecific.className = GPBStringifySymbol(RequestCommon),
        .fieldOptions = NULL,
      },
      {
        .name = "params",
        .number = Request11002_FieldNumber_Params,
        .hasIndex = 1,
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
        .offset = offsetof(Request11002__storage_, params),
        .defaultValue.valueMessage = nil,
        .dataTypeSpecific.className = GPBStringifySymbol(Request11002_Params),
        .fieldOptions = NULL,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[Request11002 class]
                                     rootClass:[TokenRoot class]
                                          file:TokenRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:sizeof(fields) / sizeof(GPBMessageFieldDescription)
                                        oneofs:NULL
                                    oneofCount:0
                                         enums:NULL
                                     enumCount:0
                                        ranges:NULL
                                    rangeCount:0
                                   storageSize:sizeof(Request11002__storage_)
                                    wireFormat:NO];
    NSAssert(descriptor == nil, @"Startup recursed!");
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - Request11002_Params

@implementation Request11002_Params

@dynamic oldTokenCannotUse;

typedef struct Request11002_Params__storage_ {
  uint32_t _has_storage_[1];
  BOOL oldTokenCannotUse;
} Request11002_Params__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "oldTokenCannotUse",
        .number = Request11002_Params_FieldNumber_OldTokenCannotUse,
        .hasIndex = 0,
        .flags = GPBFieldOptional | GPBFieldTextFormatNameCustom,
        .dataType = GPBDataTypeBool,
        .offset = offsetof(Request11002_Params__storage_, oldTokenCannotUse),
        .defaultValue.valueBool = NO,
        .dataTypeSpecific.className = NULL,
        .fieldOptions = NULL,
      },
    };
#if GPBOBJC_SKIP_MESSAGE_TEXTFORMAT_EXTRAS
    const char *extraTextFormatInfo = NULL;
#else
    static const char *extraTextFormatInfo = "\001\001\021\000";
#endif  // GPBOBJC_SKIP_MESSAGE_TEXTFORMAT_EXTRAS
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[Request11002_Params class]
                                     rootClass:[TokenRoot class]
                                          file:TokenRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:sizeof(fields) / sizeof(GPBMessageFieldDescription)
                                        oneofs:NULL
                                    oneofCount:0
                                         enums:NULL
                                     enumCount:0
                                        ranges:NULL
                                    rangeCount:0
                                   storageSize:sizeof(Request11002_Params__storage_)
                                    wireFormat:NO
                           extraTextFormatInfo:extraTextFormatInfo];
    NSAssert(descriptor == nil, @"Startup recursed!");
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - Response11002

@implementation Response11002

@dynamic hasCommon, common;
@dynamic hasData_p, data_p;

typedef struct Response11002__storage_ {
  uint32_t _has_storage_[1];
  ResponseCommon *common;
  Response11002_Data *data_p;
} Response11002__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "common",
        .number = Response11002_FieldNumber_Common,
        .hasIndex = 0,
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
        .offset = offsetof(Response11002__storage_, common),
        .defaultValue.valueMessage = nil,
        .dataTypeSpecific.className = GPBStringifySymbol(ResponseCommon),
        .fieldOptions = NULL,
      },
      {
        .name = "data_p",
        .number = Response11002_FieldNumber_Data_p,
        .hasIndex = 1,
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
        .offset = offsetof(Response11002__storage_, data_p),
        .defaultValue.valueMessage = nil,
        .dataTypeSpecific.className = GPBStringifySymbol(Response11002_Data),
        .fieldOptions = NULL,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[Response11002 class]
                                     rootClass:[TokenRoot class]
                                          file:TokenRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:sizeof(fields) / sizeof(GPBMessageFieldDescription)
                                        oneofs:NULL
                                    oneofCount:0
                                         enums:NULL
                                     enumCount:0
                                        ranges:NULL
                                    rangeCount:0
                                   storageSize:sizeof(Response11002__storage_)
                                    wireFormat:NO];
    NSAssert(descriptor == nil, @"Startup recursed!");
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - Response11002_Data

@implementation Response11002_Data

@dynamic rongyunToken;

typedef struct Response11002_Data__storage_ {
  uint32_t _has_storage_[1];
  NSString *rongyunToken;
} Response11002_Data__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "rongyunToken",
        .number = Response11002_Data_FieldNumber_RongyunToken,
        .hasIndex = 0,
        .flags = GPBFieldOptional | GPBFieldTextFormatNameCustom,
        .dataType = GPBDataTypeString,
        .offset = offsetof(Response11002_Data__storage_, rongyunToken),
        .defaultValue.valueString = nil,
        .dataTypeSpecific.className = NULL,
        .fieldOptions = NULL,
      },
    };
#if GPBOBJC_SKIP_MESSAGE_TEXTFORMAT_EXTRAS
    const char *extraTextFormatInfo = NULL;
#else
    static const char *extraTextFormatInfo = "\001\001\014\000";
#endif  // GPBOBJC_SKIP_MESSAGE_TEXTFORMAT_EXTRAS
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[Response11002_Data class]
                                     rootClass:[TokenRoot class]
                                          file:TokenRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:sizeof(fields) / sizeof(GPBMessageFieldDescription)
                                        oneofs:NULL
                                    oneofCount:0
                                         enums:NULL
                                     enumCount:0
                                        ranges:NULL
                                    rangeCount:0
                                   storageSize:sizeof(Response11002_Data__storage_)
                                    wireFormat:NO
                           extraTextFormatInfo:extraTextFormatInfo];
    NSAssert(descriptor == nil, @"Startup recursed!");
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end


// @@protoc_insertion_point(global_scope)
