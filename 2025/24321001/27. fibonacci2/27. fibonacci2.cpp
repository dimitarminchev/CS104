#include <iostream>
#include <cmath>
using namespace std;


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
