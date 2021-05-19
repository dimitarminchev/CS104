#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x, n, sum=0;
    cout << "x=";
    cin >> x;
    cout << "n=";
    cin >> n;
    int f[1000];
    for (int i = 0; i < n; i++)
    {
        f[i] = pow(x, i + 1);
        sum = sum + f[i];
    }
    cout << "sum=" << sum << endl;
    return 0;
}