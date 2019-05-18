# Intro to Kotlin Multiplatform

> _**Disclaimer:** Kotlin Multiplatform Projects are at an experimental stage in Kotlin 1.2 and 1.3 and not without issues. Using them for production apps is not advised._

Kotlin multiplatform provides a mechanism for sharing code among platforms. The key difference from many other cross-platform tools is that it doesn’t compile all code to platform specific code. Instead, we are given full control over what will be shared and what will be native. Generally, we choose to share the business logic and leave the UI be native to the platform for more natural user experience. This allows us to reap the benefits of writing cross-platform solutions without any of the limitations that usually come with it, like their inflexibility when it comes to writing platform-specific code.

This is implemented by using the **common** version of the [Kotlin standard library] to write the shared module and then compiling the code to different target platforms - JVM, JS, and Native. 
This means then Kotlin/JVM or any Java or Javascript code can’t be used to write the common module. Accessing the platform APIs is done by using the provided [expect/actual mechanism].   

This is the short version, for more information check out the [official documentation].

[Kotlin standard library]: https://kotlinlang.org/api/latest/jvm/stdlib/index.html
[expect/actual mechanism]: https://kotlinlang.org/docs/reference/platform-specific-declarations.html
[official documentation]: https://kotlinlang.org/docs/reference/multiplatform.html

# Modularization

The motivation for breaking the shared code into modules is to prevent it from growing into one giant module with tons of responsibilities, coupled features, hardcoded dependencies, some low-level utilities, and anything that can be shared. Basically, our app without UI. 
Instead we should aim to create many components, independent from one another, providing a very focused set of functionality. Client apps then have complete control over what they depend on and use.

We can modularize our app around features. In the following example, the currency converter is one feature in a much larger system, that is developed independently from other components, e.g. analytics or user management. 
We can further develop the currency converter by abstracting away dependencies to external resources, infrastructure, allowing us to e.g. easily switch servers or using different HTTP clients on different platforms. 

The architecture followed in this sample is Hexagonal Architecture (a.k.a. Ports and Adapters).
Hexagonal architecture isolates the central logic of our application from the outside concerns by placing the inputs and outputs at the edge of our design. This allows us to easily swap their implementation without changing the central logic.
For more detail here’s an [android sample project] that applies this architecture with Dagger 2.

[android sample project]: https://github.com/jankovd/dagger2-ports-and-adapters

# Currency converter

The currency converter app provides an exchange rate based on an input from-to currency pair i.e. the rate at which one currency will be exchanged for another. 

The app has an exchange rate provider that fetches rates from a data source like a server, a database, or in our case a mock source with hardcoded values. When a conversion is requested the app uses a rate calculator to find a conversion path between the two currencies.

The main entry point for using the converter is the **CurrencyConverter** component. The converter internally uses an **ExchangeRateProvider** that fetches exchange rate data and a **RateCalculator** performing the conversion. 
When building the converter the clients are required to plug-in an ExchangeRateProvider implementation to make it fully functional. This is how we allow customizability of our feature.

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

# Limitations

### The IDEs are not quite prepared

There is still no single IDE in which you can develop for all platforms supported by multiplatform. You'll need to jump from IDEA to Android Studio, to Xcode, etc.
Configuring gradle for use of multiple shared modules is not straight forward, and is something that needs to be done by hand. The bigger downside is that multiplatform is still not a finished product, and until then, we can expect that there will be additional build issues introduced in newer releases. However, in my opinion, this is all acceptable for a feature still in experimental mode.

### Multiple K/MPP frameworks for iOS

The iOS module is packaged as a framework and currently, there cannot be more than one Kotlin Multiplatform framework imported in the iOS project. This doesn’t play well with modular design described in this sample. As a workaround, a new ios-configuration module is added to include the iOS dependencies.
[This thread](https://github.com/JetBrains/kotlin-native/issues/2423) contains more information.

There is currently no support in gradle for building iOS projects, and it takes some effort to set up an automatic framework link to the iOS project, especially with multiple shared modules. This is a hurdle that you need to pass, as it is useful because it enables changes in shared modules to be automatically imported to the iOS project.

# Gradle multimodule project

Gradle is used as a build automation tool since it supports the currently used platforms except for iOS. 
For this sample, an empty gradle project was created and modules were gradually added as described in [this tutorial](https://guides.gradle.org/creating-multi-project-builds/).

# Summary

Breaking the shared code into multiple modules that serve a specific purpose will create components with limited scope that are more readable, reliable, and maintainable. Client applications can then choose what they need and tailor a specific configuration that will best fit the platform. The benefits of this design over having one all-purpose shared module is worth considering.

