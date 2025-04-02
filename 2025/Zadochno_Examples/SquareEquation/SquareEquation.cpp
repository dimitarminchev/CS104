#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    // Три целочислени променливи
    int a, b, c;

    // въвеждане на стойност на трите променливи
    cout << "a b c" << endl;
    cin >> a >> b >> c;

    // Математически изчисления за корените
    float d = pow(b, 2) - 4 * a * c;
    float x1 = ((-b) + sqrt(d)) / (2 * a);
    float x2 = ((-b) - sqrt(d)) / (2 * a);

    // Отпечатване на резултата
    cout << "d=" << d << endl;
    cout << "x1=" << x1 << endl;
    cout << "x2=" << x2 << endl;

    return 0;
}
