#include <iostream>
#include <cmath>
using namespace std;

// Рекурсивна функция за намиране степен на двойката
int step2(int n)
{
	if (n == 1)	return 2;
	else return 2 * step2(n - 1);
}

// Главна функция
int main()
{

	// Създаваме масив с 10 елемента, и първите два са единици
	int fibArr[10] = { 1,1 };

	// Изчисляване на останалите елементи
	for (int k = 2; k < 10; k++)
	{
		fibArr[k] = fibArr[k - 2] + fibArr[k - 1];
	}

	// Отпечатване на резултата
	for (int k = 0; k < 10; k++)
	{
		printf("%d ", fibArr[k]);
	}

}
