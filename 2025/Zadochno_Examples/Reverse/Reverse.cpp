// 05. reverse.cpp = Обръщане на трицифрено число
#include <iostream>
using namespace std;
int main()
{
    // Създаване на целочислена променлива
    int a;

    // Въвеждане на трицифрено число
    cin >> a;

    // Отцепване на цифрите на числото
    int a1 = (a / 100) % 10;
    int a2 = (a / 10) % 10;
    int a3 = (a / 1) % 10;

    // Отпечатване на резултата
    cout << a3 << a2 << a1 << endl;

    return 0;
}
