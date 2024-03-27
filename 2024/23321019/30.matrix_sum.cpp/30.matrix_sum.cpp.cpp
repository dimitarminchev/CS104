// Сума на елементите на две матрици
#include <iostream>
#include <vector>
using namespace std;

// Функция за сумиране на две матрици
vector<vector<int>> sumMatrices(const vector<vector<int>>& matrix1, const vector<vector<int>>& matrix2) {
    vector<vector<int>> result(matrix1.size(), vector<int>(matrix1[0].size()));

    for (size_t i = 0; i < matrix1.size(); ++i) {
        for (size_t j = 0; j < matrix1[0].size(); ++j) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    return result;
}

// Функция за извеждане на матрица
void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int element : row) {
            cout << element << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<vector<int>> matrix1 = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    vector<vector<int>> matrix2 = { {9, 8, 7}, {6, 5, 4}, {3, 2, 1} };

    cout << "Matrica 1:" << endl;
    printMatrix(matrix1);
    cout << "Matrica 2:" << endl;
    printMatrix(matrix2);

    vector<vector<int>> result = sumMatrices(matrix1, matrix2);

    cout << "Sumirana Matrica:" << endl;
    printMatrix(result);

    return 0;
}
