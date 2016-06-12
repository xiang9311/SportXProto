// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: common.proto

#import "GPBProtocolBuffers.h"

#if GOOGLE_PROTOBUF_OBJC_GEN_VERSION != 30001
#error This file was generated by a different version of protoc which is incompatible with your Protocol Buffer library sources.
#endif

// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

CF_EXTERN_C_BEGIN

@class BriefGym;
@class BriefUser;
@class CourseTime;
@class Trend;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - Enum CardType

typedef GPB_ENUM(CardType) {
  /// Value used if any message's field encounters a value that is not defined
  /// by this enum. The message will also have C functions to get/set the rawValue
  /// of the field.
  CardType_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  /// 一次 体验卡
  CardType_Once = 0,

  /// 月卡
  CardType_Month = 1,

  /// 季度卡
  CardType_Quarter = 2,
};

GPBEnumDescriptor *CardType_EnumDescriptor(void);

/// Checks to see if the given value is defined by the enum or was not known at
/// the time this source was generated.
BOOL CardType_IsValidValue(int32_t value);

#pragma mark - Enum EquipmentType

typedef GPB_ENUM(EquipmentType) {
  /// Value used if any message's field encounters a value that is not defined
  /// by this enum. The message will also have C functions to get/set the rawValue
  /// of the field.
  EquipmentType_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  /// 跑步机
  EquipmentType_PaoBuJi = 0,

  /// 淋浴房
  EquipmentType_LinYuFang = 1,
};

GPBEnumDescriptor *EquipmentType_EnumDescriptor(void);

/// Checks to see if the given value is defined by the enum or was not known at
/// the time this source was generated.
BOOL EquipmentType_IsValidValue(int32_t value);

#pragma mark - Enum Sex

typedef GPB_ENUM(Sex) {
  /// Value used if any message's field encounters a value that is not defined
  /// by this enum. The message will also have C functions to get/set the rawValue
  /// of the field.
  Sex_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  /// 男性
  Sex_Male = 0,

  /// 女性
  Sex_Female = 1,
};

GPBEnumDescriptor *Sex_EnumDescriptor(void);

/// Checks to see if the given value is defined by the enum or was not known at
/// the time this source was generated.
BOOL Sex_IsValidValue(int32_t value);

#pragma mark - Enum Banner_BannerType

typedef GPB_ENUM(Banner_BannerType) {
  /// Value used if any message's field encounters a value that is not defined
  /// by this enum. The message will also have C functions to get/set the rawValue
  /// of the field.
  Banner_BannerType_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  /// 跳转url
  Banner_BannerType_URL = 0,

  /// 跳转动态
  Banner_BannerType_Trend = 1,

  /// 用户
  Banner_BannerType_User = 2,
};

GPBEnumDescriptor *Banner_BannerType_EnumDescriptor(void);

/// Checks to see if the given value is defined by the enum or was not known at
/// the time this source was generated.
BOOL Banner_BannerType_IsValidValue(int32_t value);

#pragma mark - CommonRoot

/// Exposes the extension registry for this file.
///
/// The base class provides:
/// @code
///   + (GPBExtensionRegistry *)extensionRegistry;
/// @endcode
/// which is a @c GPBExtensionRegistry that includes all the extensions defined by
/// this file and all files that it depends on.
@interface CommonRoot : GPBRootObject
@end

#pragma mark - RequestCommon

typedef GPB_ENUM(RequestCommon_FieldNumber) {
  RequestCommon_FieldNumber_Userid = 1,
  RequestCommon_FieldNumber_Userkey = 2,
  RequestCommon_FieldNumber_Cmdid = 3,
  RequestCommon_FieldNumber_Timestamp = 4,
  RequestCommon_FieldNumber_Version = 5,
  RequestCommon_FieldNumber_Platform = 6,
};

////////////////////////////////////   请求和返回中包含的common        /////////////////////
@interface RequestCommon : GPBMessage

@property(nonatomic, readwrite) int32_t userid;

@property(nonatomic, readwrite, copy, null_resettable) NSString *userkey;

@property(nonatomic, readwrite) int32_t cmdid;

@property(nonatomic, readwrite) int64_t timestamp;

/// 版本, 1.0.0
@property(nonatomic, readwrite, copy, null_resettable) NSString *version;

/// 1-Android, 2-iOS
@property(nonatomic, readwrite) int32_t platform;

