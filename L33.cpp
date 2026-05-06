#include <iostream>
#include <limits>

int main() {
    double stocks[5];
    double largest = -std::numeric_limits<double>::infinity();
    double secondLargest = -std::numeric_limits<double>::infinity();

    std::cout << "Enter 5 stock values:\n";
    for (int i = 0; i < 5; ++i) {
        std::cout << "Stock " << i + 1 << ": ";
        std::cin >> stocks[i];
    }

    for (int i = 0; i < 5; ++i) {
        if (stocks[i] > largest) {
            secondLargest = largest;
            largest = stocks[i];
        } else if (stocks[i] > secondLargest && stocks[i] != largest) {
            secondLargest = stocks[i];
        }
    }

    std::cout << "\n--- Market Analysis ---" << std::endl;
    std::cout << "Highest Value: " << largest << std::endl;
    if (secondLargest == -std::numeric_limits<double>::infinity()) {
        std::cout << "Second Highest Value: N/A (all values are the same)" << std::endl;
    } else {
        std::cout << "Second Highest Value: " << secondLargest << std::endl;
    }

    return 0;
}
