package mk.webfactory.dz.converter.currency.core

class CurrencyConverter internal constructor(
        private val exchangeRateProvider: ExchangeRateProvider,
        private val rateCalculator: RateCalculator) {

    /**
     * Get the exchange rate for this currency pair.
     *
     * @return [ConversionResult]
     * @throws RateNotAvailableException If there is no data available for this rate
     */
    fun convert(pair: FromToCurrencyPair, amountToConvert: Float = 1f): ConversionResult {
        require(amountToConvert > 0) { "amountToConvert must be greater than zero" }
        if (pair.from == pair.to) {
            return ConversionResult(pair.from, pair.to, pair.from, rate = Rate.BaseRate(amountToConvert))
        }
        val result = rateCalculator.calc(pair, exchangeRateProvider.getExchangeRates())
                ?: throw RateNotAvailableException()
        return when (amountToConvert) {
            1f -> result
            else -> result.multiply(amountToConvert)
        }
    }

    /**
     * Convenience for [convert]
     */
    fun convert(from: Currency, to: Currency, amountToConvert: Float = 1f) =
            convert(FromToCurrencyPair(from, to), amountToConvert)

    /**
     * @return LinkedSet containing the available currencies from the [ExchangeRateProvider] sorted by [Currency.tagId].
     */
    fun getAvailableCurrencies(): Set<Currency> {
        val resultSet: MutableSet<Currency> = LinkedHashSet()
        for (exchangeRate in exchangeRateProvider.getExchangeRates()) {
            resultSet.add(exchangeRate.base)
            resultSet.addAll(exchangeRate.rates.keys)
        }
        return LinkedHashSet(resultSet.sortedBy { it.tagId })
    }

    /**
     * @return True if the provider contains the exchange rate for this currency pair, false otherwise.
     */
    fun isRateAvailable(from: Currency, to: Currency): Boolean {
        return rateCalculator.calc(FromToCurrencyPair(from, to), exchangeRateProvider.getExchangeRates()) != null
    }

    fun findCurrencyByTag(tag: String): Currency? {
        return getAvailableCurrencies().find { currency -> currency.tagId.toLowerCase() == tag.toLowerCase() }
    }

    fun getExchangeRateProvider(): ExchangeRateProvider = exchangeRateProvider

    class Builder(private val exchangeRateProvider: ExchangeRateProvider) {

        fun build(): CurrencyConverter = CurrencyConverter(exchangeRateProvider, BasicRateCalculator())
    }
}