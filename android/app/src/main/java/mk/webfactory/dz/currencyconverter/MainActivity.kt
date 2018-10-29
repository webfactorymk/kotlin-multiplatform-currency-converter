package mk.webfactory.dz.currencyconverter

import android.os.Bundle
import android.support.v7.app.AppCompatActivity
import android.widget.EditText
import android.widget.ImageButton
import android.widget.Spinner
import mk.webfactory.dz.currencyconverter.util.bind

class MainActivity : AppCompatActivity() {

    private val amountEditText: EditText by bind(R.id.edit_from_amount)
    private val fromCurrencySpinner: Spinner by bind(R.id.spinner_from_currency)
    private val toCurrencySpinner: Spinner by bind(R.id.spinner_to_currency)
    private val switchCurrenciesButton: ImageButton by bind(R.id.img_btn_switch)

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

    }
}
