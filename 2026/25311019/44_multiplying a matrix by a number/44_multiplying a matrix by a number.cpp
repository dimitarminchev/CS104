#include <iostream>
using namespace std;

int main() {
    int rows, cols, k;
    // Четем броя редове, колони и числото за умножение
    cin >> rows >> cols >> k;

    int M[20][20];

    // Въвеждаме матрицата ред по ред
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> M[i][j];
        }
    }

    // Умножаваме всеки елемент по k и веднага го отпечатваме
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << M[i][j] * k << " ";
        }
        cout << endl; // Нов ред след всяка завършена линия на матрицата
    }

    return 0;
}