#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    double x, sum = 0;

    cout << "n = ";
    cin >> n;
    cout << "x = ";
    cin >> x;

    for (int k = 1; k <= n; k++)
    {
        sum += pow(x, k);
    }

    cout << "f = " << sum;

    return 0;
}