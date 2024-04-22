#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
	double v, r, h;
		cout << "Input the radius of the cylinder :" << endl;
		cin >> r;
		cout << "Input the height of the cylinder :" << endl;
		cin >> h;
		v = M_PI * pow(r, 2) * h;
		cout << "The volume of a cylinder is: " << v << endl;
		return 0;
}