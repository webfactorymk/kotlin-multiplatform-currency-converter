package mk.webfactory.dz.converter.currency.app.adapter

import android.content.Context
import androidx.annotation.LayoutRes
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.BaseAdapter
import java.util.*

abstract class SimpleSpinnerAdapter<T>(
        context: Context,
        @LayoutRes private val layoutResId: Int,
        dataset: List<T> = Collections.emptyList()
) : BaseAdapter() {

    val layoutInflater: LayoutInflater = LayoutInflater.from(context)
    var dataset: List<T> = dataset
        set(value) {
            field = value
            notifyDataSetChanged()
        }

    override fun getView(position: Int, convertView: View?, parent: ViewGroup?): View {
        val view: View = convertView ?: layoutInflater.inflate(layoutResId, parent, false)
        bind(view, getItem(position))
        return view
    }

    override fun getItem(position: Int): T = dataset.get(position)

    override fun getItemId(position: Int): Long = 1

    override fun getCount() = dataset.size

    abstract fun bind(view: View, item: T)
}