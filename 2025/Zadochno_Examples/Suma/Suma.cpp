// 02. suma.cpp = Намиране на сумата на две цели числа
#include <iostream>
using namespace std;
int main()
{
    // Деклариране на две променливи
    int a, b;

    // Въвеждане на числа в променливата а
    cout << "a=";
    cin >> a;

    // Въвеждане на числа в променливата b
    cout << "b=";
    cin >> b;

    // Намиране на сума
    int c = a + b;

    // Отпечатваме резултата
    cout << "a+b=" << c << endl;

    return 0;
}
