// 123456 click.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	for (int k = 1; k <= 100; k++)
	{
		int k1 = k / 10;
		int k2 = k % 10;
		if (k1 == 7 || k2 == 7 || k % 7 == 0)
		{
			cout << "click ";

		}
		else
		{
			cout << k << " ";
		}
	}
}