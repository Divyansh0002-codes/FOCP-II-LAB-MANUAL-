#include <iostream>
#include <iomanip>

int main() {
    int quantity;
    double pricePerItem, grossTotal, discount = 0.0, netTotal;

    
    std::cout << "Enter the quantity of items: ";
    std::cin >> quantity;
    std::cout << "Enter the price per item: ";
    std::cin >> pricePerItem;

    
    grossTotal = quantity * pricePerItem;

    
    if (quantity > 1000) {
        discount = grossTotal * 0.10;
    }

    netTotal = grossTotal - discount;

   
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\n--- Order Summary ---" << std::endl;
    std::cout << "Gross Total: $" << grossTotal << std::endl;
    if (discount > 0) {
        std::cout << "Discount (10% Applied): -$" << discount << std::endl;
    } else {
        std::cout << "Discount: $0.00 (Order <= 1000 items)" << std::endl;
    }
    std::cout << "Net Total Expenses: $" << netTotal << std::endl;

    return 0;
}
