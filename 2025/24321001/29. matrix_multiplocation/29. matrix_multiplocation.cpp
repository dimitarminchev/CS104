#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Създаваме три матрици
    int matrixA[3][3], matrixB[3][3], matrixC[3][3];

    // Въвеждаме от клавиатурата матрица А
    for (int x = 0; x < 3; x++) 
        for (int y = 0; y < 3; y++)
            cin >> matrixA[x][y];

    // Въвеждаме от клавиатурата матрица B
    for (int x = 0; x < 3; x++)
        for (int y = 0; y < 3; y++)
            cin >> matrixB[x][y];

    // Изчисляваме матрица C
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            matrixC[x][y] = matrixA[x][y] * matrixB[x][y];
            cout << matrixC[x][y] << "\t";
        }
        cout << "\n";
    }

    return 0;
}