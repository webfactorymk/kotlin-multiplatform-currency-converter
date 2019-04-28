package mk.webfactory.dz.converter.currency.core

/**
 * Calculates the exchange rate of one currency to another using the provided exchange rates.
 */
internal interface RateCalculator {

    /**
     * Calculates the exchange rate of one currency to another using the provided exchange rates.
     * If direct conversion path does not exist in a single [ExchangeRateData] the calculator
     * may try to find a path through multiple exchange rates.
     *
     * @return [ConversionResult] or null if conversion path could not be found.
     * The null result is justified because checking if the rate is available takes equal work as
     * calculating it and could be an expensive operation.
     */
    fun calc(pair: FromToCurrencyPair, exchangeRates: List<ExchangeRateData>): ConversionResult?
}

//Very dumb and lazy RateCalculator
internal class BasicRateCalculator : RateCalculator {

    override fun calc(pair: FromToCurrencyPair, exchangeRates: List<ExchangeRateData>): ConversionResult? {
        val dataSet: List<ExchangeRateData> = when (pair.from.preferredConversionBase) {
            null -> exchangeRates
            else -> exchangeRates.sortedWith(
                    Comparator { a, b ->
                        when {
                            a.base == pair.from.preferredConversionBase -> -1
                            b.base == pair.from.preferredConversionBase -> 1
                            else -> 0
                        }
                    })
        }

        for (rateData in dataSet) {
            if (rateData.base == pair.from) {
                if (rateData.rates.containsKey(pair.to)) {
                    return conversionResult(rateData.rates[pair.to]!!, pair, rateData)
                }
            } else if (rateData.base == pair.to) {
                if (rateData.rates.containsKey(pair.from)) {
                    return conversionResult(rateData.rates[pair.from]!!.invert(), pair, rateData)
                }
            } else {
                if (rateData.rates.containsKey(pair.from) && rateData.rates.containsKey(pair.to)) {
                    val rate = rateData.rates[pair.to]!!
                            .multiply(rateData.rates[pair.from]!!.invert().middleRate)
                    return conversionResult(rate, pair, rateData)
                }
            }
        }
        throw RateNotAvailableException()
    }

    private fun conversionResult(rate: Rate, pair: FromToCurrencyPair, data: ExchangeRateData) =
            ConversionResult(pair.from, pair.to, data.base, data.timestampUtc, rate)
}