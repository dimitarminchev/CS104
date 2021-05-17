// 04. Квадратно уравнение

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    // Създаване на променливите
    int a, b, c;

    // Въвеждане на стойности на променливите
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;

    // Извършване на операциите
    float d = pow(b, 2) - 4 * a * c;
    float x1 = ((-b) + sqrt(d)) / (2 * a);
    float x2 = ((-b) - sqrt(d)) / (2 * a);

    // Отпечатване на получения резултат
    cout << "D = " << d << endl;
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;

    return 0;
}
