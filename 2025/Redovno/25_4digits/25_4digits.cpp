#include <iostream>
using namespace std;
int main()
{
	// Четирицифрените числа
	for (int k = 1000; k <= 9999; k++)
	{
		// Отцепваме цифрите
		int a = (k / 1000) % 10; 
		int b = (k / 100) % 10; 
		int c = (k / 10) % 10; 
		int d = (k / 1) % 10;
		// Проверка 
		if (a + b == c + d)
		{
			cout << k << " ";
		}
	}
	return 0;
}
