#include <iostream>
using namespace std;

/// <summary>
/// Функция за сумиране на две числа
/// </summary>
/// <param name="a">Първо число</param>
/// <param name="b">Второ число</param>
/// <returns>Сума на числата</returns>
int sum(int a = 2, int b = 3)
{
    return (a + b);
} 

/// <summary>
/// Главна функция на програмата
/// </summary>
int main()
{
    // Примерна употреба на функцията за сумиране на две числа
    cout << sum() << endl;    // 5
    cout << sum(1) << endl;   // 4
    cout << sum(1,2) << endl; // 3
    return 0;
}
