#include <iostream>
#include <vector>

int main() {
    int rows;
    std::cout << "Enter the number of rows for Pascal's Triangle: ";
    std::cin >> rows;

  
    std::vector<std::vector<int>> triangle(rows);

    for (int i = 0; i < rows; i++) {

        triangle[i].resize(i + 1);
        
    
        triangle[i][0] = triangle[i][i] = 1;


        for (int j = 1; j < i; j++) {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }

    
    std::cout << "\nPascal's Triangle:\n";
    for (int i = 0; i < rows; i++) {
      
        for (int s = 0; s < rows - i; s++) std::cout << "  ";
        
        for (int j = 0; j <= i; j++) {
            std::cout << triangle[i][j] << "   ";
        }
        std::cout << std::endl;
    }

    return 0;
}
