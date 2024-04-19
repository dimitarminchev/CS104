#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float x1, y1, x2, y2, r1, r2;

	cout << "Enter x1 y1 r1: ";
	cin >> x1 >> y1 >> r1;

	cout << "Enter x2 y2 r2: ";
	cin >> x2 >> y2 >> r2;

	float d = sqrt((pow((x2 - x1), 2)) + (pow((y2 - y1), 2)));

	if (d > r1 + r2)
	{
		cout << "The circles do not intersect." << endl;
	}
	else if (d < abs(r1 - r2))
	{
		cout << "One circle is contained within the other." << endl;
	}
	else if (d == r1 + r2)
	{
		float x3 = x1 + (r1 / d) * (x2 - x1);
		float y3 = y1 + (r1 / d) * (y2 - y1);
		cout << "There is one common point at (" << x3 << ", " << y3 << ")." << endl;
	}
	else
	{
		float a = (pow(r1, 2) - pow(r2, 2) + pow(d, 2)) / (2 * d);
		float h = sqrt(pow(r1, 2) - pow(a, 2));

		float x3 = x1 + a * (x2 - x1) / d;
		float y3 = y1 + a * (y2 - y1) / d;

		float x4 = x3 + h * (y2 - y1) / d;
		float y4 = y3 - h * (x2 - x1) / d;

		float x5 = x3 - h * (y2 - y1) / d;
		float y5 = y3 + h * (x2 - x1) / d;

		cout << "The circles intersect at (" << x4 << ", " << y4 << ") and (" << x5 << ", " << y5 << ")." << endl;
	}

	return 0;
}