#include <iostream>
using namespace std;
int main()
{
    // Декларираме целочислена променлива
    int a;

    // Въвеждаме стойност от клавиатурата
    cout << "a=?" << endl;
    cin >> a;

    // Отцепване на цифрите
    int a1 = (a / 100) % 10;
    int a2 = (a / 10) % 10;
    int a3 = (a / 1) % 10;

    // Отпечатваме резултата
    cout << a3 << a2 << a1;

    return 0;
}
