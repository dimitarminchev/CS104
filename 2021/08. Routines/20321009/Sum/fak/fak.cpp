#include <iostream>
using namespace std;


/// <summary>
/// Рекурсивна функция за намиране на факториел
/// </summary>
/// <param name="n">Търсен факториел</param>
/// <returns>Резултат</returns>
int fak(int n)
{
	if (n <= 1) return 2;
	else return 2 * fak(n - 1);
}

/// <summary>
/// Главна функция на програмата
/// </summary>
int main()
{
	cout << "5!=" << fak(5) << endl;
	return 0;
}