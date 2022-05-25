// Задача4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	float words, a, b, c;
	cout << "word=?, a=?, b=?, c=?" << endl;
	cin >> words >> a >> b >> c;

	float remainder = (words - 20) > 0 ? (words - 20) : 0;
	double total = (a + b + (remainder * c));

	cout << "total-" << total << endl;

	return 0;
}

