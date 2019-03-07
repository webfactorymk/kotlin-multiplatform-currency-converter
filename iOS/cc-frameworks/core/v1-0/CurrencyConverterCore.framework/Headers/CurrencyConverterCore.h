#import <Foundation/Foundation.h>

@class CCCCurrency, CCCCurrencyCompanion, CCCFromToCurrencyPair, CCCCurrencyConverter, CCCConversionResult, CCCCurrencyConverterBuilder, CCCExchangeRateData, CCCRate, CCCRateBaseRate, CCCRateExtendedRate, CCCRateNotAvailableException, CCCKotlinRuntimeException, CCCKotlinException, CCCKotlinThrowable, CCCKotlinArray;

@protocol CCCExchangeRateProvider, CCCKotlinIterator;

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
@interface CCCMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((objc_runtime_name("KotlinMutableDictionary")))
__attribute__((swift_name("KotlinMutableDictionary")))
@interface CCCMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((objc_runtime_name("KotlinNumber")))
__attribute__((swift_name("KotlinNumber")))
@interface CCCNumber : NSNumber
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
@interface CCCByte : CCCNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((objc_runtime_name("KotlinUByte")))
__attribute__((swift_name("KotlinUByte")))
@interface CCCUByte : CCCNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((objc_runtime_name("KotlinShort")))
__attribute__((swift_name("KotlinShort")))
@interface CCCShort : CCCNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((objc_runtime_name("KotlinUShort")))
__attribute__((swift_name("KotlinUShort")))
@interface CCCUShort : CCCNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((objc_runtime_name("KotlinInt")))
__attribute__((swift_name("KotlinInt")))
@interface CCCInt : CCCNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((objc_runtime_name("KotlinUInt")))
__attribute__((swift_name("KotlinUInt")))
@interface CCCUInt : CCCNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((objc_runtime_name("KotlinLong")))
__attribute__((swift_name("KotlinLong")))
@interface CCCLong : CCCNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((objc_runtime_name("KotlinULong")))
__attribute__((swift_name("KotlinULong")))
@interface CCCULong : CCCNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((objc_runtime_name("KotlinFloat")))
__attribute__((swift_name("KotlinFloat")))
@interface CCCFloat : CCCNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((objc_runtime_name("KotlinDouble")))
__attribute__((swift_name("KotlinDouble")))
@interface CCCDouble : CCCNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((objc_runtime_name("KotlinBoolean")))
__attribute__((swift_name("KotlinBoolean")))
@interface CCCBoolean : CCCNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Currency")))
@interface CCCCurrency : KotlinBase
- (instancetype)initWithCaseInsensitiveTagId:(NSString *)caseInsensitiveTagId preferredConversionBase:(CCCCurrency * _Nullable)preferredConversionBase __attribute__((swift_name("init(caseInsensitiveTagId:preferredConversionBase:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *tagId;
@property (readonly) CCCCurrency * _Nullable preferredConversionBase;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Currency.Companion")))
@interface CCCCurrencyCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) CCCCurrency *EUR;
@property (readonly) CCCCurrency *USD;
@property (readonly) CCCCurrency *YEN;
@property (readonly) CCCCurrency *MKD;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FromToCurrencyPair")))
@interface CCCFromToCurrencyPair : KotlinBase
- (instancetype)initWithFrom:(CCCCurrency *)from to:(CCCCurrency *)to __attribute__((swift_name("init(from:to:)"))) __attribute__((objc_designated_initializer));
- (CCCCurrency *)component1 __attribute__((swift_name("component1()")));
- (CCCCurrency *)component2 __attribute__((swift_name("component2()")));
- (CCCFromToCurrencyPair *)doCopyFrom:(CCCCurrency *)from to:(CCCCurrency *)to __attribute__((swift_name("doCopy(from:to:)")));
@property (readonly) CCCCurrency *from;
@property (readonly) CCCCurrency *to;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CurrencyConverter")))
@interface CCCCurrencyConverter : KotlinBase
- (CCCConversionResult *)convertPair:(CCCFromToCurrencyPair *)pair amountToConvert:(float)amountToConvert __attribute__((swift_name("convert(pair:amountToConvert:)")));
- (CCCConversionResult *)convertFrom:(CCCCurrency *)from to:(CCCCurrency *)to amountToConvert:(float)amountToConvert __attribute__((swift_name("convert(from:to:amountToConvert:)")));
- (NSSet<CCCCurrency *> *)getAvailableCurrencies __attribute__((swift_name("getAvailableCurrencies()")));
- (BOOL)isRateAvailableFrom:(CCCCurrency *)from to:(CCCCurrency *)to __attribute__((swift_name("isRateAvailable(from:to:)")));
- (CCCCurrency * _Nullable)findCurrencyByTagTag:(NSString *)tag __attribute__((swift_name("findCurrencyByTag(tag:)")));
- (id<CCCExchangeRateProvider>)getExchangeRateProvider __attribute__((swift_name("getExchangeRateProvider()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CurrencyConverter.Builder")))
@interface CCCCurrencyConverterBuilder : KotlinBase
- (instancetype)initWithExchangeRateProvider:(id<CCCExchangeRateProvider>)exchangeRateProvider __attribute__((swift_name("init(exchangeRateProvider:)"))) __attribute__((objc_designated_initializer));
- (CCCCurrencyConverter *)build __attribute__((swift_name("build()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExchangeRateData")))
@interface CCCExchangeRateData : KotlinBase
- (instancetype)initWithBase:(CCCCurrency *)base timestampUtc:(int64_t)timestampUtc rates:(NSDictionary<CCCCurrency *, CCCRate *> *)rates __attribute__((swift_name("init(base:timestampUtc:rates:)"))) __attribute__((objc_designated_initializer));
- (CCCCurrency *)component1 __attribute__((swift_name("component1()")));
- (int64_t)component2 __attribute__((swift_name("component2()")));
- (NSDictionary<CCCCurrency *, CCCRate *> *)component3 __attribute__((swift_name("component3()")));
- (CCCExchangeRateData *)doCopyBase:(CCCCurrency *)base timestampUtc:(int64_t)timestampUtc rates:(NSDictionary<CCCCurrency *, CCCRate *> *)rates __attribute__((swift_name("doCopy(base:timestampUtc:rates:)")));
@property (readonly) CCCCurrency *base;
@property (readonly) int64_t timestampUtc;
@property (readonly) NSDictionary<CCCCurrency *, CCCRate *> *rates;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConversionResult")))
@interface CCCConversionResult : KotlinBase
- (instancetype)initWithFrom:(CCCCurrency *)from to:(CCCCurrency *)to baseCurrency:(CCCCurrency *)baseCurrency timestampUtc:(CCCLong * _Nullable)timestampUtc rate:(CCCRate *)rate __attribute__((swift_name("init(from:to:baseCurrency:timestampUtc:rate:)"))) __attribute__((objc_designated_initializer));
- (CCCCurrency *)component1 __attribute__((swift_name("component1()")));
- (CCCCurrency *)component2 __attribute__((swift_name("component2()")));
- (CCCCurrency *)component3 __attribute__((swift_name("component3()")));
- (CCCLong * _Nullable)component4 __attribute__((swift_name("component4()")));
- (CCCRate *)component5 __attribute__((swift_name("component5()")));
- (CCCConversionResult *)doCopyFrom:(CCCCurrency *)from to:(CCCCurrency *)to baseCurrency:(CCCCurrency *)baseCurrency timestampUtc:(CCCLong * _Nullable)timestampUtc rate:(CCCRate *)rate __attribute__((swift_name("doCopy(from:to:baseCurrency:timestampUtc:rate:)")));
@property (readonly) CCCCurrency *from;
@property (readonly) CCCCurrency *to;
@property (readonly) CCCCurrency *baseCurrency;
@property (readonly) CCCLong * _Nullable timestampUtc;
@property (readonly) CCCRate *rate;
@end;

__attribute__((swift_name("Rate")))
@interface CCCRate : KotlinBase
@property (readonly) float middleRate;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Rate.BaseRate")))
@interface CCCRateBaseRate : CCCRate
- (instancetype)initWithMiddleRate:(float)middleRate __attribute__((swift_name("init(middleRate:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Rate.ExtendedRate")))
@interface CCCRateExtendedRate : CCCRate
- (instancetype)initWithMiddleRate:(float)middleRate buyingRate:(float)buyingRate sellingRate:(float)sellingRate __attribute__((swift_name("init(middleRate:buyingRate:sellingRate:)"))) __attribute__((objc_designated_initializer));
@property (readonly) float buyingRate;
@property (readonly) float sellingRate;
@end;

__attribute__((swift_name("ExchangeRateProvider")))
@protocol CCCExchangeRateProvider
@required
- (NSSet<CCCCurrency *> *)getAvailableBaseCurrencies __attribute__((swift_name("getAvailableBaseCurrencies()")));
- (NSArray<CCCExchangeRateData *> *)getExchangeRates __attribute__((swift_name("getExchangeRates()")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface CCCKotlinThrowable : KotlinBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CCCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CCCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (CCCKotlinArray *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
@property (readonly) CCCKotlinThrowable * _Nullable cause;
@property (readonly) NSString * _Nullable message;
@end;

__attribute__((swift_name("KotlinException")))
@interface CCCKotlinException : CCCKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CCCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CCCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface CCCKotlinRuntimeException : CCCKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CCCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CCCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RateNotAvailableException")))
@interface CCCRateNotAvailableException : CCCKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CCCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(CCCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

@interface CCCCurrency (Extensions)
- (CCCFromToCurrencyPair *)convertToThat:(CCCCurrency *)that __attribute__((swift_name("convertTo(that:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExchangeRateKt")))
@interface CCCExchangeRateKt : KotlinBase
+ (float)round:(float)receiver decimals:(int32_t)decimals __attribute__((swift_name("round(_:decimals:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface CCCKotlinArray : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size init:(id _Nullable (^)(CCCInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (id _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<CCCKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(id _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size;
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol CCCKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

NS_ASSUME_NONNULL_END
