#include <iostream>
using namespace std;
int main()
{
    // Декларираме 2 целочислени матрици 3х3
    int A[3][3], B[3][3];

    // Въвеждаме елементите на матрицата A
    for (int x = 0; x < 3; x++)
        for (int y = 0; y < 3; y++)
            cin >> A[x][y];

    // Въвеждаме елементите на матрицата B
    for (int x = 0; x < 3; x++)
        for (int y = 0; y < 3; y++)
            cin >> B[x][y];

    // Извършваме събирането и извеждаме матрицата
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            cout << A[x][y] + B[x][y] << '\t';
        }
        cout << '\n';
    }
    return 0;
}