@end

#pragma mark - ResponseCommon

typedef GPB_ENUM(ResponseCommon_FieldNumber) {
  ResponseCommon_FieldNumber_Code = 1,
  ResponseCommon_FieldNumber_Message = 2,
  ResponseCommon_FieldNumber_Cmdid = 3,
  ResponseCommon_FieldNumber_Timestamp = 4,
  ResponseCommon_FieldNumber_Userid = 5,
};

@interface ResponseCommon : GPBMessage

///状态码   0：正常  其他数值表示有错误
@property(nonatomic, readwrite) int32_t code;

@property(nonatomic, readwrite, copy, null_resettable) NSString *message;

@property(nonatomic, readwrite) int32_t cmdid;

@property(nonatomic, readwrite) int64_t timestamp;

@property(nonatomic, readwrite) int32_t userid;

@end

#pragma mark - Trend

typedef GPB_ENUM(Trend_FieldNumber) {
  Trend_FieldNumber_Id_p = 1,
  Trend_FieldNumber_BriefUser = 2,
  Trend_FieldNumber_CreateTime = 3,
  Trend_FieldNumber_GymId = 4,
  Trend_FieldNumber_GymName = 5,
  Trend_FieldNumber_Content = 6,
  Trend_FieldNumber_ImgsArray = 7,
  Trend_FieldNumber_LikeCount = 8,
  Trend_FieldNumber_CommentCount = 9,
  Trend_FieldNumber_IsLiked = 10,
};

/// 动态
@interface Trend : GPBMessage

/// 动态id
@property(nonatomic, readwrite) int32_t id_p;

/// 用户信息
@property(nonatomic, readwrite, strong, null_resettable) BriefUser *briefUser;
/// Test to see if @c briefUser has been set.
@property(nonatomic, readwrite) BOOL hasBriefUser;

/// 创建时间的毫秒时间戳
@property(nonatomic, readwrite) int64_t createTime;

/// 健身房id   可能为空
@property(nonatomic, readwrite) int32_t gymId;

/// 健身房名字 可能为空
@property(nonatomic, readwrite, copy, null_resettable) NSString *gymName;

/// 内容 内容中可能包含“#SportX#”类型的话题
@property(nonatomic, readwrite, copy, null_resettable) NSString *content;

/// 图片
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<NSString*> *imgsArray;
/// The number of items in @c imgsArray without causing the array to be created.
@property(nonatomic, readonly) NSUInteger imgsArray_Count;

/// 点赞量
@property(nonatomic, readwrite) int32_t likeCount;

/// 评论量
@property(nonatomic, readwrite) int32_t commentCount;

/// 是否点赞了
@property(nonatomic, readwrite) BOOL isLiked;

@end

#pragma mark - Banner

typedef GPB_ENUM(Banner_FieldNumber) {
  Banner_FieldNumber_Id_p = 1,
  Banner_FieldNumber_CoverURL = 2,
  Banner_FieldNumber_Type = 3,
  Banner_FieldNumber_WebURL = 4,
  Banner_FieldNumber_TrendId = 5,
  Banner_FieldNumber_UserId = 6,
};

/// banner
@interface Banner : GPBMessage

/// banner id
@property(nonatomic, readwrite) int32_t id_p;

/// banner cover Url
@property(nonatomic, readwrite, copy, null_resettable) NSString *coverURL;

/// banner 的种类
@property(nonatomic, readwrite) Banner_BannerType type;

/// 如果是Url，则这个是需要跳转的url
@property(nonatomic, readwrite, copy, null_resettable) NSString *webURL;

/// 如果是动态，这个是跳转的动态的id
@property(nonatomic, readwrite) int32_t trendId;

/// 如果是用户，则这个是用户的id，跳转到用户主页
@property(nonatomic, readwrite) int32_t userId;

@end

/// Fetches the raw value of a @c Banner's @c type property, even
/// if the value was not defined by the enum at the time the code was generated.
int32_t Banner_Type_RawValue(Banner *message);
/// Sets the raw value of an @c Banner's @c type property, allowing
/// it to be set to a value that was not defined by the enum at the time the code
/// was generated.
void SetBanner_Type_RawValue(Banner *message, int32_t value);

#pragma mark - BriefUser

