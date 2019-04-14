//
//  ViewController.swift
//  currency-converter
//
//  Created by an android developer.
//

import UIKit
import CurrencyConverter

class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        
        let label = UILabel(frame: CGRect(x: 0, y: 0, width: 300, height: 300))
        label.center = CGPoint(x: 160, y: 285)
        label.textAlignment = .center
        label.font = label.font.withSize(25)
        label.numberOfLines = 5
        label.textAlignment = NSTextAlignment.left
        
        let currencyConverter = ConfigurationKt.provideCurrencyConverter()
        let rateProvider = currencyConverter.getExchangeRateProvider()
        let rateData = rateProvider.getExchangeRates().first
        
        if (rateData != nil) {
            label.text = "Base currency: " + rateData!.base.tagId + "\n\n"
                + rateData!.rates.map({ (key: CoreCurrency, value: CoreRate) -> String in
                    (key.tagId + " " + value.middleRate.description) })
                .joined(separator: "\n")
        }
        view.addSubview(label)
    }
}
