// primes.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int i = 2; i <= n; i++)
	{
		bool isPrime = true;
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				isPrime = false;
			}
		}
		if (isPrime == true) cout << i << " ";
	}
	return 0;
}

