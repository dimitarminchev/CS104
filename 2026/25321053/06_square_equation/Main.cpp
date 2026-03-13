#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a, b, c;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;

	double D = b * b - 4 * a * c;

	if (D > 0)
	{
		double x1 = (-b + sqrt(D)) / (2 * a);
		double x2 = (-b - sqrt(D)) / (2 * a);

		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2 << endl;
	}
	else if (D == 0)
	{
		double x = -b / (2 * a);
		cout << "x = " << x << endl;
	}
	else
	{
		cout << "No real roots" << endl;
	}

	return 0;
}
