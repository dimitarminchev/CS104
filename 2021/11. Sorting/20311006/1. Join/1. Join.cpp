#include <iostream>
using namespace std;
int main()
{
    int m, n, c, A[100], B[100], C[100], i, j, temp;
    cout << "1 matrix: " << endl;
    cin >> m;
    for (i = 0; i < m; i++)
    {
        cin >> A[i];
    }
    cout << "2 matrix: " << endl;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> B[i];
    }

    for (i = 0; i < m; i++)
    {
        C[i] = A[i];
    }

    for (j =0; j < n; j++)
    {
        C[i] = B[j];
        i = i + 1;
    }
    c = i;

    for (j = 0; j < (c - 1); j++)
    {
        for (i = 0; i < (c - 1); i++)
        {
            if (C[i] > C[i + 1])
            {
                temp = C[i];
                C[i] = C[i + 1];
                C[i + 1] = temp;
            }
        }
    }
    for (i = 0; i < c; i++) cout << C[i] << " ";
    cout << endl;
    return 0;
}
