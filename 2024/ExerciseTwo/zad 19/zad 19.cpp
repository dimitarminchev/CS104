#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double a, c, r;
	cout << "Input the radius(1 / 2 of diameter) of a circle :" << endl;
	cin >> r;
	a = M_PI * pow(r,2);
	c = 2 * M_PI * r;
	cout << "The area of the circle is :" << a << endl;
	cout << "The circumference of the circle is :" << c << endl;
	return 0;
	 
		
}

