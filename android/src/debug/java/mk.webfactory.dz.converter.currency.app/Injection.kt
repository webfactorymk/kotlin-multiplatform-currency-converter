package mk.webfactory.dz.converter.currency.app

import mk.webfactory.dz.converter.currency.core.CurrencyConverter
import mk.webfactory.dz.converter.currency.rate.mock.MockProvider

fun provideExchangeRateProvider() = MockProvider()

fun provideCurrencyConverter() = CurrencyConverter.Builder(provideExchangeRateProvider()).build()