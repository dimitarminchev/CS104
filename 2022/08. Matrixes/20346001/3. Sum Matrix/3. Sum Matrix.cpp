// 3. Sum Matrix
#include <iostream>
using namespace std;
int main()
{
    // Matrixes
    int A[3][3], B[3][3], C[3][3];

    // Matrix A
    cout << "A:\n";
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            cin >> A[x][y];
        }
    }

    // Matrix B
    cout << "B:\n";
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            cin >> B[x][y];
        }
    }

    // C = A + B
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            C[x][y] = A[x][y] + B[x][y];
        }
    }

    // Matrix C - print
    cout << "A+B=\n";
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            cout << C[x][y] << '\t';
        }
        cout << '\n';
    }
    return 0;
}