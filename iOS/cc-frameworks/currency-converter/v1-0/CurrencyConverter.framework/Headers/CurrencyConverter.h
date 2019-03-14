#import <Foundation/Foundation.h>

@class CurrencyConverterCoreCurrencyConverter, CurrencyConverterCoreConversionResult, CurrencyConverterCoreCurrency, CurrencyConverterCoreFromToCurrencyPair, CurrencyConverterCoreRate, CurrencyConverterCoreExchangeRateData;

@protocol CurrencyConverterCoreExchangeRateProvider;

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
@interface CurrencyConverterMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((objc_runtime_name("KotlinMutableDictionary")))
__attribute__((swift_name("KotlinMutableDictionary")))
@interface CurrencyConverterMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((objc_runtime_name("KotlinNumber")))
__attribute__((swift_name("KotlinNumber")))
@interface CurrencyConverterNumber : NSNumber
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
@interface CurrencyConverterByte : CurrencyConverterNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((objc_runtime_name("KotlinUByte")))
__attribute__((swift_name("KotlinUByte")))
@interface CurrencyConverterUByte : CurrencyConverterNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((objc_runtime_name("KotlinShort")))
__attribute__((swift_name("KotlinShort")))
@interface CurrencyConverterShort : CurrencyConverterNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((objc_runtime_name("KotlinUShort")))
__attribute__((swift_name("KotlinUShort")))
@interface CurrencyConverterUShort : CurrencyConverterNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((objc_runtime_name("KotlinInt")))
__attribute__((swift_name("KotlinInt")))
@interface CurrencyConverterInt : CurrencyConverterNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((objc_runtime_name("KotlinUInt")))
__attribute__((swift_name("KotlinUInt")))
@interface CurrencyConverterUInt : CurrencyConverterNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((objc_runtime_name("KotlinLong")))
__attribute__((swift_name("KotlinLong")))
@interface CurrencyConverterLong : CurrencyConverterNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((objc_runtime_name("KotlinULong")))
__attribute__((swift_name("KotlinULong")))
@interface CurrencyConverterULong : CurrencyConverterNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((objc_runtime_name("KotlinFloat")))
__attribute__((swift_name("KotlinFloat")))
@interface CurrencyConverterFloat : CurrencyConverterNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((objc_runtime_name("KotlinDouble")))
__attribute__((swift_name("KotlinDouble")))
@interface CurrencyConverterDouble : CurrencyConverterNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((objc_runtime_name("KotlinBoolean")))
__attribute__((swift_name("KotlinBoolean")))
@interface CurrencyConverterBoolean : CurrencyConverterNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfigurationKt")))
@interface CurrencyConverterConfigurationKt : KotlinBase
+ (CurrencyConverterCoreCurrencyConverter *)provideCurrencyConverter __attribute__((swift_name("provideCurrencyConverter()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreCurrencyConverter")))
@interface CurrencyConverterCoreCurrencyConverter : KotlinBase
- (CurrencyConverterCoreConversionResult *)convertFrom:(CurrencyConverterCoreCurrency *)from to:(CurrencyConverterCoreCurrency *)to amountToConvert:(float)amountToConvert __attribute__((swift_name("convert(from:to:amountToConvert:)")));
- (CurrencyConverterCoreConversionResult *)convertPair:(CurrencyConverterCoreFromToCurrencyPair *)pair amountToConvert:(float)amountToConvert __attribute__((swift_name("convert(pair:amountToConvert:)")));
- (CurrencyConverterCoreCurrency * _Nullable)findCurrencyByTagTag:(NSString *)tag __attribute__((swift_name("findCurrencyByTag(tag:)")));
- (NSSet<CurrencyConverterCoreCurrency *> *)getAvailableCurrencies __attribute__((swift_name("getAvailableCurrencies()")));
- (id<CurrencyConverterCoreExchangeRateProvider>)getExchangeRateProvider __attribute__((swift_name("getExchangeRateProvider()")));
- (BOOL)isRateAvailableFrom:(CurrencyConverterCoreCurrency *)from to:(CurrencyConverterCoreCurrency *)to __attribute__((swift_name("isRateAvailable(from:to:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversionResult")))
@interface CurrencyConverterCoreConversionResult : KotlinBase
- (instancetype)initWithFrom:(CurrencyConverterCoreCurrency *)from to:(CurrencyConverterCoreCurrency *)to baseCurrency:(CurrencyConverterCoreCurrency *)baseCurrency timestampUtc:(CurrencyConverterLong * _Nullable)timestampUtc rate:(CurrencyConverterCoreRate *)rate __attribute__((swift_name("init(from:to:baseCurrency:timestampUtc:rate:)"))) __attribute__((objc_designated_initializer));
- (CurrencyConverterCoreCurrency *)component1 __attribute__((swift_name("component1()")));
- (CurrencyConverterCoreCurrency *)component2 __attribute__((swift_name("component2()")));
- (CurrencyConverterCoreCurrency *)component3 __attribute__((swift_name("component3()")));
- (CurrencyConverterLong * _Nullable)component4 __attribute__((swift_name("component4()")));
- (CurrencyConverterCoreRate *)component5 __attribute__((swift_name("component5()")));
- (CurrencyConverterCoreConversionResult *)doCopyFrom:(CurrencyConverterCoreCurrency *)from to:(CurrencyConverterCoreCurrency *)to baseCurrency:(CurrencyConverterCoreCurrency *)baseCurrency timestampUtc:(CurrencyConverterLong * _Nullable)timestampUtc rate:(CurrencyConverterCoreRate *)rate __attribute__((swift_name("doCopy(from:to:baseCurrency:timestampUtc:rate:)")));
@property (readonly) CurrencyConverterCoreCurrency *baseCurrency;
@property (readonly) CurrencyConverterCoreCurrency *from;
@property (readonly) CurrencyConverterCoreRate *rate;
@property (readonly) CurrencyConverterLong * _Nullable timestampUtc;
@property (readonly) CurrencyConverterCoreCurrency *to;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreCurrency")))
@interface CurrencyConverterCoreCurrency : KotlinBase
- (instancetype)initWithCaseInsensitiveTagId:(NSString *)caseInsensitiveTagId preferredConversionBase:(CurrencyConverterCoreCurrency * _Nullable)preferredConversionBase __attribute__((swift_name("init(caseInsensitiveTagId:preferredConversionBase:)"))) __attribute__((objc_designated_initializer));
@property (readonly) CurrencyConverterCoreCurrency * _Nullable preferredConversionBase;
@property (readonly) NSString *tagId;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFromToCurrencyPair")))
@interface CurrencyConverterCoreFromToCurrencyPair : KotlinBase
- (instancetype)initWithFrom:(CurrencyConverterCoreCurrency *)from to:(CurrencyConverterCoreCurrency *)to __attribute__((swift_name("init(from:to:)"))) __attribute__((objc_designated_initializer));
- (CurrencyConverterCoreCurrency *)component1 __attribute__((swift_name("component1()")));
- (CurrencyConverterCoreCurrency *)component2 __attribute__((swift_name("component2()")));
- (CurrencyConverterCoreFromToCurrencyPair *)doCopyFrom:(CurrencyConverterCoreCurrency *)from to:(CurrencyConverterCoreCurrency *)to __attribute__((swift_name("doCopy(from:to:)")));
@property (readonly) CurrencyConverterCoreCurrency *from;
@property (readonly) CurrencyConverterCoreCurrency *to;
@end;

