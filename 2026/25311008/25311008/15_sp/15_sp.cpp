// 15_sp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int menu;
	cout << "Menu:" << endl;
	cout << "1) Square" << endl;
	cout << "2) Rectangle" << endl;
	cout << "3) Circle" << endl;
	cout << "Please select: " << endl;
	cin >> menu;


	if (menu == 1)
	{
		int a;
		cout << "a=";
		cin >> a;
		int s = a * a;
		int p = 4 * a;
		cout << "p=" << p << endl << "s=" << s << endl;
	}
	if (menu == 2)
	{
		int a, b;
		cout << "a=";
		cin >> a;
		cout << "b=";
		cin >> b;
		int s = a * b;
		int p = a * 2 + b * 2;
		cout << "p=" << p << endl << "s=" << endl;
	}
	if (menu == 3)
	{
		int r;
		cout << "r=";
		cin >> r;
		int s = 3.14 * r * r;
		int p = 2 * 3.14 * r;
		cout << "p=" << p << endl << "s=" << s << endl;
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
