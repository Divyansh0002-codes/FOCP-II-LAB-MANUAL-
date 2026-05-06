#include <iostream>

int main() {
    int numbers[5];
    int sumEven = 0;
    int sumOdd = 0;

    std::cout << "Enter 5 integers:\n";

   
    for (int i = 0; i < 5; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> numbers[i];
    }

   
    for (int i = 0; i < 5; ++i) {
        if (numbers[i] % 2 == 0) {
            sumEven += numbers[i];
        } else {
            sumOdd += numbers[i];
        }
    }

   
    std::cout << "\n--- Summation Results ---" << std::endl;
    std::cout << "Sum of Even numbers: " << sumEven << std::endl;
    std::cout << "Sum of Odd numbers:  " << sumOdd << std::endl;

    return 0;
}

