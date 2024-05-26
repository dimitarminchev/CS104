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
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int matrix2[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int sum[3][3];
   
    cout << "Матрица 1: " << endl;
    displayMatrix(matrix1, rows, cols);

    
    cout << "Матрица 2: " << endl;
    displayMatrix(matrix2, rows, cols);

   
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }


    cout << "Сума на матриците: " << endl;
    displayMatrix(sum, rows, cols);

    return 0;
}