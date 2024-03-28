// an3.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x, n;
	cin >> x >> n;

	for (int k = 1; k <= n; k++)
	{
		float An = pow(1.0 + 1.0/k,k);
		cout << An << endl;
	}
	return 0;
}

