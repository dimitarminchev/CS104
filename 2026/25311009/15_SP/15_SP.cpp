// 15_SP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
