#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int menu;
    float p, s;

    cout << "Select figure: " << endl;
    cout << "1. Square" << endl;
    cout << "2. Circle" << endl;
    cout << "3. Triangle" << endl;

    cout << "Make your choise now: ";
    cin >> menu;

    switch (menu)
    {
    case 1:
    {
        float a;
        cout << "a = ";
        cin >> a;
        p = 4 * a;
        s = a * a;
        break;
    }

    case 2:
    {
        float r;
        cout << "r = ";
        cin >> r;
        p = 2 * 3.14 * r;
        s = 3.14 * r * r;
        break;
    }

    case 3:
    {
        float a, b, c;
        cout << "Enter triangle sizes: ";
        cin >> a >> b >> c;
        p = a + b + c;
        s = sqrt();
        break;
    }
    }
    return 0;
}