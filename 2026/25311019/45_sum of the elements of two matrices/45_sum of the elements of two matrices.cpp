#include <iostream>
#include <stddef.h>
using namespace std;

int main() {
    int rows, cols;
    cin >> rows >> cols; // Четем броя редове и колони за двете матрици

    int A[20][20], B[20][20];

    // 1. Въвеждаме първата матрица (А)
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> A[i][j];
        }
    }

    // 2. Въвеждаме втората матрица (B)
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> B[i][j];
        }
    }

    // 3. Събираме ги директно позиция по позиция и отпечатваме резултата
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << A[i][j] + B[i][j] << " ";
        }
        cout << endl; // Нов ред след всеки готов ред от матрицата
    }

    return 0;
}