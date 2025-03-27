﻿#include <iostream>
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
	int n;
	cout << "n = ";
	cin >> n;

	for (int k = 1; k <= n; k++)
	{
		printf("2^%d = %d\n", k, step2(k));
	}

}
