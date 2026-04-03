#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x;
    int n;

    cin >> x >> n;

    double sum = 0;

    for (int k = 1; k <= n; k++)
    {
        sum += pow(x, k);
    }

    cout << sum;

    return 0;
}