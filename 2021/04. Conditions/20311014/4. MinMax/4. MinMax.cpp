// 04. Минимално и максимално от три числа

#include <iostream>
using namespace std;
int main()
{
    // Създаване на променливите
    int a, b, c;

    // Въвеждане на числата
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;

    // Нaмиране на най-малкото число
    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;

    // Нaмиране на най-голямото число
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;

    // Отпечатване на резултата
    cout << "The smallest number is: " << min << endl;
    cout << "The largest number is: " << max << endl;

    return 0;
}
