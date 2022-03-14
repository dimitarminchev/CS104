#include <iostream>
using namespace std;
int main()
{
    int n, A[3][3], B[100];
	for (int x = 0; x < 3; x++) for (int y = 0; y < 3; y++) cin >> A[x][y];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> B[i];
    int C[3][3], Bi = 0, Ax = 0, Ay = 0, indexx = 0, x, y;
    while (indexx < 9)
    {
        x = indexx / 3;
        y = indexx % 3;
        if (A[Ax][Ay] < B[Bi])
        {
            C[x][y] = A[Ax][Ay]; 
            if (Ay == 2)
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