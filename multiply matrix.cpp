#include <iostream>

const int MAX_SIZE = 10;

int main() {
    int mat1[MAX_SIZE][MAX_SIZE], mat2[MAX_SIZE][MAX_SIZE], res[MAX_SIZE][MAX_SIZE];
    int rows1, cols1, rows2, cols2;

    // Read dimensions of matrix 1
    std::cout << "Enter the number of rows of matrix 1: ";
    std::cin >> rows1;
    std::cout << "Enter the number of columns of matrix 1: ";
    std::cin >> cols1;

    // Read elements of matrix 1
    std::cout << "Enter the elements of matrix 1:\n";
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            std::cin >> mat1[i][j];
        }
    }

    // Read dimensions of matrix 2
    std::cout << "Enter the number of rows of matrix 2: ";
    std::cin >> rows2;
    std::cout << "Enter the number of columns of matrix 2: ";
    std::cin >> cols2;

    // Read elements of matrix 2
    std::cout << "Enter the elements of matrix 2:\n";
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            std::cin >> mat2[i][j];
        }
    }

    // Check if the matrices can be multiplied
    if (cols1 != rows2) {
        std::cout << "Cannot multiply the matrices. Invalid dimensions.";
        return 0;
    }

    // Multiply matrices and store the result in 'res'
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            res[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    // Display the result matrix
    std::cout << "Resultant matrix:\n";
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            std::cout << res[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
