#include <iostream>

int main() {
    int A[3][3], B[3][3], sum[3][3];

 
    std::cout << "Enter elements for 3x3 Matrix A:" << std::endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cin >> A[i][j];
        }
    }

    
    std::cout << "Enter elements for 3x3 Matrix B:" << std::endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cin >> B[i][j];
        }
    }

  
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }


    std::cout << "\nResultant Matrix (Sum):" << std::endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << sum[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    return 0;
}
