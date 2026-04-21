#include <iostream>
using namespace std;

int main() {
	int num;
	cout << "Enter a 6 digit number: ";
	cin >> num;

	int d2, d4, d6;
	d2 = (num / 10) % 10;
	d4 = (num / 1000) % 10;
	d6 = num / 100000;

	int product = d2 * d4 * d6;

	cout << d2 << " x " << d4 << " x " << d6 << " = " << product << endl;
	return 0;
}