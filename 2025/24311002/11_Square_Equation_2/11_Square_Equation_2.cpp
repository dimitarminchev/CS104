#include <iostream>
#include <cmath>;
using namespace std;
int main()
{
    int a, b, c;

    cout << "Enter a,b,c values:" << endl;
    cin >> a >> b >> c;

    float d = pow(b, 2) - (4 * a * c);

    if (d > 0)
    {
        float x1 = ((-b) + sqrt(d)) / (2 * a);
        float x2 = ((-b) - sqrt(d)) / (2 * a);

        cout << "d=" << d << endl;
        cout << "x1=" << x1 << endl;
        cout << "x2=" << x2 << endl;
    }

    if (d == 0)
    {
        float x = (-b / (2 * a));
        cout << "d=" << d << endl;
        cout << "x=" << x << endl;
    }


    if (d < 0)
    {
        cout << "d=" << d << endl;
        cout << "No Solution" << endl;
    }
    return 0;
}