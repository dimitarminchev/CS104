//30. Сума на елементите на две матрици
#include <iostream>

const int MAX_ROWS = 10;
const int MAX_COLS = 10;

// Function to add two matrices and store the result in another matrix
void addMatrices(int matrix1[][MAX_COLS], int matrix2[][MAX_COLS], int result[][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
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
    std::cout << "Enter the number of rows and columns of the matrices: ";
    std::cin >> rows >> cols;

    int matrix1[MAX_ROWS][MAX_COLS];
    int matrix2[MAX_ROWS][MAX_COLS];
    int result[MAX_ROWS][MAX_COLS];

    std::cout << "Enter the elements of the first matrix:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cin >> matrix1[i][j];
        }
    }

    std::cout << "Enter the elements of the second matrix:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cin >> matrix2[i][j];
        }
    }

    addMatrices(matrix1, matrix2, result, rows, cols);

    std::cout << "Resultant matrix after addition:" << std::endl;
    displayMatrix(result, rows, cols);

    return 0;
}