__attribute__((swift_name("CoreExchangeRateProvider")))
@protocol CurrencyConverterCoreExchangeRateProvider
@required
- (NSSet<CurrencyConverterCoreCurrency *> *)getAvailableBaseCurrencies __attribute__((swift_name("getAvailableBaseCurrencies()")));
- (NSArray<CurrencyConverterCoreExchangeRateData *> *)getExchangeRates __attribute__((swift_name("getExchangeRates()")));
@end;

__attribute__((swift_name("CoreRate")))
@interface CurrencyConverterCoreRate : KotlinBase
@property (readonly) float middleRate;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreExchangeRateData")))
@interface CurrencyConverterCoreExchangeRateData : KotlinBase
- (instancetype)initWithBase:(CurrencyConverterCoreCurrency *)base timestampUtc:(int64_t)timestampUtc rates:(NSDictionary<CurrencyConverterCoreCurrency *, CurrencyConverterCoreRate *> *)rates __attribute__((swift_name("init(base:timestampUtc:rates:)"))) __attribute__((objc_designated_initializer));
- (CurrencyConverterCoreCurrency *)component1 __attribute__((swift_name("component1()")));
- (int64_t)component2 __attribute__((swift_name("component2()")));
- (NSDictionary<CurrencyConverterCoreCurrency *, CurrencyConverterCoreRate *> *)component3 __attribute__((swift_name("component3()")));
- (CurrencyConverterCoreExchangeRateData *)doCopyBase:(CurrencyConverterCoreCurrency *)base timestampUtc:(int64_t)timestampUtc rates:(NSDictionary<CurrencyConverterCoreCurrency *, CurrencyConverterCoreRate *> *)rates __attribute__((swift_name("doCopy(base:timestampUtc:rates:)")));
@property (readonly) CurrencyConverterCoreCurrency *base;
@property (readonly) NSDictionary<CurrencyConverterCoreCurrency *, CurrencyConverterCoreRate *> *rates;
@property (readonly) int64_t timestampUtc;
@end;

NS_ASSUME_NONNULL_END
