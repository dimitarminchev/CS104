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

    int f[500];

    for (int i = 1; i <= n; i++)
    {
        f[i] = pow(x, i);
        sum += f[i];
    }

    cout << "Sum = " << sum << endl;

    return 0;
}