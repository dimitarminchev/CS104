#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int menu;
	cout << "Menu: " << endl;
	cout << "1) Square" << endl;
	cout << "2) Rectangle" << endl;
	cout << "3) Circle" << endl;
	cout << "Choose: " << endl;
	cin >> menu;

	if (menu == 1) {
		int a;
		cout << "a=" << endl;
		cin >> a;
		int s = a * a;
		int p = 4 * a;
		cout << "p = " << p << endl;
		cout << "s = " << s << endl;
	}
	if (menu == 2) {
		int a, b;
		cout << "a=" << endl;
		cin >> a;
		cout << "b=" << endl;
		cin >> b;
		int s = a * b;
		int p = 2 * (a + b);
		cout << "p = " << p << endl;
		cout << "s = " << s << endl;
	}
	if (menu == 3) {
		double r;
		double pi = 3.14;
		cout << "r=" << endl;
		cin >> r;
		double s = pi * r * r;
		double p = 2 * pi * r;
		cout << "p = " << p << endl;
		cout << "s = " << s << endl;
	}
}