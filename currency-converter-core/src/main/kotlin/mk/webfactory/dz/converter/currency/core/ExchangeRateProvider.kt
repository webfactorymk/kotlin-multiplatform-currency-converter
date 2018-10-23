package mk.webfactory.dz.converter.currency.core

interface ExchangeRateProvider {

    /**
     * Get all [ExchangeRate]s from this provider.
     */
    fun getAllExchangeRates(): Map<FromToCurrencyPair, ExchangeRate>

    /**
     * Get the [ExchangeRate] for this [FromToCurrencyPair].
     *
     * @throws RateNotAvailableException If there is no data available for this rate
     */
    fun getExchangeRate(fromToCurrencyPair: FromToCurrencyPair): ExchangeRate

    /**
     * @return True if the provider contains the [ExchangeRate] for this [FromToCurrencyPair], false otherwise.
     */
    fun isRateAvailable(fromToCurrencyPair: FromToCurrencyPair): Boolean
}

