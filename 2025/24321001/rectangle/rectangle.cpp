// rectangle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    // Деклариране на две променливи, страни на правоъгълник
    int a, b;

    // Въвеждане на числа в променливата a
    cout << "a = ";
    cin >> a;

    // Въвеждане на числа в променливата b
    cout << "b = ";
    cin >> b;

    // Намиране на периметър
    int perim = (a + b) * 2;

    // Намиране на площта
    int area = a * b;

    // Отпечатване на резултата
    cout << "perimeter = " << perim << endl;
    cout << "area = " << area << endl;

    return 0;
}


