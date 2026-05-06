#include <iostream>

int main() {
   
    int marks[3][5];

    
    for (int i = 0; i < 3; ++i) {
        std::cout << "Enter marks for Student " << i + 1 << " (5 subjects):" << std::endl;
        for (int j = 0; j < 5; ++j) {
            std::cout << "  Subject " << j + 1 << ": ";
            std::cin >> marks[i][j];
        }
    }

   
    std::cout << "\n--- Requested Records ---" << std::endl;
    
  
    std::cout << "Marks in 2nd subject of 1st student: " << marks[0][1] << std::endl;


    std::cout << "Marks in 5th subject of 3rd student: " << marks[2][4] << std::endl;

    return 0;
}
