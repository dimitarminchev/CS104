#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int menu;
	cout << "Menu:" << endl;
	cout << "1) Square" << endl;
	cout << "2) Rectangle" << endl;
	cout << "3) Circle" << endl;
	cout << "Please select: ";
	cin >> menu;

	int a, b, s, p, r;

	if (menu == 1)
	{
		cout << "a = ";
		cin >> a;
		p = 4 * a;
		s = a * a;
		cout << "a = " << " ; " << "p = " << p << " ; " << "s = " << s;
	}
	if (menu == 2)
	{
		cout << "a = ";
		cin >> a;
		cout << "b = ";
		cin >> b;
		p = (a + b) * 2;
		s = a * b;
		cout << "a = " << a << " ; " << "b = " << b << " ; " << "p = " << p << " ; " << "s = " << s;
	}
	if (menu == 3)
	{
		cout << "r = ";
		cin >> r;
		p = 2 * 3.14 * r;
		s = 3.14 * r * r;
		cout << "r = " << r << " ; " << "p = " << p << " ; " << "s = " << s;
	}
	return 0;
}