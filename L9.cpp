#include <iostream>
#include <cctype> 

int main() {
    char ch;

    std::cout << "Enter a character: ";
    std::cin >> ch;

    
    char lowerCh = std::tolower(ch);

    if (std::isdigit(ch)) {
        std::cout << "'" << ch << "' is a Number." << std::endl;
    } 
    else if (std::isalpha(ch)) {
        
        if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || 
            lowerCh == 'o' || lowerCh == 'u') {
            std::cout << "'" << ch << "' is a Vowel." << std::endl;
        } 
        else {
            std::cout << "'" << ch << "' is a Consonant." << std::endl;
        }
    } 
    else {
        std::cout << "'" << ch << "' is a Special Symbol." << std::endl;
    }

    return 0;
}
