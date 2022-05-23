#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int x, n;
    cout << "x=";
    cin >> x;
    cout << "n=";
    cin >> n;
    int F[100];
    int sum = 0;
    for (int k = 1; k <= n; k++)
    {
        F[k] = pow(x, k);
        sum = sum + F[k];
    }
    for (int k = 1; k <= n; k++)
    {
        cout << F[k] << " ";
    }
    cout << endl << "sum= " << sum << endl;
    return 0;
}