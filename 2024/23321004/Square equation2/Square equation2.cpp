//Намиране на корени на квадратно уравнение
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    float d = pow(b, 2) - 4 * a * c;
    // d < 0
    if (d < 0)
    {
        cout << "d<0" << endl << "Няма реални корени" << endl;
    }
    // d=0
    if (d == 0)
    {
        cout << "d=0, x1=x2, x=" << (-b) / (2 * a) << endl;
    }
    //d > 0
    if (d > 0)
    {
        float x1 = ((-b) + sqrt(d)) / (2 * a);
        float x2 = ((-b) - sqrt(d)) / (2 * a);
        cout << "d=" << d << endl;
        cout << "x1=" << x1 << endl;
        cout << "x2=" << x2 << endl;
    }

    return 0;
}