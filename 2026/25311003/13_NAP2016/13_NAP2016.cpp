#include <iostream>
using namespace std;
int main()
{
	float income, tax = 0;
	cout << "Please enter your income for 2016: " << endl;
	cin >> income;

	if (income <= 1720) tax = 0;
	else if (income <= 3000) tax = (income - 1720) * 0.20;
	else if (income <= 7200) tax = 120 + (income - 3000) * 0.22;
	else tax = 1072 + 900 + (income - 7200) * 0.24;

	cout << "Tax = " << tax << endl;

	return 0;
}
