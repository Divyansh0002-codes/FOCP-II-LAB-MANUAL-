#include <iostream>
#include <cmath> 

int main() {
    int n;
    bool isPrime = true;

    std::cout << "Enter a number to verify: ";
    std::cin >> n;

    
    if (n <= 1) {
        isPrime = false;
    } else {
        
        for (int i = 2; i <= std::sqrt(n); ++i) {
            if (n % i == 0) {
                isPrime = false;
                break; 
            }
        }
    }

    if (isPrime) {
        std::cout << n << " is a Prime Number." << std::endl;
    } else {
        std::cout << n << " is a Composite Number (not prime)." << std::endl;
    }

    return 0;
}