typedef GPB_ENUM(BriefUser_FieldNumber) {
  BriefUser_FieldNumber_UserId = 1,
  BriefUser_FieldNumber_UserName = 2,
  BriefUser_FieldNumber_UserAvatar = 3,
};

/// briefUser
@interface BriefUser : GPBMessage

/// userid
@property(nonatomic, readwrite) int32_t userId;

/// 用户名
@property(nonatomic, readwrite, copy, null_resettable) NSString *userName;

/// 用户头像
@property(nonatomic, readwrite, copy, null_resettable) NSString *userAvatar;

@end

#pragma mark - BriefGym

typedef GPB_ENUM(BriefGym_FieldNumber) {
  BriefGym_FieldNumber_Id_p = 1,
  BriefGym_FieldNumber_GymName = 2,
  BriefGym_FieldNumber_Place = 4,
  BriefGym_FieldNumber_Latitude = 5,
  BriefGym_FieldNumber_Longitude = 6,
  BriefGym_FieldNumber_Eqm = 7,
  BriefGym_FieldNumber_GymAvatar = 8,
  BriefGym_FieldNumber_GymCover = 9,
};

/// BriefGym 场馆
@interface BriefGym : GPBMessage

/// 场馆id
@property(nonatomic, readwrite) int32_t id_p;

/// 场馆名字
@property(nonatomic, readwrite, copy, null_resettable) NSString *gymName;

/// 场馆所在位置
@property(nonatomic, readwrite, copy, null_resettable) NSString *place;

/// 场馆头像 小图
@property(nonatomic, readwrite, copy, null_resettable) NSString *gymAvatar;

/// 场馆使用的cover大图
@property(nonatomic, readwrite, copy, null_resettable) NSString *gymCover;

/// 纬度
@property(nonatomic, readwrite) float latitude;

/// 经度
@property(nonatomic, readwrite) float longitude;

/// 器材
@property(nonatomic, readwrite, copy, null_resettable) NSString *eqm;

@end

#pragma mark - DetailGym

typedef GPB_ENUM(DetailGym_FieldNumber) {
  DetailGym_FieldNumber_BriefGym = 1,
  DetailGym_FieldNumber_Courses = 3,
  DetailGym_FieldNumber_GymCards = 4,
  DetailGym_FieldNumber_GymCoversArray = 5,
  DetailGym_FieldNumber_GymIntro = 6,
};

/// DetailGym 场馆详情
@interface DetailGym : GPBMessage

/// 场馆简要信息
@property(nonatomic, readwrite, strong, null_resettable) BriefGym *briefGym;
/// Test to see if @c briefGym has been set.
@property(nonatomic, readwrite) BOOL hasBriefGym;

/// 课程
@property(nonatomic, readwrite, copy, null_resettable) NSString *courses;

/// 健身卡
@property(nonatomic, readwrite, copy, null_resettable) NSString *gymCards;

/// 场馆图片
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<NSString*> *gymCoversArray;
/// The number of items in @c gymCoversArray without causing the array to be created.
@property(nonatomic, readonly) NSUInteger gymCoversArray_Count;

/// 场馆介绍
@property(nonatomic, readwrite, copy, null_resettable) NSString *gymIntro;

@end

#pragma mark - Equipment

typedef GPB_ENUM(Equipment_FieldNumber) {
  Equipment_FieldNumber_Name = 1,
  Equipment_FieldNumber_Count = 2,
  Equipment_FieldNumber_EquipmentType = 3,
};

@interface Equipment : GPBMessage

/// 器材、设施名
@property(nonatomic, readwrite, copy, null_resettable) NSString *name;

/// 器材数量
@property(nonatomic, readwrite) int32_t count;

/// enum
@property(nonatomic, readwrite) EquipmentType equipmentType;

@end

/// Fetches the raw value of a @c Equipment's @c equipmentType property, even
/// if the value was not defined by the enum at the time the code was generated.
int32_t Equipment_EquipmentType_RawValue(Equipment *message);
/// Sets the raw value of an @c Equipment's @c equipmentType property, allowing
/// it to be set to a value that was not defined by the enum at the time the code
/// was generated.
void SetEquipment_EquipmentType_RawValue(Equipment *message, int32_t value);

#pragma mark - Course

typedef GPB_ENUM(Course_FieldNumber) {
  Course_FieldNumber_Name = 1,
  Course_FieldNumber_Week = 2,
  Course_FieldNumber_CourseTime = 3,
};

@interface Course : GPBMessage

