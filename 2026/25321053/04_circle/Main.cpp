#include<iostream>
using namespace std;
int main()
{
	double r;
	double pi = 3.14;

	cout << "r=";
	cin >> r;

	double C = 2 * pi * r;
	double S = pi * r * r;
	double V = (4.0 / 3) * pi * r * r * r;

	cout << "Circumference = " << C << endl;
	cout << "Area = " << S << endl;
	cout << "Volume of sphere = " << V << endl;

	return 0;
}