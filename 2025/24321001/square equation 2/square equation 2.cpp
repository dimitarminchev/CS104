#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c;

    cout << "a = ";
    cin >> a;

    cout << "b = ";
    cin >> b;

    cout << "c = ";
    cin >> c;

    // Математически изчисления на корените
    float d = pow(b, 2) - 4 * a * c;


    // Проверки на дискриминантата и отпечатване на резултатите
    if (d < 0)
    {
        cout << "d < 0 -> No Real Solution" << endl;
    }
    if (d == 0)
    {
        cout << "d = 0, x1 = x2 = " << (-b)/(2 * a) << endl;
    }
    if (d > 0) 
    {
        float x1 = ((-b) + sqrt(d)) / (2 * a);
        float x2 = ((-b) - sqrt(d)) / (2 * a);

        cout << "d = " << d << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }

    return 0;
}