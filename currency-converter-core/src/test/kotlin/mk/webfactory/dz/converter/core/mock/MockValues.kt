package mk.webfactory.dz.converter.core.mock

import mk.webfactory.dz.converter.currency.core.Currency.Companion.EUR
import mk.webfactory.dz.converter.currency.core.Currency.Companion.USD
import mk.webfactory.dz.converter.currency.core.Currency.Companion.YEN
import mk.webfactory.dz.converter.currency.core.ExchangeRate
import mk.webfactory.dz.converter.currency.core.ExchangeRateProvider
import mk.webfactory.dz.converter.currency.core.FromToCurrencyPair
import mk.webfactory.dz.converter.currency.core.RateNotAvailableException

val mockRates_EurUsdYen: Map<FromToCurrencyPair, ExchangeRate> = hashMapOf(
        Pair(FromToCurrencyPair(EUR, USD), ExchangeRate(1.15f)),
        Pair(FromToCurrencyPair(EUR, YEN), ExchangeRate(130.10f)),
        Pair(FromToCurrencyPair(USD, EUR), ExchangeRate(0.87f)),
        Pair(FromToCurrencyPair(USD, YEN), ExchangeRate(112.81f)),
        Pair(FromToCurrencyPair(YEN, EUR), ExchangeRate(0.0077f)),
        Pair(FromToCurrencyPair(YEN, USD), ExchangeRate(0.0089f)))

class MockProvider : ExchangeRateProvider {

    override fun getAllExchangeRates(): Map<FromToCurrencyPair, ExchangeRate> = HashMap(mockRates_EurUsdYen)

    override fun getExchangeRate(fromTo: FromToCurrencyPair): ExchangeRate =
            mockRates_EurUsdYen[fromTo] ?: throw RateNotAvailableException()

    override fun isRateAvailable(fromTo: FromToCurrencyPair): Boolean =
            mockRates_EurUsdYen.containsKey(fromTo)
}