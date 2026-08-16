

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

double celsiusToKelvin(double celsius) {
    return celsius + 273.15;
}

double kelvinToCelsius(double kelvin) {
    return kelvin - 273.15;
}

double kilometersToMiles(double km) {
    return km * 0.621371;
}

double milesToKilometers(double miles) {
    return miles * 1.609344;
}

double metersToFeet(double meters) {
    return meters * 3.28084;
}

double feetToMeters(double feet) {
    return feet * 0.3048;
}

double kilogramsToPounds(double kg) {
    return kg * 2.20462;
}

double poundsToKilograms(double pounds) {
    return pounds * 0.453592;
}

double gramsToKilograms(double grams) {
    return grams / 1000.0;
}

double kilogramsToGrams(double kg) {
    return kg * 1000.0;
}