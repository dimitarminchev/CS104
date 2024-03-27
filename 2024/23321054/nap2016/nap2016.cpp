// nap2016.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float income = 0, tax = 0;
	cout << "Enter income 2015: ";
	cin >> income;

	if (income <= 2160) tax = 0;
	else if (income <= 3000) tax = (income - 2160) * 0.18;
	else if (income <= 7200) tax = 168 + (income - 3000) * 0.20;
	else tax = 1072 +  (income <= 7200) * 0.22;

	cout << "Tax =" << tax << endl;
	return 0;
}

