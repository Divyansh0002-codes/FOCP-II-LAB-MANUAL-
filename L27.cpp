#include <iostream>
#include <iomanip>

int main() {
    double marks[5];
    double total = 0.0, percentage;

    std::cout << "Enter marks for 5 subjects (out of 100 each):\n";

    for (int i = 0; i < 5; ++i) {
        std::cout << "Subject " << i + 1 << ": ";
        std::cin >> marks[i];
        total += marks[i];
    }

    percentage = (total / 500.0) * 100.0;

    
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\n--- Report Card ---" << std::endl;
    std::cout << "Total Marks: " << total << "/500" << std::endl;
    std::cout << "Percentage:  " << percentage << "%" << std::endl;


    if (percentage >= 40.0) {
        std::cout << "Status:      PASSED" << std::endl;
    } else {
        std::cout << "Status:      FAILED" << std::endl;
    }

    return 0;
}
