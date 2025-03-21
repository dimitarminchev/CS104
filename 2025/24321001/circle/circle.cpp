#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Деклариране на радиуса
    int r;

    // Въвеждане на числа в променливата r
    cout << "r = ";
    cin >> r;

    // Намиране на периметър
    double perim = 2 * M_PI * r;

    // Намиране на площта
    double area = M_PI * r * r;

    // Намиране на обема
    double volume = 4/3 * M_PI * pow(r, 3);

    // Отпечатване на резултата
    cout << "perimeter = " << perim << endl;
    cout << "area = " << area << endl;
    cout << "volume = " << volume << endl;

    return 0;
}
