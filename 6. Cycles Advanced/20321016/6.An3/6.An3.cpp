// 6.An3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;

	cout << "Upper Limit: ";
	cin >> n;

	for (int k = 1; k <= n; k++)
	{
		float Ak = pow((1.0 + (1.0 / k)), k);
		cout << Ak << endl;
	}

	return 0;
}