#include <iostream>
using namespace std;
int main()
{
    // създаваме три матрици
    int A[3][3], B[3][3], C[3][3];

    // въвеждаме от клавиатурата матрица А
    for (int x = 0; x < 3; x++)
        for (int y = 0; y < 3; y++)
            cin >> A[x][y];

    // въвеждаме от клавиатурата матрица B
    for (int x = 0; x < 3; x++)
        for (int y = 0; y < 3; y++)
            cin >> B[x][y];

    // изчиляваме и отпечатваме матрица C
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            C[x][y] = A[x][y] + B[x][y];
            cout << C[x][y] << "\t";
        }
        cout << "\n"; // cout << endl;
    }
    return 0;
}
