#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int menu;
    cout << "Menu:" << endl;
    cout << "1) Square" << endl;
    cout << "2) Rectangle" << endl;
    cout << "3) Circle" << endl;
    cout << "Please select: ";
    cin >> menu;

    int a, b, r;
    double s, p;

    switch (menu)
    {
    case 1:
        cout << "a = ";
        cin >> a;
        p = 4 * a;
        s = a * a;
        cout << "a = " << a << " ; P = " << p << " ; S = " << s;
        break;

    case 2:
        cout << "a = ";
        cin >> a;
        cout << "b = ";
        cin >> b;
        p = 2 * (a + b);
        s = a * b;
        cout << "a = " << a << " ; b = " << b << " ; P = " << p << " ; S = " << s;
        break;

    case 3:
        cout << "r = ";
        cin >> r;
        p = 2 * 3.14 * r;
        s = 3.14 * r * r;
        cout << "r = " << r << " ; P = " << p << " ; S = " << s;
        break;

    default:
        cout << "Invalid choice!";
    }

    return 0;
}