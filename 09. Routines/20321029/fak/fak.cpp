#include <iostream>
using namespace std;

/// <summary>
/// Рекурсивна функция за намиране на Факториел
/// </summary>
/// <param name="n">Търсен фекториел</param>
/// <returns>Резултат</returns>
int fak(int n)
{
    if (n <= 1) return 1; // exit 
    else return n * fak(n - 1);
}

/// <summary>
/// Главна функция на програмата
/// </summary>
int main()
{
    cout << "5!=" << fak(5) << endl;
    return 0;
}