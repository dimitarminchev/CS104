#include <iostream>
using namespace std;
int main()
{
    // Деклариране на двумерен масив (Матрица)
    int A[3][3];

    // Въвеждане на елементите на матрицата
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            cin >> A[x][y];
        }
    }

    // Отпечатване на елементите на Матрицата
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            cout << A[x][y] << '\t'; // Tab
        }
        cout << '\n'; // New Line
    }

    return 0;
}