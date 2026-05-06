#include <iostream>
#include <vector>

int main() {
    int m, n, p, q;

    std::cout << "Enter rows and columns for Matrix A (m n): ";
    std::cin >> m >> n;
    std::cout << "Enter rows and columns for Matrix B (p q): ";
    std::cin >> p >> q;

    
    if (n != p) {
        std::cout << "Error: Columns of A must match rows of B!" << std::endl;
        return 1;
    }

    int A[m][n], B[p][q], C[m][q];

    std::cout << "Enter elements of Matrix A:" << std::endl;
    for(int i=0; i<m; ++i)
        for(int j=0; j<n; ++j) std::cin >> A[i][j];

    std::cout << "Enter elements of Matrix B:" << std::endl;
    for(int i=0; i<p; ++i)
        for(int j=0; j<q; ++j) std::cin >> B[i][j];

   
    for(int i=0; i<m; ++i) {
        for(int j=0; j<q; ++j) {
            C[i][j] = 0;
            for(int k=0; k<n; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    std::cout << "\nResultant Matrix C (" << m << "x" << q << "):" << std::endl;
    for(int i=0; i<m; ++i) {
        for(int j=0; j<q; ++j) std::cout << C[i][j] << "\t";
        std::cout << std::endl;
    }

    return 0;
}
