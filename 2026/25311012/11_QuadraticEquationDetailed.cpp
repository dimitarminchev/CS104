#include <iostream>
using namespace std;
int main()
{
    float a, b, c;

    cin >> a >> b >> c;

    float d = b * b - 4 * a * c;

    if (d < 0)
    {
        cout << "No real roots" << endl;
    }
    else if (d == 0)
    {
        float x = (-b) / (2 * a);
        cout << "x=" << x << endl;
    }
    else
    {
        float x1 = ((-b) + sqrt(d)) / (2 * a);
        float x2 = ((-b) - sqrt(d)) / (2 * a);
        
        cout << "x1=" << x1 << endl;
        cout << "x2=" << x2 << endl;
    }

    return 0;
}