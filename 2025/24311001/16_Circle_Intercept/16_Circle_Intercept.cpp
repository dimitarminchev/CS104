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
	return 0;
}

