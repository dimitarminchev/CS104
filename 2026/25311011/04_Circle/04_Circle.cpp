#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	float r;
	float pi = 3.14;

	cout << "r = ";
	cin >> r;

	float p = 2 * pi* r;
	float s = pi * pow(r, 2);
	float v = 4.0 / 3.0 * pi * pow(r, 3);

	//Perimeter
	cout << "P = " << p << endl;
	//Surface
	cout << "S = " << s << endl;
	//Volume
	cout << "V = " << v << endl;


	return 0;
}