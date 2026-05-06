#include <iostream>

int main() {
    int N;
    std::cout << "Enter the value of N (number of events): ";
    std::cin >> N;

    for (int i = 1; i <= N; ++i) {
        std::cout << "Event " << i << ": ";

        if (i % 3 == 0 && i % 5 == 0) {
         
            std::cout << "BuzzFuzz";
        } 
        else if (i % 3 == 0) {
          
            std::cout << "Buzz";
        } 
        else if (i % 5 == 0) {
            
            std::cout << "Fuzz";
        } 
        else {
         
            std::cout << i;
        }

        std::cout << std::endl;
    }

    return 0;
}
