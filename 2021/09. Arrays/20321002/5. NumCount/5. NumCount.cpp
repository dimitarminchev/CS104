#include <iostream>
using namespace std;
int main()
{
    int n, A[1000], B[10] = { 0,0,0,0,0,0,0,0,0,0 };
    cout << "n=";
    cin >> n;
    for (int i = 0; i < n; i++) cin >> A[i];
    for (int i = 0; i < n; i++)  B[A[i]]++;
    for (int i = 0; i < 10; i++)
    {
        if (B[i] > 0)
        {
            cout << i << " => " << B[i] << endl;
        }
    }

    return 0;
}