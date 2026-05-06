#include <iostream>
#include <iomanip>

int main() {
    double salaries[10];
    double totalSalary = 0.0, averageSalary;

    std::cout << "Enter the salary of 10 employees:\n";

   
    for (int i = 0; i < 10; ++i) {
        std::cout << "Employee " << i + 1 << ": ";
        std::cin >> salaries[i];
        totalSalary += salaries[i];
    }

  
    averageSalary = totalSalary / 10.0;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\n--- Payroll Summary ---" << std::endl;
    std::cout << "Total Salary Expense: $" << totalSalary << std::endl;
    std::cout << "Average Employee Salary: $" << averageSalary << std::endl;

    return 0;
}
