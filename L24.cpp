#include <iostream>

int main() {
    int n;
    std::cout << "Enter the number of rows for the top half (e.g., 5): ";
    std::cin >> n;

    for (int i = 1; i <= n; i++) {
       
        for (int j = i; j < n; j++) std::cout << " ";

        
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1))
                std::cout << "*";
            else
                std::cout << " ";
        }
        std::cout << std::endl;
    }

  
    for (int i = n - 1; i >= 1; i--) {
        
        for (int j = n; j > i; j--) std::cout << " ";

        
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1))
                std::cout << "*";
            else
                std::cout << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
