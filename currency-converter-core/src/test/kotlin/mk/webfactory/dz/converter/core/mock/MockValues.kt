package mk.webfactory.dz.converter.core.mock

import mk.webfactory.dz.converter.currency.core.*
import mk.webfactory.dz.converter.currency.core.Currency.Companion.EUR
import mk.webfactory.dz.converter.currency.core.Currency.Companion.USD
import mk.webfactory.dz.converter.currency.core.Currency.Companion.YEN
import mk.webfactory.dz.converter.currency.core.Rate.BaseRate

val mockRates_EurUsdYen: ExchangeRateData = ExchangeRateData(USD, 0, mapOf(
        EUR to BaseRate(0.87f),
        YEN to BaseRate(112.81f)))


class MockProvider : ExchangeRateProvider {

    override fun getAvailableBaseCurrencies(): Set<Currency> = hashSetOf(mockRates_EurUsdYen.base)

    override fun getExchangeRates(): List<ExchangeRateData> = listOf(mockRates_EurUsdYen)
}