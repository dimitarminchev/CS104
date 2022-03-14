#include <iostream>
using namespace std;


/// <summary>
/// Рекурсивна функция за намиране на факториел
/// </summary>
/// <param name="n">Търсен факториел</param>
/// <returns>Резултат</returns>
double fak(int n)
{
	if (n <= 1) return 1;
	else return n * fak(n - 1);
}

/// <summary>
/// Главна функция на програмата
/// </summary>
int main()
{
	double C_5_35 = fak(35) / (fak(5) * fak(35 - 5));
	cout << C_5_35 << endl;
	return 0;
}