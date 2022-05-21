// 5. Matrix Multiplication
#include <iostream>
using namespace std;
int main()
{
    // 3 двумерни масива (матрици)
    int A[3][3], B[3][3], C[3][3];

    // Mатрица А
    cout << "A:" << endl;
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            cin >> A[x][y];
        }
    }
    // Mатрица B
    cout << "B:" << endl;
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            cin >> B[x][y];
        }
    }
    // Намиране на произведението на матриците
    cout << "Matrix Multiplication:" << endl;
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            C[x][y] = A[x][0] * B[0][y] + A[x][1] * B[1][y] + A[x][2] * B[2][y];
            cout << C[x][y] << '\t';
        }
        cout << '\n';
    }
    return 0;
}