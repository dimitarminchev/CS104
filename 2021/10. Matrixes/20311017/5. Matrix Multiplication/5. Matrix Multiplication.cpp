#include <iostream>
using namespace std;
int main()
{
    // Деклариране на три двумерни масива (Матрици)
    int A[3][3], B[3][3], C[3][3];

    // Въвеждане на елементите на матрицата А
    cout << "Please enter first matrix elements:" << endl;
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            cin >> A[x][y];
        }
    }

    // Въвеждане на елементите на матрицата B
    cout << "Please enter second matrix elements:" << endl;
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            cin >> B[x][y];
        }
    }

    // Намиране на произведение на матриците
    cout << "Matrix Multiplication:" << endl;
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            C[x][y] = A[x][0] * B[0][y] + A[x][1] * B[1][y] + A[x][2] * B[2][y];

            // x = 0, y = 0
            // C[0][0] = A[0][0] * B[0][0] + A[0][1] * B[1][0] + A[0][2] * B[2][0];
            // x = 0, y = 1  
            // C[0][1] = A[0][0] * B[0][1] + A[0][1] * B[1][1] + A[0][2] * B[2][1];
            // x = 0, y = 2  
            // C[0][2] = A[0][0] * B[0][2] + A[0][1] * B[1][2] + A[0][2] * B[2][2];

            // x = 1, y = 0
            // C[1][0] = A[1][0] * B[0][0] + A[1][1] * B[1][0] + A[1][2] * B[2][0];
            // x = 1, y = 1
            // C[1][1] = A[1][0] * B[0][1] + A[1][1] * B[1][1] + A[1][2] * B[2][1];
            // ...

            cout << C[x][y] << '\t'; // tab
        }
        cout << '\n'; // cout << endl;
    }

    return 0;
}