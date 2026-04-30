#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "n = ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        double value = pow(1 + 1.0 / i, i);
        cout << "A" << i << " = " << value << endl;
    }

    return 0;
}