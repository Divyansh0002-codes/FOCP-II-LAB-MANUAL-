#include <iostream>

int main() {
    double a, b, c;

    std::cout << "Enter the lengths of the three sides: ";
    std::cin >> a >> b >> c;


    if (a + b > c && a + c > b && b + c > a) {
        
        if (a == b && b == c) {
            std::cout << "The triangle is Equilateral." << std::endl;
        } 
        else if (a == b || b == c || a == c) {
            std::cout << "The triangle is Isosceles." << std::endl;
        } 
        else {
            std::cout << "The triangle is Scalene." << std::endl;
        }
        
    } else {
        std::cout << "These lengths do not form a valid triangle." << std::endl;
    }

    return 0;
}
