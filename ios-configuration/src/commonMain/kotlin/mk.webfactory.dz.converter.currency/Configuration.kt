package mk.webfactory.dz.converter.currency

import mk.webfactory.dz.converter.currency.core.CurrencyConverter
import mk.webfactory.dz.converter.currency.rate.mock.MockProvider

fun provideCurrencyConverter(): CurrencyConverter {
    return CurrencyConverter.Builder(MockProvider()).build()
}