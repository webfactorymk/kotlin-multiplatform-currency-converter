[core](../../index.md) / [mk.webfactory.dz.converter.currency.core](../index.md) / [Currency](index.md) / [&lt;init&gt;](./-init-.md)

# &lt;init&gt;

`Currency(caseInsensitiveTagId: `[`String`](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-string/index.html)`, preferredConversionBase: `[`Currency`](index.md)`? = null)`

Currency representation. [tagId](tag-id.md) is used as unique identifier; always uppercase.

### Parameters

`caseInsensitiveTagId` - The tag identifier for this currency. Is automatically uppercased. (example: EUR, USD, YEN...)

`preferredConversionBase` - The preferred base currency for conversions. (example: CAD -&gt; base:USD -&gt; YEN)