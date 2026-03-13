#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	double a, b, c;

	cout << "Enter a = ";
	cin >> a;
	cout << "Enter b = ";
	cin >> b;
	cout << "Enter c = ";
	cin >> c;

	if (a == 0)
	{
		cout << "This is not a quadratic equation." << endl;
		return 0;
	}

	double D = b * b - 4 * a * c;

	cout << fixed;
	cout << setprecision(2);

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
		cout << "No real roots." << endl;
	}

	return 0;
}
