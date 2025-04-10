#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float x1, y1, r1;
	cout << "Input x y coordinates and r value for circle 1: " << endl;
	cout << "x= ";
	cin >> x1;
	cout << "y= ";
	cin >> y1;
	cout << "r= ";
	cin >> r1;

	float x2, y2, r2;
	cout << "Input x y coordinates and r value for circle 2: " << endl;
	cout << "x= ";
	cin >> x2;
	cout << "y= ";
	cin >> y2;
	cout << "r= ";
	cin >> r2;

	float d;
	d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

	if (d > r1 + r2) cout << "Circles do not intercept." << endl;
	if (d == r1 + r2) cout << "Circles intercept once." << endl;
	if (d < r1 + r2) cout << "Circles intercept twice." << endl;
	{
		float a = (pow(r1, 2) - pow(r2, 2) + pow(d, 2)) / (2 * d);
		float h = sqrt(pow(r1, 2) - pow(a, 2));
		float Ax, Ay;
			Ax = x1 + a * (x2 - x1) / d + h * (y2 - y1) / d;
			Ay = y1 + a * (y2 - y1) / d - h * (x2 - x1) / d;
			cout << "Ax= " << Ax << endl;
			cout << "Ay= " << Ay << endl;

			float Bx, By;
			Bx = x1 + a * (x2 - x1) / d - h * (y2 - y1) / d;
			By = y1 + a * (y2 - y1) / d + h * (x2 - x1) / d;
			cout << "Bx= " << Bx << endl;
			cout << "By= " << By << endl;


	}
	return 0;
}

