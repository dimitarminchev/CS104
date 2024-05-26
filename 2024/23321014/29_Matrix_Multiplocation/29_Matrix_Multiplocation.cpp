#include <iostream>
#include <vector>
using namespace std;

void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (const auto& elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }
}

void multiplyMatrix(vector<vector<int>>& matrix, int N) {
    for (auto& row : matrix) {
        for (auto& elem : row) {
            elem *= N;
        }
    }
}

int main() {
    vector<vector<int>> matrix = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    cout << "Original matrix: \n";
    printMatrix(matrix);

    int N;
    cout << "Enter the number to multiply the matrix with: ";
    cin >> N;

    multiplyMatrix(matrix, N);
    cout << "Multiplied matrix: \n";
    printMatrix(matrix);

    return 0;
}
