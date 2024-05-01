// 29_matrix_multiplocation - ????????? ?? ??????? ? ?????

#include <iostream>
using namespace std;


void multiplyMatrixByScalar(int matrix[][100], int rows, int cols, int scalar) {
    
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            matrix[i][j] *= scalar;
        }
    }
}


void printMatrix(int matrix[][100], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows, cols;
    cout << "Enter the number of rows and columns of the matrix: ";
    cin >> rows >> cols;

    int matrix[100][100];
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }

    int scalar;
    cout << "Enter the scalar to multiply with the matrix: ";
    cin >> scalar;

    cout << "Original matrix:" << endl;
    printMatrix(matrix, rows, cols);

    multiplyMatrixByScalar(matrix, rows, cols, scalar);

    cout << "Matrix after multiplying by " << scalar << ":" << endl;
    printMatrix(matrix, rows, cols);

    return 0;
}
