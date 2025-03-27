#include <iostream>
#include <cmath>
using namespace std;

// Рекурсивна функция за намиране на факториел
double fak(int n)
{
	if (n == 1)	return 1;
	else return n * fak(n - 1);
}

// Главна функция
int main()
{
	// Смятаме комбинациите на тотото
	float c_5_35 = fak(35) / (fak(5) * (fak(35 - 5)));
	float c_6_42 = fak(42) / (fak(6) * (fak(42 - 6)));
	float c_6_49 = fak(49) / (fak(6) * (fak(49 - 6)));

	// Отпечатване на резултатите
	cout << "Combinations 5/35 = " << c_5_35 << endl;
	cout << "Combinations 6/42 = " << c_6_42 << endl;
	cout << "Combinations 6/49 = " << c_6_49 << endl;

	return 0;
}
