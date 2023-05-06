#include <iostream>
using namespace std;

// Определяне на дименсии на матрицата
const int X = 3, Y = 3;

// Въвеждане на елементите на матрицата
void Input(int A[X][Y])
{
    cout << "Enter the matrix numbers:\n";
    for (int x = 0; x < X; x++)
    {
        for (int y = 0; y < Y; y++)
        {
            cin >> A[x][y];
        }
    }
}

// Отпечатване на елементите на матрицата
void Print(int A[X][Y])
{
    for (int x = 0; x < X; x++)
    {
        for (int y = 0; y < Y; y++)
        {
            cout << A[x][y] << '\t';
        }
        cout << '\n';
    }
}

// Главна функция на програмата
int main()
{
    // Необходими променливи
    int A[X][Y], B[X][Y], C[X][Y], n;

    // Въвеждане 
    Input(A);
    Input(B);

    // Умножение на две матрици по Адамар
    for (int x = 0; x < X; x++)
    {
        for (int y = 0; y < Y; y++)
        {
            C[x][y] = A[x][y] * B[x][y];
        }
    }

    // Отпечатване
    cout << "The result is amazing:\n";
    Print(C);

    return 0;
}