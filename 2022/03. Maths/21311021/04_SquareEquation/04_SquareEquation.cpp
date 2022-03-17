#include <iostream>
#include <math.h> 
using namespace std;
int main()
{
	int a, b, c;
	int d;

	cin >> a >> b >> c;

	d = pow(b, 2) - 4 * a * c;


	if (d < 0)
	{
		cout << "No roots";
	}
	else if (d == 0)
	{
		float x;

		x = (-b + sqrt(d)) / (2 * a);

		cout << "x: " << x;
	}
	else
	{
		float x1, x2;

		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);

		cout << "x1: " << x1;
		cout << "\n";
		cout << "x2: " << x2;
	}

	return 0;
}