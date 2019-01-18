import mk.webfactory.dz.converter.currency.core.Currency.Companion.EUR
import mk.webfactory.dz.converter.currency.core.Currency.Companion.USD
import mk.webfactory.dz.converter.currency.core.*
import mk.webfactory.dz.converter.currency.core.Currency.Companion.YEN
import kotlin.test.*


class CurrencyConverterTest {

    private val converter = CurrencyConverter.Builder(MockProvider()).build()

    @Test
    fun successfulConversionTest() {
        assertEquals(0.87f, converter.convert(FromToCurrencyPair(USD, EUR)).rate.middleRate)
        assertEquals(0.87f, converter.convert(USD convertTo EUR).rate.middleRate)
        assertEquals(1.15f, converter.convert(EUR convertTo USD).rate.middleRate.round(2))
        assertEquals(2.30f, converter.convert(EUR convertTo USD, 2f).rate.middleRate.round(2))
        assertEquals(0.0089f, converter.convert(YEN convertTo USD).rate.middleRate.round(4))
        assertEquals(129.67f, converter.convert(EUR convertTo YEN).rate.middleRate.round(2))
        assertEquals(0.0077f, converter.convert(YEN convertTo EUR).rate.middleRate.round(4))
    }

    @Test
    fun missingRateForCurrencyTest() {
        assertFailsWith(RateNotAvailableException::class) {
            converter.convert(EUR, Currency("MKD"))
        }
    }

    @Test
    fun negativeAmountToConvertTest() {
        assertFailsWith(IllegalArgumentException::class) {
            converter.convert(USD convertTo YEN, -2f)
        }
    }

    @Test
    fun zeroAmountToConvertTest1() {
        assertFailsWith(IllegalArgumentException::class) {
            converter.convert(USD convertTo YEN, 0f)
        }
    }

    @Test
    fun sameCurrencyConversionTest() {
        assertEquals(1f, converter.convert(EUR convertTo EUR).rate.middleRate)
    }

    @Test
    fun zeroAmountSameCurrencyConversionTest() {
        assertFailsWith(IllegalArgumentException::class) {
            converter.convert(USD convertTo USD, 0f)
        }
    }
}
