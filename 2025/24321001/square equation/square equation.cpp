#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Деклариране на променливите
    int a, b, c;

    // Въвеждане на стойности за променливите
    cout << "a = ";
    cin >> a;

    cout << "b = ";
    cin >> b;

    cout << "c = ";
    cin >> c;

    // Математически изчисления на корените
    float d = pow(b, 2) - 4 * a * c;
    float x1 = ((-b) + sqrt(d)) / (2 * a);
    float x2 = ((-b) - sqrt(d)) / (2 * a);

    cout << "d = " << d << endl;
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;

    return 0;
}