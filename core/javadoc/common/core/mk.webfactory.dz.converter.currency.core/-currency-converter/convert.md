[core](../../index.md) / [mk.webfactory.dz.converter.currency.core](../index.md) / [CurrencyConverter](index.md) / [convert](./convert.md)

# convert

`fun convert(pair: `[`FromToCurrencyPair`](../-from-to-currency-pair/index.md)`, amountToConvert: `[`Float`](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-float/index.html)` = 1f): `[`ConversionResult`](../-conversion-result/index.md)

Get the exchange rate for this currency pair.

### Exceptions

`RateNotAvailableException` - If there is no data available for this rate

**Return**
[ConversionResult](../-conversion-result/index.md)

`fun convert(from: `[`Currency`](../-currency/index.md)`, to: `[`Currency`](../-currency/index.md)`, amountToConvert: `[`Float`](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-float/index.html)` = 1f): `[`ConversionResult`](../-conversion-result/index.md)

Convenience for [convert](./convert.md)

