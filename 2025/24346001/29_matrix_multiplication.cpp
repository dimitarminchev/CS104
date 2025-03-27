#include <iostream>
using namespace std;

// matrix_multiplocation.cpp = Умножение на матрица с число

int main() {
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    double** matrix = new double*[rows];
    for(int i = 0; i < rows; i++) {
        matrix[i] = new double[cols];
    }

    cout << "Enter the matrix elements:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    double scalar;
    cout << "Enter the scalar to multiply by: ";
    cin >> scalar;

    // Multiply the matrix by the scalar
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            matrix[i][j] *= scalar;
        }
    }

    cout << "Resulting matrix:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Clean up
    for(int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
