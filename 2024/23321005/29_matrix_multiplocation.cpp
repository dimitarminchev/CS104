// Умножение на матрица с число
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> multiplyMatrixByNumber(const vector<vector<int>>& matrix, int number) {
    vector<vector<int>> result(matrix.size(), vector<int>(matrix[0].size()));
    for (size_t i = 0; i < matrix.size(); ++i) {
        for (size_t j = 0; j < matrix[0].size(); ++j) {
            result[i][j] = matrix[i][j] * number;
        }
    }
    return result;
}

void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int element : row) {
            cout << element << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<vector<int>> matrix = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int number = 2;
    vector<vector<int>> result = multiplyMatrixByNumber(matrix, number);
    printMatrix(result);
    return 0;
}