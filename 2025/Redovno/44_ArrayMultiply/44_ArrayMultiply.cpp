#include <iostream>
using namespace std;
int main()
{
    // Декларираме целочислена матрица 3х3
    int A[3][3];

    // Въвеждаме елементите на матрицата
    for (int x = 0; x < 3; x++)
        for (int y = 0; y < 3; y++)
            cin >> A[x][y];

    // Въвеждаме число по което умножаваме
    int m;
    cout << "Multiply by: ";
    cin >> m;

    // Извършваме умножението и извеждаме матрицата
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            A[x][y] = A[x][y] * m;
            cout << A[x][y] << '\t';
        }
        cout << '\n';
    }
    return 0;
}
