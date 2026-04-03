#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x;
    int n;

    cin >> x >> n;

    double sum = 0;
    int sign = -1;

    for (int k = 1; k <= n; k++)
    {
        sum += sign * pow(x, k);
        sign *= -1;
    }

    cout << sum;

    return 0;
}