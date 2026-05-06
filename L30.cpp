#include <iostream>
#include <limits>

int main() {
    const int DAYS = 30;
    double temperatures[DAYS];
    double minTemp;

    std::cout << "Enter temperature logs for " << DAYS << " days:\n";

    
    for (int i = 0; i < DAYS; ++i) {
        std::cout << "Day " << i + 1 << ": ";
        std::cin >> temperatures[i];
    }

   
    minTemp = temperatures[0];

    for (int i = 1; i < DAYS; ++i) {
        if (temperatures[i] < minTemp) {
            minTemp = temperatures[i];
        }
    }

    std::cout << "\n--- Monthly Weather Summary ---" << std::endl;
    std::cout << "The minimum temperature recorded this month was: " << minTemp << "°" << std::endl;

    return 0;
}
