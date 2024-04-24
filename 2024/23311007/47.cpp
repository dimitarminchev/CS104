#include <iostream>
using namespace std;
const int SIZE = 3;
void multiplyMatrices(int mat1[][SIZE], int mat2[][SIZE], int result[][SIZE]) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < SIZE; ++k) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main() {
    int matrix1[SIZE][SIZE], matrix2[SIZE][SIZE], result[SIZE][SIZE];
    cout << "Enter values for the first matrix: " << endl;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cin >> matrix1[i][j];
        }
    }

    cout << "Enter values for the second matrix: " << endl;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cin >> matrix2[i][j];
        }
    }

    multiplyMatrices(matrix1, matrix2, result);

    cout << "Resultant matrix after multiplication:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << result[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
