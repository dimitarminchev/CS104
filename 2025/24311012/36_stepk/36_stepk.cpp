﻿#include <iostream>
using namespace std;
// Рекурсивна функция за повдигане на число на степен
int step(int x, int n)
{
	if (n == 1) return x;
	else return x * step(x, n - 1);
}
// Главна функция
int main()
{
	int x, n;
	cout << "x=";
	cin >> x;
	cout << "n=";
	cin >> n;
	cout << x << "^" << n << "=" << step(x, n) << endl;
	return 0;
}