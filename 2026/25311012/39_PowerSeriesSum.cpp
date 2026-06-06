#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x, n;
    double sum = 0;

    cout << "x=";
    cin >> x;

    cout << "n=";
    cin >> n;

    for (int k = 1; k <= n; k++)
    {
        sum = sum + pow(x, k);
    }

    cout << "sum=" << sum << endl;

    return 0;
}