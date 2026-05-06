#include <iostream>
#include <limits> 

int main() {
    int n;
    double currentNumber;
    
    double maxVal = -std::numeric_limits<double>::infinity();

    std::cout << "Enter the number of sales entries: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Invalid number of entries." << std::endl;
        return 1;
    }

    for (int i = 1; i <= n; ++i) {
        std::cout << "Enter sales figure #" << i << ": ";
        std::cin >> currentNumber;

       
        if (currentNumber > maxVal) {
            maxVal = currentNumber;
        }
    }

    std::cout << "\n--- Analytics Result ---" << std::endl;
    std::cout << "The largest sales figure is: " << maxVal << std::endl;

    return 0;
}
