#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x, n, sum = 0;
    cout << "x=";
    cin >> x;
    cout << "n=";
    cin >> n;
    int f[1000];
    for (int k = 0; k < n; k++)
    {
        f[k] = pow(x, k + 1);
        sum = sum + f[k];
    }
    cout << "sum = " << sum << endl;

    return 0;
}