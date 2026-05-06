#include <iostream>
#include <cmath>

int main() {
    int start, end;
    bool found = false;

    std::cout << "Enter the range (start and end): ";
    std::cin >> start >> end;

    std::cout << "Prime numbers between " << start << " and " << end << " are:\n";

    for (int num = start; num <= end; ++num) {
        if (num < 2) continue; 

        bool isPrime = true;
        
        for (int i = 2; i <= std::sqrt(num); ++i) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            std::cout << num << " ";
            found = true;
        }
    }

    if (!found) {
        std::cout << "None found in this range.";
    }
    std::cout << std::endl;

    return 0;
}
