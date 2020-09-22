package mk.webfactory.dz.converter.currency.app

import android.os.Bundle
import android.text.TextUtils
import android.view.View
import android.widget.AdapterView
import android.widget.Toast
import androidx.appcompat.app.AppCompatActivity
import kotlinx.android.synthetic.main.activity_main.*
import mk.webfactory.dz.converter.currency.app.adapter.CurrencyItemAdapter
import mk.webfactory.dz.converter.currency.app.adapter.TextWatcherAdapter
import mk.webfactory.dz.converter.currency.core.Currency

class MainActivity : AppCompatActivity() {

    private val currencyConverter = provideCurrencyConverter()
    private val onCurrencySelectedLoader = object : AdapterView.OnItemSelectedListener {
        override fun onNothingSelected(parent: AdapterView<*>?) {}

        override fun onItemSelected(parent: AdapterView<*>?, view: View?, position: Int, id: Long) {
            if (!TextUtils.isEmpty(edit_from_amount.text)) {
                convert()
            }
        }
    }

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        spinner_from_currency.adapter = createArrayAdapter()
        spinner_to_currency.adapter = createArrayAdapter()
        spinner_to_currency.setSelection(Math.max(0, spinner_to_currency.count - 1))

        spinner_from_currency.onItemSelectedListener = onCurrencySelectedLoader
        spinner_to_currency.onItemSelectedListener = onCurrencySelectedLoader

        edit_conversion_output.isEnabled = false

        edit_from_amount.addTextChangedListener(object : TextWatcherAdapter() {
            override fun onTextChanged(s: CharSequence?, start: Int, before: Int, count: Int) {
                if (!TextUtils.isEmpty(s)) {
                    convert()
                }
            }
        })

        btn_clear.setOnClickListener {
            edit_from_amount.text = null
            edit_conversion_output.text = null
        }

        img_btn_switch.setOnClickListener {
            edit_from_amount.text = edit_conversion_output.text
            val selectedFromItemPosition = spinner_from_currency.selectedItemPosition
            spinner_from_currency.setSelection(spinner_to_currency.selectedItemPosition, true)
            spinner_to_currency.setSelection(selectedFromItemPosition, true)

            if (!TextUtils.isEmpty(edit_from_amount.text)) {
                convert()
            }
        }
    }

    private fun convert() {
        if (spinner_from_currency.selectedItem != null
                && spinner_to_currency.selectedItem != null
                && !TextUtils.isEmpty(edit_from_amount.text)) {
            try {
                val conversionResult = currencyConverter.convert(
                        spinner_from_currency.selectedItem as Currency,
                        spinner_to_currency.selectedItem as Currency,
                        edit_from_amount.text.toString().toFloat())
                edit_conversion_output.setText(conversionResult.rate.middleRate.toString())
            } catch (exp: Exception) {
                showError()
            }
        } else {
            showError()
        }
    }

    private fun showError() {
        Toast.makeText(this, R.string.error_convert, Toast.LENGTH_LONG).show()
        edit_conversion_output.text = null
    }

    private fun createArrayAdapter() = CurrencyItemAdapter(this, currencyConverter.getAvailableCurrencies().toList())
}
