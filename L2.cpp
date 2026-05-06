#include <iostream>
#include <cmath> 

int main() {
    double radius, area;

    
    std::cout << "Enter the radius of the circular fountain: ";
    if (!(std::cin >> radius)) {
        std::cout << "Invalid input.";
        return 1;
    }

   
    area = M_PI * std::pow(radius, 2);

    
    std::cout << "The space covered by the fountain is: " << area << " square units." << std::endl;

    return 0;
}
