// 14_MinMaxOf3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	double a, b, c;

	cout << "Vuvedi tri chisla:";
	cin >> a >> b >> c;

	double min = a;
	double max = a;

	if (b < min) min = b;
	if (c < min) min = c;

	if (b > max) max = b;
	if (c > max) max = c;

	cout << "Minimalnoto chislo e:" << min << endl;
	cout << "Maksimalnoto chislo e:" << max << endl;

	return 0;
}

