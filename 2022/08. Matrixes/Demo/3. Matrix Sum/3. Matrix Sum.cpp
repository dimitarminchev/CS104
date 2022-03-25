#include <iostream>
using namespace std;
int main()
{
    // Деклариране на матрици 3x3
    int A[3][3], B[3][3], C[3][3];

    // Въвеждане на елементи в матрица A
    cout << "A:\n";
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            cin >> A[x][y];
        }
    }

    // Въвеждане на елементи в матрица B
    cout << "B:\n";
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            cin >> B[x][y];
        }
    }

    // Получаване на C = A + B
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            C[x][y] = A[x][y] + B[x][y];
        }
    }

    // Отпечатване на елементите на матрица C
    cout << "A+B=\n";
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            cout << C[x][y] << '\t'; // tab
        }
        cout << '\n'; // new line
    }

    return 0;
}