/// 课程名称
@property(nonatomic, readwrite, copy, null_resettable) NSString *name;

/// [1-7] [周一 到周日] 0 是每天
@property(nonatomic, readwrite) int32_t week;

/// 课程时间
@property(nonatomic, readwrite, strong, null_resettable) CourseTime *courseTime;
/// Test to see if @c courseTime has been set.
@property(nonatomic, readwrite) BOOL hasCourseTime;

@end

#pragma mark - CourseTime

typedef GPB_ENUM(CourseTime_FieldNumber) {
  CourseTime_FieldNumber_FromHour = 1,
  CourseTime_FieldNumber_FromMinite = 2,
  CourseTime_FieldNumber_ToHour = 3,
  CourseTime_FieldNumber_ToMinite = 4,
};

@interface CourseTime : GPBMessage

/// 开始时间 --小时            24小时计时法
@property(nonatomic, readwrite) int32_t fromHour;

/// 开始时间 --分钟
@property(nonatomic, readwrite) int32_t fromMinite;

/// 结束时间 --小时
@property(nonatomic, readwrite) int32_t toHour;

/// 结束时间 --分钟
@property(nonatomic, readwrite) int32_t toMinite;

@end

#pragma mark - GymCard

typedef GPB_ENUM(GymCard_FieldNumber) {
  GymCard_FieldNumber_CardType = 1,
  GymCard_FieldNumber_Price = 2,
};

@interface GymCard : GPBMessage

/// 卡片类型
@property(nonatomic, readwrite) CardType cardType;

/// 价格
@property(nonatomic, readwrite) float price;

@end

/// Fetches the raw value of a @c GymCard's @c cardType property, even
/// if the value was not defined by the enum at the time the code was generated.
int32_t GymCard_CardType_RawValue(GymCard *message);
/// Sets the raw value of an @c GymCard's @c cardType property, allowing
/// it to be set to a value that was not defined by the enum at the time the code
/// was generated.
void SetGymCard_CardType_RawValue(GymCard *message, int32_t value);

#pragma mark - CommentMessage

typedef GPB_ENUM(CommentMessage_FieldNumber) {
  CommentMessage_FieldNumber_MessageId = 1,
  CommentMessage_FieldNumber_MessageContent = 2,
  CommentMessage_FieldNumber_Avatar = 3,
  CommentMessage_FieldNumber_CreateTime = 4,
  CommentMessage_FieldNumber_TrendId = 5,
};

/// 评论消息
@interface CommentMessage : GPBMessage

/// 消息的id
@property(nonatomic, readwrite) int32_t messageId;

/// 消息的内容
@property(nonatomic, readwrite, copy, null_resettable) NSString *messageContent;

/// 消息所使用的头像 如果是"sportx"则是官方头像
@property(nonatomic, readwrite, copy, null_resettable) NSString *avatar;

/// 创建时间 毫秒时间戳
@property(nonatomic, readwrite) int64_t createTime;

/// 消息对应的trendId
@property(nonatomic, readwrite) int32_t trendId;

@end

#pragma mark - Comment

typedef GPB_ENUM(Comment_FieldNumber) {
  Comment_FieldNumber_BriefUser = 1,
  Comment_FieldNumber_CommentId = 2,
  Comment_FieldNumber_CommentContent = 3,
  Comment_FieldNumber_TrendId = 4,
  Comment_FieldNumber_ToUserid = 5,
  Comment_FieldNumber_ToUserName = 6,
  Comment_FieldNumber_CreateTime = 7,
  Comment_FieldNumber_GymName = 8,
  Comment_FieldNumber_GymId = 9,
};

/// trend(动态) 的评论
@interface Comment : GPBMessage

/// 发评论的人
@property(nonatomic, readwrite, strong, null_resettable) BriefUser *briefUser;
/// Test to see if @c briefUser has been set.
@property(nonatomic, readwrite) BOOL hasBriefUser;

/// 评论的id
@property(nonatomic, readwrite) int32_t commentId;

/// 评论的内容
@property(nonatomic, readwrite, copy, null_resettable) NSString *commentContent;

/// 评论动态的id
@property(nonatomic, readwrite) int32_t trendId;

/// 回复某人的评论时需要加上对应的user的id和name，如果没有，则是直接评论动态
@property(nonatomic, readwrite) int32_t toUserid;

