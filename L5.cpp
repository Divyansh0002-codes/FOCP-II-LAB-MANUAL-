#include <iostream>
#include <algorithm> 

int main() {
    int a = 5, b = 10;

    std::cout << "Original: a = " << a << ", b = " << b << "\n";

  
    int temp = a;
    a = b;
    b = temp;
    std::cout << "Swap 1 (Temp Var): a = " << a << ", b = " << b << "\n";

   
    a = a + b; 
    b = a - b; 
    a = a - b; 
    std::cout << "Swap 2 (Arithmetic): a = " << a << ", b = " << b << "\n";

   
    std::swap(a, b);
    std::cout << "Swap 3 (std::swap): a = " << a << ", b = " << b << "\n";

    return 0;
}
