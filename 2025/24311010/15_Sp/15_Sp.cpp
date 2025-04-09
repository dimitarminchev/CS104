﻿#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Please select figure:" << endl;
    cout << "1) Square" << endl;
    cout << "2) Rectangle" << endl;
    cout << "3) Cirle" << endl;
    cout << "Please select [1..3]: ";
    cin >> n;

    if (n == 1)
    {
        cout << "Thank you, you have selected figure SQUARE!" << endl;
        int a;
        cout << "Please enter side A of the square: ";
        cin >> a;
        cout << "The perimether of the square is " << 4 * a << endl;
        cout << "The surface of the square is " << a * a << endl;
    }
    if (n == 2)
    {
        cout << "Thank you, you have selected figure RECTANGLE!" << endl;
        int a, b;
        cout << "Please enter side A of the rectangle: ";
        cin >> a;
        cout << "Please enter side B of the rectangle: ";
        cin >> b;
        cout << "The perimether of the rectangle is " << 2 * (a + b) << endl;
        cout << "The surface of the rectangle is " << a * b << endl;
    }
    if (n == 3)
    {
        cout << "Thank you, you have selected figure CIRLCE!" << endl;
        float r;
        cout << "Please enter radius: ";
        cin >> r;
        cout << "The perimether of the circle is " << 2 * 3.14159 * r << endl;
        cout << "The surface of the circle is " << 3.14159 * r * r << endl;
    }
    return 0;
}