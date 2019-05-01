# Kotlin Multiplatform

> _**Disclaimer:** Kotlin Multiplatform Projects are at an experimental stage in Kotlin 1.2 and 1.3 and not without issues. Using them for production apps is not advised._

Kotlin multiplatform provides a mechanism for sharing code among platforms by building common modules that are included in the apps as libraries. This allows using any platform-specific features without limitations and sharing the domain logic.

This is implemented by using the **common** version of the [Kotlin standard library](https://kotlinlang.org/api/latest/jvm/stdlib/index.html) to write the shared module and then compiling the code to different target platforms - JVM, JS, and Native. 
This means then Kotlin/JVM or any Java or Javascript code can’t be used to write the common module. Accessing the platform APIs is done by using the provided [expect/actual mechanism](https://kotlinlang.org/docs/reference/platform-specific-declarations.html).   

This is the short version, for more information check out the [official documentation](https://kotlinlang.org/docs/reference/multiplatform.html).

# Modularization

The main motivation for breaking the shared code into modules, in addition to the other agreed benefits of modularization, is to decouple any implementation decisions from the domain. Kotlin multiplatform is still very new, subject to change, and has issues. This applies to the available libraries greatly. Even choosing an Http client seems tricky, especially if one needs to migrate from Square’s [Retrofit](https://square.github.io/retrofit/).

The pattern followed in this sample is [Hexagonal Architecture](http://alistair.cockburn.us/Hexagonal+architecture) (a.k.a. Ports and Adapters) by Alistair Cockburn.

# Currency converter

The **CurrencyConverter** component will get exchange rate data from an **ExchangeRateProvider** and will use a **RateCalculator** to do the conversion. When building the converter the clients will just need to plug-in some implementations to make it fully functional.

### A high-level diagram of the solution

<img src="https://github.com/webfactorymk/kotlin-multiplatform-currency-converter/blob/master/screenshots/Kotlin%20MPP%20%2B%20P%26A.png" alt="High level diagram" width="600">

### Shared code modules

- **currency-converter-core** – The core module contains only the domain logic without implementation.

- **rate-provider-mock** – A mock implementation of a rate provider with dummy exchange rates. Works on all platforms.

- **rate-provider-api-ktor – (TBD)** Ktor implementation of a rate provider. Ktor is a multiplatform Http client so we can use this module for all target platforms.

- **rate-provider-api-retrofit – (TBD)** Retrofit implementation of a rate provider. This is a great library but it targets Java and Android. This means that for the other target platforms we can not use this module.

- **ios-configuration** – At this version (Kotlin 1.3) the iOS app supports only one K/MPP module. To bypass this and achieve a multi-module app this module will include all modules for the iOS application and be added to the iOS app.

### Usage in client apps

```
//Build an instance by providing a rate provider
CurrencyConverter.Builder(MockProvider()).build()

//Get available currencies
currencyConverter.getAvailableCurrencies()

//Do a conversion
currencyConverter.convert(
    from: Currency,
    to: Currency,
    amountToConvert: Float
): ConversionResult
```

_For complete reference see the [JavaDoc](http://htmlpreview.github.io/?https://github.com/webfactorymk/kotlin-multiplatform-currency-converter/blob/master/core/javadoc/common/core/mk.webfactory.dz.converter.currency.core/index.html)._

### Screenshots

| ![Alt text][android] | ![Alt text][ios] |
|:--------------------:|:----------------:|
| Android app          | (lazy) iOS app   |

[android]: https://github.com/webfactorymk/kotlin-multiplatform-currency-converter/blob/master/screenshots/android%20app.png "Android app"
[ios]: https://github.com/webfactorymk/kotlin-multiplatform-currency-converter/blob/master/screenshots/iOS%20app.png "iOS app"

# Gradle multimodule project

Gradle is used as a build automation tool since it supports the currently used platforms except for iOS. 
For this sample, an empty gradle project was created and modules were gradually added as described in [this tutorial](https://guides.gradle.org/creating-multi-project-builds/).
