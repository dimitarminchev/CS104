#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    // Програма за решаване на квадратно уравнение
    float a, b, c;

    cout << "a, b, c = ?" << endl;
    cin >> a >> b >> c;

    float d = pow(b, 2) - (4 * a * c);
    cout << "d=" << d << endl;

    if (d < 0)
    {
        cout << "no real solutions" << endl;
    }
    if (d == 0)
    {
        float x = (-b) / (2 * a);
        cout << "x=" << x << endl;
    }

    float x1 = ((-b) + sqrt(d)) / (2 * a);
    float x2 = ((-b) - sqrt(d)) / (2 * a);

    cout << "x1=" << x1 << endl;
    cout << "x2=" << x2 << endl;

    return 0;
}