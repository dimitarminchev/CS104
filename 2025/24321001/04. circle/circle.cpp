#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Деклариране на радиуса
    float r;

    // Въвеждане на числа в променливата r
    cout << "r = ";
    cin >> r;

    // Намиране на периметър
    float perimeter = 2 * M_PI * r;

    // Намиране на площта
    float area = M_PI * r * r;

    // Намиране на обема
    float volume = (4.0/3.0) * M_PI * pow(r, 3);

    // Отпечатване на резултата
    cout << "perimeter = " << perimeter << endl;
    cout << "area = " << area << endl;
    cout << "volume = " << volume << endl;

    return 0;
}
