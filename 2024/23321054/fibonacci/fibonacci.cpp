// fibonacci.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a = 1, b = 1, c = a + b;
	cout << a << " " << b << " " << c << " ";
	while (c < n)
	{
		a = b;
		b = c; 
		c = a + b;
		if (c < n) cout << c << " ";
	}
	return 0;
}

