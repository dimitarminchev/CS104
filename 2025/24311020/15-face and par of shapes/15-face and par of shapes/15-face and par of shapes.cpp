#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Please, select figure:" << endl;
    cout << "1. Square" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Circle" << endl;

    cin >> n;

    if (n == 1)
    {
        cout << "Thank u, you've selected figure SQUARE!" << endl;
        int a;
        cout << "a=";
        cin >> a;
        cout << "The surface of the square is " << a * a << endl;
        cout << "The perimeter of the square is " << 4 * a << endl;
    }

    if (n == 2)
    {
        cout << "Thank u, you've selected figure RECTANGLE!" << endl;
        int a, b;
        cout << "Please, endter side A of the rectangle: ";
        cout << "a=";
        cin >> a;
        cout << "Please, endter side B of the rectangle: ";
        cout << "b=";
        cin >> b;
        cout << "The surface of the rectagle is " << a * b << endl;
        cout << "The perimeter of the rectagle is " << 2 * (a + b) << endl;
    }

    if (n == 3)
    {
        cout << "Thank u, you've selected figure CIRCLE!" << endl;
        float r;
        cout << "r=";
        cin >> r;
        cout << "The surface of the circle is " << 3.1415 * r * r << endl;
        cout << "The perimeter of the circle is " << 2 * 3.1415 * r << endl;

    }

    return 0;
}