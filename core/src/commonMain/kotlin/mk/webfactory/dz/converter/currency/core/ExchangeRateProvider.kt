package mk.webfactory.dz.converter.currency.core

interface ExchangeRateProvider {

    /**
     * The available base currencies that hold exchange rates from this provider.
     *
     * @return [Set] of available base [Currency]ies against which a calculation can be made.
     */
    fun getAvailableBaseCurrencies(): Set<Currency>

    /**
     * Get all [ExchangeRateData] entries from this provider.
     */
    fun getExchangeRates(): List<ExchangeRateData>
}

