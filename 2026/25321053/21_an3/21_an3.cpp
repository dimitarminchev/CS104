#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        double result = pow(1 + 1.0 / i, i);
        cout << result << " ";
    }

    return 0;
}
