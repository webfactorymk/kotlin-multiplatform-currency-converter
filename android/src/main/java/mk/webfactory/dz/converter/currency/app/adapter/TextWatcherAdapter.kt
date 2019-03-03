package mk.webfactory.dz.converter.currency.app.adapter

import android.text.Editable
import android.text.TextWatcher

/**
 * This adapter class provides empty implementations of the methods from {@link TextWatcher}.
 * Any custom watcher that cares only about a subset of the methods of this watcher can
 * simply subclass this adapter class instead of implementing the interface directly.
 */
abstract class TextWatcherAdapter : TextWatcher {

    /**
     * {@inheritDoc}
     */
    override fun afterTextChanged(s: Editable?) {
    }

    /**
     * {@inheritDoc}
     */
    override fun beforeTextChanged(s: CharSequence?, start: Int, count: Int, after: Int) {
    }

    /**
     * {@inheritDoc}
     */
    override fun onTextChanged(s: CharSequence?, start: Int, before: Int, count: Int) {
    }
}