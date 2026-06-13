#include <iostream>

int main() {
    
    // Declaring variables for Celsius and Fahrenheit. 
    double tempCelsius;
    double tempFahrenheit;

    // Asking user for input in Celsius
    std::cout << "Input a degree in Celsius:" << std::endl;
    std::cin >> tempCelsius;

    // Converting Celsius to Fahrenheit.
    tempFahrenheit = (tempCelsius * 1.8) + 32;

    // Checking the temperature, and outputting different results based on if/else if/else statements. 
    if (tempFahrenheit <= 32) {
        std::cout << "It's freezing outside, remember your coat." << std::endl;
    } else if (tempFahrenheit >= 86) {
        std::cout << "It's a hot day today. Remember suncream." << std::endl;
    } 
    std::cout << "The temperature today is: " << tempFahrenheit << " Fahrenheit degrees." << std::endl;
    return 0;

}
