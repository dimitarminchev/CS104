#include <iostream>
using namespace std;

/// <summary>
/// Рекурсивна функция за намиране на степен на двойката
/// </summary>
/// <param name="n">Търсена степен</param>
/// <returns>Резултат</returns>
int step2(int n)
{
    if (n <= 1) return 2; // exit 
    else return 2 * step2(n - 1);
}

/// <summary>
/// Главна функция на програмата
/// </summary>
int main()
{
    // Отпечатване на първите 10 степени на числото 2
    for (int k = 1; k <= 10; k++)
    {
        cout << "2^" << k << "=" << step2(k) << endl;
    }
    return 0;
}