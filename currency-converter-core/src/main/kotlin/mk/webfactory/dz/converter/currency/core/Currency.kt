package mk.webfactory.dz.converter.currency.core

class Currency(caseInsensitiveTagId: String) { //todo add more info fields; test gson

    companion object {
        val EUR = Currency("EUR")
        val USD = Currency("USD")
        val YEN = Currency("YEN")
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

