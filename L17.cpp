#include <iostream>
#include <cmath>
#include <vector>

int main() {
    int num, temp, sumPerfect = 0, sumArmstrong = 0, digits = 0;
    
    std::cout << "Enter a number: ";
    std::cin >> num;

   
    for (int i = 1; i <= num / 2; ++i) {
        if (num % i == 0) sumPerfect += i;
    }

    
    temp = num;
    int countTemp = num;
    
    while (countTemp > 0) {
        countTemp /= 10;
        digits++;
    }
    
    countTemp = num;
    while (countTemp > 0) {
        int remainder = countTemp % 10;
        sumArmstrong += std::pow(remainder, digits);
        countTemp /= 10;
    }

   
    std::cout << "\n--- Analysis ---" << std::endl;
    if (sumPerfect == num && num != 0)
        std::cout << num << " is a Perfect Number." << std::endl;
    else
        std::cout << num << " is NOT a Perfect Number." << std::endl;

    if (sumArmstrong == num)
        std::cout << num << " is an Armstrong Number." << std::endl;
    else
        std::cout << num << " is NOT an Armstrong Number." << std::endl;

    return 0;
}
