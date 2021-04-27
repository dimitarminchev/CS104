#include <iostream>
using namespace std;
int main()
{
    // Деклариране на два двумерни масива (Матрици) и число N
    int A[3][3], B[3][3], N;

    // Въвеждане на елементите на матрицата А
    cout << "Please enter matrix elements:" << endl;
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            cin >> A[x][y];
        }
    }

    // Въвеждане на число
    cout << "Please enter multiplication number: " << endl;
    cin >> N;

    // Отпечатване на елементите на Матрицата
    cout << "Result: " << endl;
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            B[x][y] = A[x][y] * N; // Поелементно умножение с N
            cout << B[x][y] << '\t'; // Tab
        }
        cout << '\n'; // cout << endl;
    }

    return 0;
}
