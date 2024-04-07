// Умножение на матрица с число
#include <iostream>
using namespace std;

int main()
{
    int n;
    int A[3][3], B[3][3];

    cout << "Въведете елементите на матрицата A[3][3]:" << endl;
    for (int x = 0; x < 3; x++)
        for (int y = 0; y < 3; y++)
            cin >> A[x][y];

    cout << "Въведете n: ";
    cin >> n;

    cout << "A * n = " << '\n';

    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            B[x][y] = A[x][y] * n;
            cout << B[x][y] << '\t';
        }
        cout << '\n';
    }
    return 0;
}
