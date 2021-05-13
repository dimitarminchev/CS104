#include <iostream>
using namespace std;
int main()
{
    const int N = 3;
    int A[N][N], B[100], n;
    for (int x = 0; x < N; x++)
        for (int y = 0; y < N; y++)
            cin >> A[x][y];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> B[i];
    for (int x1 = 0; x1 < N; x1++)
        for (int y1 = 0; y1 < N; y1++)
            for (int x2 = 0; x2 < N; x2++)
                for (int y2 = 0; y2 < N; y2++)
                    if (A[x1][y1] < A[x2][y2])
                    {
                        int temp = A[x1][y1];
                        A[x1][y1] = A[x2][y2];
                        A[x2][y2] = temp;
                    }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (B[i] < B[j])
            {
                int temp = B[i];
                B[i] = B[j];
                B[j] = temp;
            }
    int C[N][N], Ax = 0, Ay = 0, Bi = 0, index = 0;
    while (index < N * N)
    {
        int x = index / N;
        int y = index % N;
        if (A[Ax][Ay] < B[Bi])
        {
            C[x][y] = A[Ax][Ay];
            if (Ay == N - 1)
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
        index++;
    }
    for (int x = 0; x < N; x++)
    {
        for (int y = 0; y < N; y++)
            cout << C[x][y] << '\t';
        cout << '\n';
    }
    return 0;
}