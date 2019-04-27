[core](../../index.md) / [mk.webfactory.dz.converter.currency.core](../index.md) / [CurrencyConverter](./index.md)

# CurrencyConverter

`class CurrencyConverter`

### Types

| [Builder](-builder/index.md) | `class Builder` |

### Functions

| [convert](convert.md) | `fun convert(pair: `[`FromToCurrencyPair`](../-from-to-currency-pair/index.md)`, amountToConvert: `[`Float`](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-float/index.html)` = 1f): `[`ConversionResult`](../-conversion-result/index.md)<br>Get the exchange rate for this currency pair.`fun convert(from: `[`Currency`](../-currency/index.md)`, to: `[`Currency`](../-currency/index.md)`, amountToConvert: `[`Float`](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-float/index.html)` = 1f): `[`ConversionResult`](../-conversion-result/index.md)<br>Convenience for [convert](convert.md) |
| [findCurrencyByTag](find-currency-by-tag.md) | `fun findCurrencyByTag(tag: `[`String`](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-string/index.html)`): `[`Currency`](../-currency/index.md)`?` |
| [getAvailableCurrencies](get-available-currencies.md) | `fun getAvailableCurrencies(): `[`Set`](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin.collections/-set/index.html)`<`[`Currency`](../-currency/index.md)`>` |
| [getExchangeRateProvider](get-exchange-rate-provider.md) | `fun getExchangeRateProvider(): `[`ExchangeRateProvider`](../-exchange-rate-provider/index.md) |
| [isRateAvailable](is-rate-available.md) | `fun isRateAvailable(from: `[`Currency`](../-currency/index.md)`, to: `[`Currency`](../-currency/index.md)`): `[`Boolean`](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-boolean/index.html) |

