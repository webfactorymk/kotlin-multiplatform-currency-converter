[core](../index.md) / [mk.webfactory.dz.converter.currency.core](./index.md)

## Package mk.webfactory.dz.converter.currency.core

### Types

| [ConversionResult](-conversion-result/index.md) | `data class ConversionResult` |
| [Currency](-currency/index.md) | `class Currency`<br>Currency representation. [tagId](-currency/tag-id.md) is used as unique identifier; always uppercase. |
| [CurrencyConverter](-currency-converter/index.md) | `class CurrencyConverter` |
| [ExchangeRateData](-exchange-rate-data/index.md) | `data class ExchangeRateData`<br>Holds [Rate](-rate/index.md)s against a [base](-exchange-rate-data/base.md) currency. |
| [ExchangeRateProvider](-exchange-rate-provider/index.md) | `interface ExchangeRateProvider` |
| [FromToCurrencyPair](-from-to-currency-pair/index.md) | `data class FromToCurrencyPair` |
| [Rate](-rate/index.md) | `sealed class Rate` |

### Exceptions

| [RateNotAvailableException](-rate-not-available-exception/index.md) | `class RateNotAvailableException : `[`RuntimeException`](https://docs.oracle.com/javase/6/docs/api/java/lang/RuntimeException.html) |

### Extensions for External Classes

| [kotlin.Float](kotlin.-float/index.md) |  |

### Functions

| [convertTo](convert-to.md) | `infix fun `[`Currency`](-currency/index.md)`.convertTo(that: `[`Currency`](-currency/index.md)`): `[`FromToCurrencyPair`](-from-to-currency-pair/index.md) |

