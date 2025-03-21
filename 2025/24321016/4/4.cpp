// 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float r;

	cout << "r=";
	cin >> r;

	float p = 2 * M_PI * r;
	float s = pow(M_PI, 2) * r;
	float v = (4.0 / 3.0) * M_PI * pow(r, 3);

	cout << "p=" << p << endl;
	cout << "s=" << s << endl;
	cout << "v=" << v << endl;

	return 0;

}
