package mk.webfactory.dz.converter.currency.core

import kotlin.math.pow
import kotlin.math.roundToInt

/**
 * Holds [Rate]s against a [base] currency.
 */
data class ExchangeRateData(
        val base: Currency,
        val timestampUtc: Long,
        val rates: Map<Currency, Rate>)


data class ConversionResult(
        val from: Currency,
        val to: Currency,
        val baseCurrency: Currency,
        val timestampUtc: Long? = null,
        val rate: Rate) {

    internal fun multiply(multiplier: Float): ConversionResult {
        return copy(rate = this.rate.multiply(multiplier))
    }
}


sealed class Rate(val middleRate: Float) {
    class BaseRate(middleRate: Float) : Rate(middleRate)
    class ExtendedRate(middleRate: Float, val buyingRate: Float, val sellingRate: Float) : Rate(middleRate)

    internal fun invert(): Rate = when (this) {
        is BaseRate -> BaseRate(1 / this.middleRate)
        is ExtendedRate -> ExtendedRate(
                1 / this.middleRate,
                1 / this.buyingRate,
                1 / this.sellingRate)
    }

    internal fun multiply(multiplier: Float): Rate = when (this) {
        is BaseRate -> BaseRate(this.middleRate * multiplier)
        is ExtendedRate -> ExtendedRate(
                this.middleRate * multiplier,
                this.buyingRate * multiplier,
                this.sellingRate * multiplier)
    }
}

fun Float.round(decimals: Int): Float = (this * 10f.pow(decimals)).roundToInt() / 10f.pow(decimals)
