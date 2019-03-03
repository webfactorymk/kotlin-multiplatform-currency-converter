package mk.webfactory.dz.converter.currency.app.adapter

import android.content.Context
import android.view.View
import android.widget.TextView
import mk.webfactory.dz.converter.currency.app.R
import mk.webfactory.dz.converter.currency.core.Currency
import java.util.*

class CurrencyItemAdapter(
        context: Context,
        dataset: List<Currency> = Collections.emptyList()
) : SimpleSpinnerAdapter<Currency>(context = context, layoutResId = R.layout.view_currency_item, dataset = dataset) {

    override fun bind(view: View, item: Currency) {
        (view as TextView).text = item.tagId
    }
}