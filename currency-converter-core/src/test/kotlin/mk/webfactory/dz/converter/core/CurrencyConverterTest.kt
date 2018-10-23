package mk.webfactory.dz.converter.core

import mk.webfactory.dz.converter.currency.core.Currency.Companion.EUR
import mk.webfactory.dz.converter.currency.core.Currency.Companion.USD
import mk.webfactory.dz.converter.core.mock.MockProvider
import mk.webfactory.dz.converter.currency.core.Currency
import mk.webfactory.dz.converter.currency.core.CurrencyConverter
import mk.webfactory.dz.converter.currency.core.RateNotAvailableException
import kotlin.test.*

class CurrencyConverterTest {

    private val currencyConverter: CurrencyConverter = CurrencyConverter(MockProvider())

    @Test
    fun successfulConversionTest() {
        assertEquals(1.15f, currencyConverter.convert(EUR, USD).rate)
    }

    @Test
    fun failedConversionTest() {
        assertFailsWith(RateNotAvailableException::class) {
            currencyConverter.convert(EUR, Currency("MKD"))
        }
    }
}