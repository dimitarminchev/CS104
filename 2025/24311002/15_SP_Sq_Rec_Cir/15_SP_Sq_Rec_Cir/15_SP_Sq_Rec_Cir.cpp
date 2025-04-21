#include <iostream>
using namespace std;
int main()
{
	int shape;
	cout << "Shapes: " << endl;
	cout << "1. Rectangle" << endl;
	cout << "2. Square" << endl;
	cout << "3. Circle" << endl;

	cout << "Please select a shape: ";
	cin >> shape;

	if (shape == 1)
	{
		int a, b;
		cout << "a=";
		cin >> a;
		cout << "b=";
		cin >> b;
		int p = 2 * (a + b);
		cout << "p=" << p << endl;
		int s = a * b;
		cout << "s=" << s << endl;
	}

	if (shape == 2)
	{
		int a;
		cout << "a=";
		cin >> a;
		int p = 4 * a;
		cout << "p=" << p << endl;
		int s = a * a;
		cout << "s=" << s << endl;
	}

	if (shape == 3)
	{
		float r;
		cout << "r=";
		cin >> r;

		float p = 2 * 3.1415 * r;
		float s = 3.1415 * r * r;
		float v = (4.0 / 3.0) + 3.1415 * r * r * r;

		cout << "p =" << p << endl;
		cout << "s =" << s << endl;
		cout << "v =" << v << endl;
	}

	return 0;
}