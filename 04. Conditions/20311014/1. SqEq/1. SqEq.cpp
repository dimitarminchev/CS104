// 01. Подобрение решението на квадратното уравнение

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    // Създаване на променливите
    int a, b, c;

    // Въвеждане на коефициентите
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;

    // Извършване на изчисленията
    float d = pow(b, 2) - 4 * a * c;

    // d < 0
    if (d < 0)
    {
        cout << "No real solutions found." << endl;
    }
    // d = 0
    else if (d == 0)
    {
        float x = (-b) / (2 * a);
        cout << "D = 0" << endl;
        cout << "x1 = x2 = " << x << endl;
    }
    // d > 0
    else if (d > 0)
    {
        float x1 = ((-b) + sqrt(d)) / (2 * a);
        float x2 = ((-b) - sqrt(d)) / (2 * a);
        cout << "D = " << d << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }

    return 0;
}
