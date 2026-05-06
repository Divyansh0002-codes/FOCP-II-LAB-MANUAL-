#include <iostream>
#include <iomanip>

int main() {
    double prices[10];
    double maxPrice;

    std::cout << "Enter the prices of 10 items:\n";

    
    for (int i = 0; i < 10; ++i) {
        std::cout << "Item " << i + 1 << ": ";
        std::cin >> prices[i];
    }

    
    maxPrice = prices[0];

   
    for (int i = 1; i < 10; ++i) {
        if (prices[i] > maxPrice) {
            maxPrice = prices[i];
        }
    }

   
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\n--- Price List Analysis ---" << std::endl;
    std::cout << "The maximum price among the items is: $" << maxPrice << std::endl;

    return 0;
}
