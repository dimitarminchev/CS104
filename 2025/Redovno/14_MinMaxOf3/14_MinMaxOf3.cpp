#include <iostream>
using namespace std;
int main()
{
    // Декларираме три целочислени променливи
    int a, b, c;

    // Въвеждаме стойности в промеливите
    cout << "a b c" << endl;
    cin >> a >> b >> c;

    // Намиране на минимално и максимално от трите числа
    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;

    // Отпечатваме резултат
    cout << "min = " << min << endl;
    cout << "max = " << max << endl;

    return 0;
}
