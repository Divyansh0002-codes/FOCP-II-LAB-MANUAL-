#include <iostream>
#include <string>
#include <cctype>
#include <sstream>
#include <vector>

int main() {
    std::string input, normalized = "";
    int wordCount = 0, digitCount = 0, specialCount = 0;
    bool isAllValid = true;

    std::cout << "Enter text to process: ";
    std::getline(std::cin, input);

    std::stringstream ss(input);
    std::string word;
    while (ss >> word) {
        if (!normalized.empty()) normalized += " ";
        normalized += word;
        wordCount++;
    }

  
    if (!normalized.empty()) {
        normalized[0] = std::toupper(normalized[0]);
        for (size_t i = 1; i < normalized.length(); i++) {
            normalized[i] = std::tolower(normalized[i]);
        }
    }

  
    for (char ch : normalized) {
        if (std::isdigit(ch)) {
            digitCount++;
        } else if (!std::isalpha(ch) && !std::isspace(ch)) {
            specialCount++;
            isAllValid = false; 
        }
    }

 
    std::cout << "\n--- Processed Text ---\n";
    std::cout << "\"" << normalized << "\"" << std::endl;
    
    std::cout << "\n--- Statistics ---\n";
    std::cout << "Total Words: " << wordCount << std::endl;
    std::cout << "Total Digits: " << digitCount << std::endl;
    std::cout << "Special Characters: " << specialCount << std::endl;

    std::cout << "\n--- Validation ---\n";
    if (isAllValid && !normalized.empty()) {
        std::cout << "Status: VALID (Contains only alphabets, digits, and spaces)" << std::endl;
    } else {
        std::cout << "Status: INVALID (Contains restricted special characters)" << std::endl;
    }

    return 0;
}
