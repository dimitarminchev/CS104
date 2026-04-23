#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int choice;
	
	cout << "Menu:" << endl;
	cout << "1) Square" << endl;
	cout << "2) Rectangle" << endl;
	cout << "3) Circle" << endl;
	cout << "Please select one: ";
	cin >> choice;
	if (choice == 1)
	{
		int a;
		cout << "Enter side a: ";
		cin >> a;
		int s = a * a;
		int p = 4 * a;
		cout << "p=" << p << endl << "s=" << s << endl;
	}
	else if (choice == 2)
	{
		int a, b;
		cout << "Enter side a: ";
		cin >> a;
		cout << "Enter side b: ";
		cin >> b;
		int s = a * b;
		int p = 2 * (a + b);
		cout << "p=" << p << endl << "s=" << s << endl;
	}
	else if (choice == 3)
	{
		float r;
		cout << "Enter radius: ";
		cin >> r; 
		int s = 3.14 * pow(r, 2);
		int p = 2 * 3.14 * r;
		cout << "p=" << p << "s=" << s << endl;
	}
	return 0;

}