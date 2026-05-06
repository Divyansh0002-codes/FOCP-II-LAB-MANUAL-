#include <iostream>
#include <iomanip>
#include <vector>

int main() {
    int numEmployees;
    
    std::cout << "Enter the number of employees: ";
    std::cin >> numEmployees;

   
    const double BONUS_RATE = 0.12;

    for (int i = 1; i <= numEmployees; ++i) {
        double basicSalary, bonus, netSalary;

        std::cout << "\nEmployee #" << i << " Details:" << std::endl;
        std::cout << "Enter Basic Salary: ";
        std::cin >> basicSalary;

        
        bonus = basicSalary * BONUS_RATE;
        netSalary = basicSalary + bonus;

       
        std::cout << std::fixed << std::setprecision(2);
        std::cout << "Bonus (12%):   " << bonus << std::endl;
        std::cout << "Net Salary:    " << netSalary << std::endl;
    }

    return 0;
}
