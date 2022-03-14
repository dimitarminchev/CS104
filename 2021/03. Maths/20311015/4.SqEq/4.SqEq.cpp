
// 4. Квадратно уравнение
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    // Коефициенти на квадратното уравнение
    int a, b, c;

    // Въвеждаме коефициентите
    cout << "a=?, b=?, c=?" << endl;
    cin >> a >> b >> c;

    // Извършваме математически сметки
    float d = pow(b, 2) - 4 * a * c;
    float x1 = ((-b) + sqrt(d)) / (2 * a);
    float x2 = ((-b) - sqrt(d)) / (2 * a);

    // Отпечатаме получения резултат
    cout << "d=" << d << endl;
    cout << "x1=" << x1 << endl;
    cout << "x2=" << x2 << endl;

    return 0;
}