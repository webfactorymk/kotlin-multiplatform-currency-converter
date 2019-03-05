#import <Foundation/Foundation.h>

@class MainCurrency, MainCurrencyCompanion, MainFromToCurrencyPair, MainCurrencyConverter, MainConversionResult, MainCurrencyConverterBuilder, MainExchangeRateData, MainRate, MainRateBaseRate, MainRateExtendedRate, MainRateNotAvailableException, MainKotlinRuntimeException, MainKotlinException, MainKotlinThrowable, MainKotlinArray;

@protocol MainExchangeRateProvider, MainKotlinIterator;

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
@interface MainMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((objc_runtime_name("KotlinMutableDictionary")))
__attribute__((swift_name("KotlinMutableDictionary")))
@interface MainMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((objc_runtime_name("KotlinNumber")))
__attribute__((swift_name("KotlinNumber")))
@interface MainNumber : NSNumber
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
@interface MainByte : MainNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((objc_runtime_name("KotlinUByte")))
__attribute__((swift_name("KotlinUByte")))
@interface MainUByte : MainNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((objc_runtime_name("KotlinShort")))
__attribute__((swift_name("KotlinShort")))
@interface MainShort : MainNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((objc_runtime_name("KotlinUShort")))
__attribute__((swift_name("KotlinUShort")))
@interface MainUShort : MainNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((objc_runtime_name("KotlinInt")))
__attribute__((swift_name("KotlinInt")))
@interface MainInt : MainNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((objc_runtime_name("KotlinUInt")))
__attribute__((swift_name("KotlinUInt")))
@interface MainUInt : MainNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((objc_runtime_name("KotlinLong")))
__attribute__((swift_name("KotlinLong")))
@interface MainLong : MainNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((objc_runtime_name("KotlinULong")))
__attribute__((swift_name("KotlinULong")))
@interface MainULong : MainNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((objc_runtime_name("KotlinFloat")))
__attribute__((swift_name("KotlinFloat")))
@interface MainFloat : MainNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((objc_runtime_name("KotlinDouble")))
__attribute__((swift_name("KotlinDouble")))
@interface MainDouble : MainNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((objc_runtime_name("KotlinBoolean")))
__attribute__((swift_name("KotlinBoolean")))
@interface MainBoolean : MainNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Currency")))
@interface MainCurrency : KotlinBase
- (instancetype)initWithCaseInsensitiveTagId:(NSString *)caseInsensitiveTagId preferredConversionBase:(MainCurrency * _Nullable)preferredConversionBase __attribute__((swift_name("init(caseInsensitiveTagId:preferredConversionBase:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *tagId;
@property (readonly) MainCurrency * _Nullable preferredConversionBase;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Currency.Companion")))
@interface MainCurrencyCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) MainCurrency *EUR;
@property (readonly) MainCurrency *USD;
@property (readonly) MainCurrency *YEN;
@property (readonly) MainCurrency *MKD;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FromToCurrencyPair")))
@interface MainFromToCurrencyPair : KotlinBase
- (instancetype)initWithFrom:(MainCurrency *)from to:(MainCurrency *)to __attribute__((swift_name("init(from:to:)"))) __attribute__((objc_designated_initializer));
- (MainCurrency *)component1 __attribute__((swift_name("component1()")));
- (MainCurrency *)component2 __attribute__((swift_name("component2()")));
- (MainFromToCurrencyPair *)doCopyFrom:(MainCurrency *)from to:(MainCurrency *)to __attribute__((swift_name("doCopy(from:to:)")));
@property (readonly) MainCurrency *from;
@property (readonly) MainCurrency *to;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CurrencyConverter")))
@interface MainCurrencyConverter : KotlinBase
- (MainConversionResult *)convertPair:(MainFromToCurrencyPair *)pair amountToConvert:(float)amountToConvert __attribute__((swift_name("convert(pair:amountToConvert:)")));
- (MainConversionResult *)convertFrom:(MainCurrency *)from to:(MainCurrency *)to amountToConvert:(float)amountToConvert __attribute__((swift_name("convert(from:to:amountToConvert:)")));
- (NSSet<MainCurrency *> *)getAvailableCurrencies __attribute__((swift_name("getAvailableCurrencies()")));
- (BOOL)isRateAvailableFrom:(MainCurrency *)from to:(MainCurrency *)to __attribute__((swift_name("isRateAvailable(from:to:)")));
- (MainCurrency * _Nullable)findCurrencyByTagTag:(NSString *)tag __attribute__((swift_name("findCurrencyByTag(tag:)")));
- (id<MainExchangeRateProvider>)getExchangeRateProvider __attribute__((swift_name("getExchangeRateProvider()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CurrencyConverter.Builder")))
@interface MainCurrencyConverterBuilder : KotlinBase
- (instancetype)initWithExchangeRateProvider:(id<MainExchangeRateProvider>)exchangeRateProvider __attribute__((swift_name("init(exchangeRateProvider:)"))) __attribute__((objc_designated_initializer));
- (MainCurrencyConverter *)build __attribute__((swift_name("build()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExchangeRateData")))
@interface MainExchangeRateData : KotlinBase
- (instancetype)initWithBase:(MainCurrency *)base timestampUtc:(int64_t)timestampUtc rates:(NSDictionary<MainCurrency *, MainRate *> *)rates __attribute__((swift_name("init(base:timestampUtc:rates:)"))) __attribute__((objc_designated_initializer));
- (MainCurrency *)component1 __attribute__((swift_name("component1()")));
- (int64_t)component2 __attribute__((swift_name("component2()")));
- (NSDictionary<MainCurrency *, MainRate *> *)component3 __attribute__((swift_name("component3()")));
- (MainExchangeRateData *)doCopyBase:(MainCurrency *)base timestampUtc:(int64_t)timestampUtc rates:(NSDictionary<MainCurrency *, MainRate *> *)rates __attribute__((swift_name("doCopy(base:timestampUtc:rates:)")));
@property (readonly) MainCurrency *base;
@property (readonly) int64_t timestampUtc;
@property (readonly) NSDictionary<MainCurrency *, MainRate *> *rates;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConversionResult")))
@interface MainConversionResult : KotlinBase
- (instancetype)initWithFrom:(MainCurrency *)from to:(MainCurrency *)to baseCurrency:(MainCurrency *)baseCurrency timestampUtc:(MainLong * _Nullable)timestampUtc rate:(MainRate *)rate __attribute__((swift_name("init(from:to:baseCurrency:timestampUtc:rate:)"))) __attribute__((objc_designated_initializer));
- (MainCurrency *)component1 __attribute__((swift_name("component1()")));
- (MainCurrency *)component2 __attribute__((swift_name("component2()")));
- (MainCurrency *)component3 __attribute__((swift_name("component3()")));
- (MainLong * _Nullable)component4 __attribute__((swift_name("component4()")));
- (MainRate *)component5 __attribute__((swift_name("component5()")));
- (MainConversionResult *)doCopyFrom:(MainCurrency *)from to:(MainCurrency *)to baseCurrency:(MainCurrency *)baseCurrency timestampUtc:(MainLong * _Nullable)timestampUtc rate:(MainRate *)rate __attribute__((swift_name("doCopy(from:to:baseCurrency:timestampUtc:rate:)")));
@property (readonly) MainCurrency *from;
@property (readonly) MainCurrency *to;
@property (readonly) MainCurrency *baseCurrency;
@property (readonly) MainLong * _Nullable timestampUtc;
@property (readonly) MainRate *rate;
@end;

__attribute__((swift_name("Rate")))
@interface MainRate : KotlinBase
@property (readonly) float middleRate;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Rate.BaseRate")))
@interface MainRateBaseRate : MainRate
- (instancetype)initWithMiddleRate:(float)middleRate __attribute__((swift_name("init(middleRate:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Rate.ExtendedRate")))
@interface MainRateExtendedRate : MainRate
- (instancetype)initWithMiddleRate:(float)middleRate buyingRate:(float)buyingRate sellingRate:(float)sellingRate __attribute__((swift_name("init(middleRate:buyingRate:sellingRate:)"))) __attribute__((objc_designated_initializer));
@property (readonly) float buyingRate;
@property (readonly) float sellingRate;
@end;

__attribute__((swift_name("ExchangeRateProvider")))
@protocol MainExchangeRateProvider
@required
- (NSSet<MainCurrency *> *)getAvailableBaseCurrencies __attribute__((swift_name("getAvailableBaseCurrencies()")));
- (NSArray<MainExchangeRateData *> *)getExchangeRates __attribute__((swift_name("getExchangeRates()")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface MainKotlinThrowable : KotlinBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MainKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MainKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (MainKotlinArray *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
@property (readonly) MainKotlinThrowable * _Nullable cause;
@property (readonly) NSString * _Nullable message;
@end;

__attribute__((swift_name("KotlinException")))
@interface MainKotlinException : MainKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MainKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MainKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface MainKotlinRuntimeException : MainKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MainKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MainKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RateNotAvailableException")))
@interface MainRateNotAvailableException : MainKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MainKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(MainKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

@interface MainCurrency (Extensions)
- (MainFromToCurrencyPair *)convertToThat:(MainCurrency *)that __attribute__((swift_name("convertTo(that:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExchangeRateKt")))
@interface MainExchangeRateKt : KotlinBase
+ (float)round:(float)receiver decimals:(int32_t)decimals __attribute__((swift_name("round(_:decimals:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface MainKotlinArray : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size init:(id _Nullable (^)(MainInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (id _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<MainKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(id _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size;
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol MainKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

NS_ASSUME_NONNULL_END
