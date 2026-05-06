#include <iostream>

int main() {
    double temp, convertedTemp;
    int choice;

    std::cout << "Temperature Converter\n";
    std::cout << "1. Fahrenheit to Celsius\n";
    std::cout << "2. Celsius to Fahrenheit\n";
    std::cout << "Enter choice (1 or 2): ";
    std::cin >> choice;

    std::cout << "Enter temperature value: ";
    std::cin >> temp;

    if (choice == 1) {
        convertedTemp = (temp - 32.0) * 5.0 / 9.0;
        std::cout << temp << "°F is " << convertedTemp << "°C" << std::endl;
    } else if (choice == 2) {
        convertedTemp = (temp * 9.0 / 5.0) + 32.0;
        std::cout << temp << "°C is " << convertedTemp << "°F" << std::endl;
    } else {
        std::cout << "Invalid choice." << std::endl;
    }

    return 0;
}
