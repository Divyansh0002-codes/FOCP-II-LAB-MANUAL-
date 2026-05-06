#include <iostream>
#include <string>

int main() {
    double score1, score2, score3;

    
    std::cout << "Enter score for Player 1: ";
    std::cin >> score1;
    std::cout << "Enter score for Player 2: ";
    std::cin >> score2;
    std::cout << "Enter score for Player 3: ";
    std::cin >> score3;

    std::cout << "\n--- Result ---\n";


    if (score1 > score2 && score1 > score3) {
        std::cout << "Player 1 is the winner with " << score1 << " points!" << std::endl;
    } 
    else if (score2 > score1 && score2 > score3) {
        std::cout << "Player 2 is the winner with " << score2 << " points!" << std::endl;
    } 
    else if (score3 > score1 && score3 > score2) {
        std::cout << "Player 3 is the winner with " << score3 << " points!" << std::endl;
    } 
    else {
        std::cout << "It's a tie between the top scorers!" << std::endl;
    }

    return 0;
}
