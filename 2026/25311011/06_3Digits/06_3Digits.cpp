#include <iostream>
using namespace std;

int main() {
	int a;
	cout << "Enter a 3-digit number:";
	cin >> a;

	int d1, d2, d3;
	d1 = a % 10; // last digit
	d2 = (a / 10) % 10; // middle digit
	d3 = a / 100; // first digit


	cout << d1 << d2 << d3;
	return 0;
}