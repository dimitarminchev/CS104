// 05. Лице и периметър на квадрат, кръг или триъгълник

#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    // Създаване на променливите
    int menu;
    float p, s;

    // Меню
    cout << "Shapes: \n";
    cout << "1. Square \n";
    cout << "2. Circle \n";
    cout << "3. Triangle \n";
    cout << "Number of shape: ";
    cin >> menu;

    // Извършване на изчисленията
    if (menu == 1) //Square
    {
        float a;
        cout << "Enter side length: ";
        cin >> a;
        p = 4 * a;
        s = a * a;
    }
    else if (menu == 2) //Circle
    {
        float r;
        cout << "Enter circle radius: ";
        cin >> r;
        p = 2 * M_PI * r;
        s = M_PI * pow(r, 2);
    }
    else if (menu == 3) //Triangle
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

    // Отпечатване на резултата
    cout << "Perimeter = " << p << endl;
    cout << "Area = " << s << endl;

    return 0;
}
