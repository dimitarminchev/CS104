#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	float a, b, c;
	cout << "Enter values for a, b and c: ";
	cin >> a >> b >> c;

	float discriminant = pow(b, 2) - (4 * a * c);

	if (discriminant < 0)
	{
		cout << "No solution" << endl;
	}
	else if (discriminant == 0)
	{
		cout << "discriminant = 0, x1 = x2, x = " << (-b) / (2 * a) << endl;
	}
	else if (discriminant > 0)
	{
		float x1 = ((-b) + sqrt(discriminant)) / (2 * a);
		float x2 = ((-b) - sqrt(discriminant)) / (2 * a);

		cout << "discriminant: " << discriminant << endl;
		cout << "x1: " << x1 << endl;
		cout << "x2: " << x2 << endl;
	}	

	return 0;
}
