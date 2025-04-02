#include <iostream>
using namespace std;

int main() {

	int number;
	cin >> number;

	int a = number / 1000;
	int b = (number / 100) % 10;
	int c = (number / 10) % 10;
	int d = number % 10;

	int sum_digits = a + b + c + d;
	int product_digits = a * b * c * d;

	cout << sum_digits << " " << product_digits << endl;

	return 0;
}





