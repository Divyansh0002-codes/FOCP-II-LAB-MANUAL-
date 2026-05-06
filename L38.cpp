#include <iostream>
#include <string>
#include <cctype> 

int main() {
    std::string username;
    bool isValid = true;

    std::cout << "Enter a username: ";

    std::getline(std::cin, username);

  
    if (username.empty()) {
        isValid = false;
    } else {
        for (char ch : username) {
           
            if (!std::isalnum(ch)) {
                isValid = false;
                break;
            }
        }
    }

    if (isValid) {
        std::cout << "Username accepted!" << std::endl;
    } else {
        std::cout << "Username rejected! Use only letters and numbers (no spaces or special characters)." << std::endl;
    }

    return 0;
}
