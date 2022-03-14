#include <iostream>
using namespace std;
int main()
{
    int n, m, A[100], B[100], C[100];


    cin >> n;
    for (int i = 0; i < n; i++) cin >> A[i];
    cin >> m;
    for (int i = 0; i < m; i++) cin >> B[i];


    for (int i = 0; i < n; i++) C[i] = A[i];
    for (int i = n; i < n + m; i++) C[i] = B[i - n];


    for (int i = 0; i < n + m; i++)
        for (int j = 0; j < n + m; j++)
            if (C[i] < C[j])
            {

                int temp = C[i];
                C[i] = C[j];
                C[j] = temp;
            }

    for (int i = 0; i < n + m; i++) cout << C[i] << " ";
    cout << endl;

    return 0;
}