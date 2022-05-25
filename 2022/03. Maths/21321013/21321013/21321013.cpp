// 21321013.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{

		int a, b, c, d1, d2, d3;

		cout << "a=?, b=?, c=?" << endl;
		cin >> a >> b >> c;

		cout << "d1=?, d2=?, d3=?" << endl;
		cin >> d1 >> d2 >> d3;

		double h = (a * b * c) / (d1 + d2 + d3);
		cout << "h=" << h << endl;

		return 0;
}







