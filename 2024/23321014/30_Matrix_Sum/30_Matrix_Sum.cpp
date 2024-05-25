#include<iostream>
using namespace std;

void displayMatrix(int matrix[3][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
            if (j == cols - 1) {
                cout << endl;
            }
        }
    }
}

int main() {
    int rows = 3, cols = 3;

    int matrix1[3][3] = {
        {1, 9, 3},
        {5, 7, 11},
        {13, 17, 19}
    };

    int matrix2[3][3] = {
        {23, 29, 31},
        {37, 41, 43},
        {47, 53, 59}
    };

    int sum[3][3];

    // Displaying the first matrix
    cout << "Matrix 1: " << endl;
    displayMatrix(matrix1, rows, cols);

    // Displaying the second matrix
    cout << "Matrix 2: " << endl;
    displayMatrix(matrix2, rows, cols);

    // Adding Two matrices
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Displaying the resultant sum matrix.
    cout << "Sum of two matrices: " << endl;
    displayMatrix(sum, rows, cols);

    return 0;
}
