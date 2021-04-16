// Функция за сумиране на две числа
#include <iostream>
using namespace std;

/// <summary>
/// Функция за сумиране на две числа
/// </summary>
/// <param name="a">- First number</param>
/// <param name="b">- Second number</param>
/// <returns></returns>
int sum(int a = 2, int b = 3)
{
    return (a + b);
}


int main()
{
    cout << sum() << endl;    // 5
    cout << sum(1) << endl;   // 4
    cout << sum(1, 2) << endl;// 3
    return 0;
}

