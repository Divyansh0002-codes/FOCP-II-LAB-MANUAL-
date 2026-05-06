#include <iostream>
#include <iomanip> 

int main() {
    int itemNo;
    double quantity, unitPrice, subtotal, discount, finalBill;

    
    std::cout << "Enter Item Number: ";
    std::cin >> itemNo;
    std::cout << "Enter Quantity: ";
    std::cin >> quantity;
    std::cout << "Enter Unit Price: ";
    std::cin >> unitPrice;

    
    subtotal = quantity * unitPrice;
    discount = subtotal * 0.20; 
    finalBill = subtotal - discount;


    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\n--- Receipt ---" << std::endl;
    std::cout << "Item No: " << itemNo << std::endl;
    std::cout << "Subtotal: $" << subtotal << std::endl;
    std::cout << "Discount (20%): -$" << discount << std::endl;
    std::cout << "Total Amount Payable: $" << finalBill << std::endl;

    return 0;
}
