#include <iostream>
using namespace std;
int main()
{
	int menu
		cout << "Menu:" << endl;
	cout << "1) Square" << endl;
	cout << "2) Rectangle" << endl;
	cout << "3) Circle" << endl;
	cout << "Please Select: ";
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
		int p = 2 * (a + b);
		cout << "p=" << p << endl << "s=" << s << endl;
    }

	if (menu == 3)
	{
		float r;
		cout << "r=";
		cin >> r;
		int = s = 3.14
	}
}