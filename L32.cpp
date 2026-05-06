#include <iostream>

int main() {
    int defectCodes[5];
    int count = 0;

    std::cout << "Enter 5 defect codes:\n";

   
    for (int i = 0; i < 5; ++i) {
        std::cout << "Code " << i + 1 << ": ";
        std::cin >> defectCodes[i];
    }

    
    for (int i = 0; i < 5; ++i) {
        if (defectCodes[i] % 3 == 0 && defectCodes[i] % 5 == 0) {
            count++;
        }
    }

 
    std::cout << "\n--- QC Analysis ---" << std::endl;
    std::cout << "Number of codes divisible by both 3 and 5: " << count << std::endl;

    return 0;
}
