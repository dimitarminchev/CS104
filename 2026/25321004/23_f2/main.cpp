#include <iostream>
using namespace std;

int main()
{
    int n;
    double x, sum = 0, power = 1;
    int sign = -1;

    cout << "Vuvedi x: ";
    cin >> x;

    cout << "Vuvedi n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        power *= x;              // x^i
        sum += sign * power;     // (-1)^i * x^i
        sign *= -1;              // сменя знак
    }

    cout << "Sumata e: " << sum << endl;

    cin.get();
    cin.get();
    return 0;
}
