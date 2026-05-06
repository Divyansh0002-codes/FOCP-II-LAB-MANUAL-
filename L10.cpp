#include <iostream>

int main() {
    int year;

    std::cout << "Enter a year: ";
    std::cin >> year;

    
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        std::cout << year << " is a Leap Year (February has 29 days)." << std::endl;
    } else {
        std::cout << year << " is not a Leap Year (February has 28 days)." << std::endl;
    }

    return 0;
}
