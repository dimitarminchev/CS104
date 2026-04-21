#include <iostream>
using namespace std;

int main() {
	int num;
	cout << "Enter a 5 digit number: ";
	cin >> num;

	int d1, d3, d5;

	d1 = num % 10;
	d3 = (num / 100) % 10;
	d5 = num / 10000;

	int sum = d1 + d3 + d5;
	cout << "Sum : " << sum << endl;

	return 0;
}