package mk.webfactory.dz.converter.currency.core

/**
 * Currency representation. [tagId] is used as unique identifier; always uppercase.
 *
 * @param caseInsensitiveTagId The tag identifier for this currency. Is automatically uppercased. (example: EUR, USD, YEN...)
 * @param preferredConversionBase The preferred base currency for conversions. (example: CAD -> base:USD -> YEN)
 */
class Currency(caseInsensitiveTagId: String, val preferredConversionBase: Currency? = null) {

    companion object {
        val EUR = Currency("EUR")
        val USD = Currency("USD")
        val YEN = Currency("YEN")
        val MKD = Currency("MKD", EUR)
    }

    val tagId: String = caseInsensitiveTagId.toUpperCase()
            .also { require(it.length == 3) { "Currency tagId must be 3 characters long" } }

    override fun equals(other: Any?): Boolean {
        if (this === other) return true
        if (other == null || this::class != other::class) return false
        other as Currency
        if (tagId != other.tagId) return false
        return true
    }

    override fun hashCode(): Int {
        return tagId.hashCode()
    }
}

/**
 * Creates a [FromToCurrencyPair].
 */
infix fun Currency.convertTo(that: Currency) = FromToCurrencyPair(this, that)

/**
 * A FROM -> TO pair of [currencies][Currency]. Used for convenience.
 */
data class FromToCurrencyPair(val from: Currency, val to: Currency)