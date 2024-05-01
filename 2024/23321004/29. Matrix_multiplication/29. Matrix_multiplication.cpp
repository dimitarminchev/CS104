//29. Умножение на матрица с число
#include <iostream>

const int MAX_ROWS = 10;
const int MAX_COLS = 10;

// Function to multiply a matrix by a scalar
void multiplyMatrixByScalar(int matrix[][MAX_COLS], int rows, int cols, int scalar) {
    // Multiply each element of the matrix by the scalar
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            matrix[i][j] *= scalar;
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int rows, cols;
    std::cout << "Enter the number of rows and columns of the matrix: ";
    std::cin >> rows >> cols;

    int matrix[MAX_ROWS][MAX_COLS];

    std::cout << "Enter the elements of the matrix:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    int scalar;
    std::cout << "Enter the scalar to multiply the matrix by: ";
    std::cin >> scalar;

    std::cout << "Original matrix:" << std::endl;
    displayMatrix(matrix, rows, cols);

    multiplyMatrixByScalar(matrix, rows, cols, scalar);

    std::cout << "Matrix after multiplication by scalar:" << std::endl;
    displayMatrix(matrix, rows, cols);

    return 0;
}
