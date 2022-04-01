#include <iostream>
using namespace std;
int main()
{
    // Деклариране на матрица 3x3
    int A[3][3];

    // Въвеждане на елементи в матрица
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            cin >> A[x][y];
        }
    }

    // Отпечатване на елементите на матрица
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            cout << A[x][y] << '\t'; // tab
        }
        cout << '\n'; // new line
    }

    return 0;
}
