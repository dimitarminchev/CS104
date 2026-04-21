#include <iostream>
using namespace std;

int main() {
	int num;
	cout << "Enter a 4 digit number: ";
	cin >> num;

	int d1, d2, d3, d4;
	d1 = num % 10; 
	d2 = (num / 10) % 10; 
	d3 = (num / 100) % 10; 
	d4 = num / 1000; 

	int sum = d1 + d2 + d3 + d4;
	int product = d1 * d2 * d3 * d4;

	cout << "The sum of the digits is: " << sum << endl;
	cout << "The product of the digits is: " << product << endl;
}