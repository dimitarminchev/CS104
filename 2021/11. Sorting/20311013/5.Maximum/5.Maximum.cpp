#include <iostream>
using namespace std;
int main()
{
    int n, A[4][4], B[100];
    for (int x = 0; x < 4; x++) for (int y = 0; y < 4; y++) cin >> A[x][y];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> B[i];
    int C[4][4], Bi = 0, Ax = 0, Ay = 0, indexx = 0, x, y;

    for (int x1 = 0; x1 < 4; x1++)
        for (int y1 = 0; y1 < 4; y1++)
            for (int x2 = 0; x2 < 4; x2++)
                for (int y2 = 0; y2 < 4; y2++)
            if (A[x1][y1] > A[x2][y2])
            {
                int temp = A[x1][y1];
                A[x1][y1] = A[x2][y2];
                A[x2][y2] = temp;
            }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (B[i] > B[j])
            {
                int temp = B[i];
                B[i] = B[j];
                B[j] = temp;
            }
    while (indexx < 16)
    {
        x = indexx / 4;
        y = indexx % 4;
        if (A[Ax][Ay] > B[Bi])
        {
            C[x][y] = A[Ax][Ay];
            if (Ay == 3)
            {
                Ay = 0;
                Ax++;
            }
            else Ay++;
        }
        else
        {
            C[x][y] = B[Bi];
            Bi++;
        }
        indexx++;
    }
    for (int x = 0; x < 4; x++)
    {
        for (int y = 0; y < 4; y++)
        {
            cout << C[x][y] << '\t';
        }
        cout << '\n';
    }
    return 0;
}