#include <iostream>
using namespace std;
int main()
{
    // Променливи за три цели числа
    int a, b, c;

    // Въвеждаме числата от клавиатурата
    cout << "a=?, b=?, c=?" << endl;
    cin >> a >> b >> c;

    // Нaмиране на максимално  число
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;

    // Нaмиране на минимално  число
    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;

    // Отпечатване на получените min и max
    cout << "min = " << min << endl;
    cout << "max = " << max << endl;

    return 0;
}
