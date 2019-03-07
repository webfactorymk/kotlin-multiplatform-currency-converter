#import <Foundation/Foundation.h>

@class RPMMockProvider, RPMCoreCurrency, RPMCoreExchangeRateData, RPMCoreRate;

@protocol RPMCoreExchangeRateProvider;

NS_ASSUME_NONNULL_BEGIN

@interface KotlinBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface KotlinBase (KotlinBaseCopying) <NSCopying>
@end;

__attribute__((objc_runtime_name("KotlinMutableSet")))
__attribute__((swift_name("KotlinMutableSet")))
@interface RPMMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((objc_runtime_name("KotlinMutableDictionary")))
__attribute__((swift_name("KotlinMutableDictionary")))
@interface RPMMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((objc_runtime_name("KotlinNumber")))
__attribute__((swift_name("KotlinNumber")))
@interface RPMNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((objc_runtime_name("KotlinByte")))
__attribute__((swift_name("KotlinByte")))
@interface RPMByte : RPMNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((objc_runtime_name("KotlinUByte")))
__attribute__((swift_name("KotlinUByte")))
@interface RPMUByte : RPMNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((objc_runtime_name("KotlinShort")))
__attribute__((swift_name("KotlinShort")))
@interface RPMShort : RPMNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((objc_runtime_name("KotlinUShort")))
__attribute__((swift_name("KotlinUShort")))
@interface RPMUShort : RPMNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((objc_runtime_name("KotlinInt")))
__attribute__((swift_name("KotlinInt")))
@interface RPMInt : RPMNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((objc_runtime_name("KotlinUInt")))
__attribute__((swift_name("KotlinUInt")))
@interface RPMUInt : RPMNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((objc_runtime_name("KotlinLong")))
__attribute__((swift_name("KotlinLong")))
@interface RPMLong : RPMNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((objc_runtime_name("KotlinULong")))
__attribute__((swift_name("KotlinULong")))
@interface RPMULong : RPMNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((objc_runtime_name("KotlinFloat")))
__attribute__((swift_name("KotlinFloat")))
@interface RPMFloat : RPMNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((objc_runtime_name("KotlinDouble")))
__attribute__((swift_name("KotlinDouble")))
@interface RPMDouble : RPMNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((objc_runtime_name("KotlinBoolean")))
__attribute__((swift_name("KotlinBoolean")))
@interface RPMBoolean : RPMNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((swift_name("CoreExchangeRateProvider")))
@protocol RPMCoreExchangeRateProvider
@required
- (NSSet<RPMCoreCurrency *> *)getAvailableBaseCurrencies __attribute__((swift_name("getAvailableBaseCurrencies()")));
- (NSArray<RPMCoreExchangeRateData *> *)getExchangeRates __attribute__((swift_name("getExchangeRates()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MockProvider")))
@interface RPMMockProvider : KotlinBase <RPMCoreExchangeRateProvider>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MockValuesKt")))
@interface RPMMockValuesKt : KotlinBase
@property (class, readonly) RPMCoreExchangeRateData *mockRates_EurUsdYen;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreCurrency")))
@interface RPMCoreCurrency : KotlinBase
- (instancetype)initWithCaseInsensitiveTagId:(NSString *)caseInsensitiveTagId preferredConversionBase:(RPMCoreCurrency * _Nullable)preferredConversionBase __attribute__((swift_name("init(caseInsensitiveTagId:preferredConversionBase:)"))) __attribute__((objc_designated_initializer));
@property (readonly) RPMCoreCurrency * _Nullable preferredConversionBase;
@property (readonly) NSString *tagId;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreExchangeRateData")))
@interface RPMCoreExchangeRateData : KotlinBase
- (instancetype)initWithBase:(RPMCoreCurrency *)base timestampUtc:(int64_t)timestampUtc rates:(NSDictionary<RPMCoreCurrency *, RPMCoreRate *> *)rates __attribute__((swift_name("init(base:timestampUtc:rates:)"))) __attribute__((objc_designated_initializer));
- (RPMCoreCurrency *)component1 __attribute__((swift_name("component1()")));
- (int64_t)component2 __attribute__((swift_name("component2()")));
- (NSDictionary<RPMCoreCurrency *, RPMCoreRate *> *)component3 __attribute__((swift_name("component3()")));
- (RPMCoreExchangeRateData *)doCopyBase:(RPMCoreCurrency *)base timestampUtc:(int64_t)timestampUtc rates:(NSDictionary<RPMCoreCurrency *, RPMCoreRate *> *)rates __attribute__((swift_name("doCopy(base:timestampUtc:rates:)")));
@property (readonly) RPMCoreCurrency *base;
@property (readonly) NSDictionary<RPMCoreCurrency *, RPMCoreRate *> *rates;
@property (readonly) int64_t timestampUtc;
@end;

__attribute__((swift_name("CoreRate")))
@interface RPMCoreRate : KotlinBase
@property (readonly) float middleRate;
@end;

NS_ASSUME_NONNULL_END
