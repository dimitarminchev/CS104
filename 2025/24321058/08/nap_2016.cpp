#include <iostream>
using namespace std;

int main() {
	double income, tax_rate, tax;
	tax_rate = .1;
	
	cout << "Income for 2016: ";
	cin >> income;
	
	tax = tax_rate * income;

	cout << "Tax for 2016 is " << tax << " leva" << '\n';

	return 0;
}
