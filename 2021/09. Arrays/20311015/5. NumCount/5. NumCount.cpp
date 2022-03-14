#include <iostream>
using namespace std;

int main()
{
    int n, A[100], B[100] = { 0,0,0,0,0,0,0,0,0,0 };

    cout << "n = ";
    cin >> n;

    for (int i = 0; i < n; i++) cin >> A[i];

    for (int j = 0; j < n; j++) B[A[j]]++;

    for (int k = 0; k <= n; k++)
    {
        if (B[k] > 0)
        {
            cout << k << " => " << B[k] << endl;
        }
    }

    return 0;
}