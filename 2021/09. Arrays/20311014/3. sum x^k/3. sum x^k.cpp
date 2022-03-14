#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int x, n, sum = 0;

    cout << "x = ";
    cin >> x;
    cout << "n = ";
    cin >> n;

    int *A = new int[n];

    for (int k = 0; k < n; k++)
    {
        A[k] = pow(x, k + 1);
        sum = sum + A[k];
    }

    cout << "sum = " << sum << endl;

    return 0;
}
