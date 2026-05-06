#include <iostream>

int main() {
    double mark1, mark2, mark3;
    double average;


    std::cout << "Enter marks for three students: ";
    std::cin >> mark1 >> mark2 >> mark3;


    average = (mark1 + mark2 + mark3) / 3.0;


    std::cout << "The class average performance is: " << average << std::endl;

    return 0;
}
