#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int menu;
    float p, s;

    cout << "Shapes: \n";
    cout << "1. Square \n";
    cout << "2. Circle \n";
    cout << "3. Triangle \n";
    cout << "Number of shape: ";
    cin >> menu;

    if (menu == 1)
    {
        float a;
        cout << "Enter side length: ";
        cin >> a;
        p = 4 * a;
        s = a * a;
    }
    else if (menu == 2)
    {
        float r;
        cout << "Enter circle radius: ";
        cin >> r;
        p = 2 * M_PI * r;
        s = M_PI * pow(r, 2);
    }
    else if (menu == 3)
    {
        float a, b, c;
        cout << "Enter first side lenght: ";
        cin >> a;
        cout << "Enter second side lenght: ";
        cin >> b;
        cout << "Enter third side lenght: ";
        cin >> c;
        p = a + b + c;
        float p2 = p / 2;
        s = sqrt(p2 * (p2 - a) * (p2 - b) * (p2 - c));
    }

    cout << "Perimeter = " << p << endl;
    cout << "Area = " << s << endl;

    return 0;
}
