#include <iostream>

int main() {
    int rows = 8;
    int cols = 8;

    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= cols; ++j) {
            
            if (i == 1 || i == rows || j == 1 || j == cols) {
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }
       
        std::cout << std::endl;
    }

    return 0;
}