@property(nonatomic, readwrite, copy, null_resettable) NSString *toUserName;

/// 时间
@property(nonatomic, readwrite) int64_t createTime;

/// 场馆名 地点
@property(nonatomic, readwrite, copy, null_resettable) NSString *gymName;

/// 场馆id
@property(nonatomic, readwrite) int32_t gymId;

@end

#pragma mark - TrendBriefMessage

typedef GPB_ENUM(TrendBriefMessage_FieldNumber) {
  TrendBriefMessage_FieldNumber_LastAvatar = 1,
  TrendBriefMessage_FieldNumber_Count = 2,
};

/// trend 的简要评论信息
@interface TrendBriefMessage : GPBMessage

/// 显示的头像
@property(nonatomic, readwrite, copy, null_resettable) NSString *lastAvatar;

/// 消息数量
@property(nonatomic, readwrite) int32_t count;

@end

#pragma mark - DetailUser

typedef GPB_ENUM(DetailUser_FieldNumber) {
  DetailUser_FieldNumber_UserId = 1,
  DetailUser_FieldNumber_UserName = 2,
  DetailUser_FieldNumber_UserAvatar = 3,
  DetailUser_FieldNumber_Sex = 4,
  DetailUser_FieldNumber_Sign = 5,
  DetailUser_FieldNumber_TrendsArray = 6,
  DetailUser_FieldNumber_IsFollowed = 7,
  DetailUser_FieldNumber_GuanzhuCount = 8,
  DetailUser_FieldNumber_FensiCount = 9,
  DetailUser_FieldNumber_TrendCount = 10,
  DetailUser_FieldNumber_TrendMaxCountPerPage = 11,
};

/// 一般用作看到的别人的详情
@interface DetailUser : GPBMessage

/// 用户id
@property(nonatomic, readwrite) int32_t userId;

/// 用户名
@property(nonatomic, readwrite, copy, null_resettable) NSString *userName;

/// 用户头像
@property(nonatomic, readwrite, copy, null_resettable) NSString *userAvatar;

/// 性别
@property(nonatomic, readwrite) Sex sex;

/// 签名
@property(nonatomic, readwrite, copy, null_resettable) NSString *sign;

/// 最近态列表
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<Trend*> *trendsArray;
/// The number of items in @c trendsArray without causing the array to be created.
@property(nonatomic, readonly) NSUInteger trendsArray_Count;

/// 是否已经关注
@property(nonatomic, readwrite) BOOL isFollowed;

/// 他关注的人的数量
@property(nonatomic, readwrite) int32_t guanzhuCount;

/// 他的粉丝数量
@property(nonatomic, readwrite) int32_t fensiCount;

/// 动态的数量
@property(nonatomic, readwrite) int32_t trendCount;

/// 判断能否加载更多（加载更多请调用10005）
@property(nonatomic, readwrite) int32_t trendMaxCountPerPage;

@end

/// Fetches the raw value of a @c DetailUser's @c sex property, even
/// if the value was not defined by the enum at the time the code was generated.
int32_t DetailUser_Sex_RawValue(DetailUser *message);
/// Sets the raw value of an @c DetailUser's @c sex property, allowing
/// it to be set to a value that was not defined by the enum at the time the code
/// was generated.
void SetDetailUser_Sex_RawValue(DetailUser *message, int32_t value);

#pragma mark - SearchedUser

typedef GPB_ENUM(SearchedUser_FieldNumber) {
  SearchedUser_FieldNumber_UserId = 1,
  SearchedUser_FieldNumber_UserName = 2,
  SearchedUser_FieldNumber_UserAvatar = 3,
  SearchedUser_FieldNumber_Sign = 4,
  SearchedUser_FieldNumber_ImagesArray = 5,
};

/// 搜索得到的用户简要信息
@interface SearchedUser : GPBMessage

/// id
@property(nonatomic, readwrite) int32_t userId;

@property(nonatomic, readwrite, copy, null_resettable) NSString *userName;

@property(nonatomic, readwrite, copy, null_resettable) NSString *userAvatar;

/// 用户签名
@property(nonatomic, readwrite, copy, null_resettable) NSString *sign;

/// 图片数组，一般需要三个，但有可能少于3个
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<NSString*> *imagesArray;
/// The number of items in @c imagesArray without causing the array to be created.
@property(nonatomic, readonly) NSUInteger imagesArray_Count;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
