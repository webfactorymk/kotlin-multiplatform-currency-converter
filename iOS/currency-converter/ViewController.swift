//
//  ViewController.swift
//  currency-converter
//
//  Created by WF | Dimitar Zabaznoski on 1/27/19.
//  Copyright © 2019 WebFactory. All rights reserved.
//

import UIKit
import CurrencyConverter

class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        
        let currencyConverter = ConfigurationKt.provideCurrencyConverter()
        
        let label = UILabel(frame: CGRect(x: 0, y: 0, width: 300, height: 21))
        label.center = CGPoint(x: 160, y: 285)
        label.textAlignment = .center
        label.font = label.font.withSize(25)
        
        label.text = [String](currencyConverter.getAvailableCurrencies().map { $0.tagId }).joined(separator: ", ")
        
        view.addSubview(label)
    }
}
