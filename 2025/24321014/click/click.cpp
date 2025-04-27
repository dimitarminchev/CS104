#include <iostream>
using namespace std;
int main()
{

	// Игра "Цък" за числата от 1 до 100
	for (int k = 1; k <= 100; k++)
	{

		int k1 = k / 10;
		int k2 = k % 10;

		// Проверки ако съдържа или се дели на 7
		if (k1 == 7 || k2 == 7 || k % 7 == 0)
		{
			// отпечатваме "Click"
			cout << "Click";

		}
		else
		{
			// иначе отпечатваме числото по ред
			cout << k;
		}

		cout << " ";
	}
}