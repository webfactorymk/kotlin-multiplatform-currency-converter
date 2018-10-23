package mk.webfactory.dz.converter.currency.core

class CurrencyConverter internal constructor(private val exchangeRateProvider: ExchangeRateProvider) {

    /**
     * Get the [ExchangeRate] for this [FromToCurrencyPair].
     *
     * @throws RateNotAvailableException If there is no data available for this rate
     */
    fun convert(from: Currency, to: Currency): ExchangeRate =
            exchangeRateProvider.getExchangeRate(FromToCurrencyPair(from, to))

    /**
     * @return Set containing the currency pairs for all [ExchangeRate]s.
     */
    fun getAllCurrencyPairs(): Set<FromToCurrencyPair> = exchangeRateProvider.getAllExchangeRates().keys

    /**
     * @return True if the provider contains the [ExchangeRate] for this [FromToCurrencyPair], false otherwise.
     */
    fun isRateAvailable(fromTo: FromToCurrencyPair) = exchangeRateProvider.isRateAvailable(fromTo)

    fun getExchangeRateProvider(): ExchangeRateProvider = exchangeRateProvider

    class Builder(private val exchangeRateProvider: ExchangeRateProvider) {

        fun build(): CurrencyConverter = CurrencyConverter(exchangeRateProvider)
    }
}