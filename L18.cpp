#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string id;
    bool isPalindrome = true;

    std::cout << "Enter the ID to validate: ";
    std::cin >> id;

    int n = id.length();

    
    for (int i = 0; i < n / 2; ++i) {
        if (id[i] != id[n - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }

    std::cout << "\n--- Validation Result ---" << std::endl;
    if (isPalindrome) {
        std::cout << "The ID \"" << id << "\" is a Palindrome." << std::endl;
    } else {
        std::cout << "The ID \"" << id << "\" is NOT a Palindrome." << std::endl;
    }

    return 0;
}
