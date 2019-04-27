[core](../../index.md) / [mk.webfactory.dz.converter.currency.core](../index.md) / [ExchangeRateProvider](./index.md)

# ExchangeRateProvider

`interface ExchangeRateProvider`

### Functions

| [getAvailableBaseCurrencies](get-available-base-currencies.md) | `abstract fun getAvailableBaseCurrencies(): `[`Set`](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin.collections/-set/index.html)`<`[`Currency`](../-currency/index.md)`>`<br>The available base currencies that hold exchange rates from this provider. |
| [getExchangeRates](get-exchange-rates.md) | `abstract fun getExchangeRates(): `[`List`](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin.collections/-list/index.html)`<`[`ExchangeRateData`](../-exchange-rate-data/index.md)`>`<br>Get all [ExchangeRateData](../-exchange-rate-data/index.md) entries from this provider. |

