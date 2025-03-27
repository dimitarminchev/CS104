// matrix_sum.cpp = Сума на елементите на две матрици

#include <iostream>
using namespace std;

// This program calculates the sum of two matrices (of the same dimensions).
// The user enters the dimensions and the elements of both matrices.

int main() {
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    // Allocate first matrix
    double** A = new double*[rows];
    for(int i = 0; i < rows; i++) {
        A[i] = new double[cols];
    }

    // Allocate second matrix
    double** B = new double*[rows];
    for(int i = 0; i < rows; i++) {
        B[i] = new double[cols];
    }

    cout << "Enter elements of the first matrix:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Enter elements of the second matrix:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> B[i][j];
        }
    }

    // Calculate sum of matrices
    double** C = new double*[rows];
    for(int i = 0; i < rows; i++) {
        C[i] = new double[cols];
    }

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Print the resulting matrix
    cout << "Sum of the two matrices:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    // Clean up
    for(int i = 0; i < rows; i++) {
        delete[] A[i];
        delete[] B[i];
        delete[] C[i];
    }
    delete[] A;
    delete[] B;
    delete[] C;

    return 0;
}
