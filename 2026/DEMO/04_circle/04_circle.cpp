#include <iostream>
using namespace std;
int main()
{
    // Декларираме променлива за радиус
    float r;

    // Въвеждаме число за радиус
    cout << "r=";
    cin >> r;

    // МЕга яки сметки
    float p = 2 * 3.14 * r;
    float s = 3.14 * r * r;
    float v = (4.0 / 3.0) * 3.14 * r * r * r;

    // Печатим получените сметки
    cout << "p=" << p << endl;
    cout << "s=" << s << endl;
    cout << "v=" << v << endl;

    return 0;
}
