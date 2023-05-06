#include <iostream>
using namespace std;

/// <summary>
/// Функция за сумиране на две числа
/// </summary>
/// <param name="a">Цяло число</param>
/// <param name="b">Цяло число</param>
/// <returns>Цяло число</returns>
int sum(int a = 1, int b = 2)
{
    return a + b;
}

/// <summary>
/// Функция за сумиране на две числа
/// </summary>
/// <param name="a">Число с плаваща запетая</param>
/// <param name="b">Число с плаваща запетая</param>
/// <returns>Число с плаваща запетая</returns>
double sum(double a, double b)
{
    return a + b;
}

// Главна функнция на прогрмата
int main()
{
    // Изпълняваме метода с цели числа
    cout << sum() << endl;
    cout << sum(2) << endl;
    cout << sum(2, 3) << endl;

    // Изпълняваме метода с числа с плаваща запетая
    cout << sum(1.2, 2.1) << endl;

    return 0;
}
