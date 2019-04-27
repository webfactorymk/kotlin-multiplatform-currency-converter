[core](../../index.md) / [mk.webfactory.dz.converter.currency.core](../index.md) / [Currency](./index.md)

# Currency

`class Currency`

Currency representation. [tagId](tag-id.md) is used as unique identifier; always uppercase.

### Parameters

`caseInsensitiveTagId` - The tag identifier for this currency. Is automatically uppercased. (example: EUR, USD, YEN...)

`preferredConversionBase` - The preferred base currency for conversions. (example: CAD -&gt; base:USD -&gt; YEN)

### Constructors

| [&lt;init&gt;](-init-.md) | `Currency(caseInsensitiveTagId: `[`String`](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-string/index.html)`, preferredConversionBase: `[`Currency`](./index.md)`? = null)`<br>Currency representation. [tagId](tag-id.md) is used as unique identifier; always uppercase. |

### Properties

| [preferredConversionBase](preferred-conversion-base.md) | `val preferredConversionBase: `[`Currency`](./index.md)`?`<br>The preferred base currency for conversions. (example: CAD -&gt; base:USD -&gt; YEN) |
| [tagId](tag-id.md) | `val tagId: `[`String`](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-string/index.html) |

### Functions

| [equals](equals.md) | `fun equals(other: `[`Any`](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-any/index.html)`?): `[`Boolean`](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-boolean/index.html) |
| [hashCode](hash-code.md) | `fun hashCode(): `[`Int`](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-int/index.html) |

### Companion Object Properties

| [EUR](-e-u-r.md) | `val EUR: `[`Currency`](./index.md) |
| [MKD](-m-k-d.md) | `val MKD: `[`Currency`](./index.md) |
| [USD](-u-s-d.md) | `val USD: `[`Currency`](./index.md) |
| [YEN](-y-e-n.md) | `val YEN: `[`Currency`](./index.md) |

### Extension Functions

| [convertTo](../convert-to.md) | `infix fun `[`Currency`](./index.md)`.convertTo(that: `[`Currency`](./index.md)`): `[`FromToCurrencyPair`](../-from-to-currency-pair/index.md) |

