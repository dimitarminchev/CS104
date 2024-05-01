// an2.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x, n;
	cin >> x >> n;

	for (int k = 1; k <= n; k++)
	{
		float An = 1.0 / pow(k, 2);
		cout << An << endl;
	}

	return 0;
}

