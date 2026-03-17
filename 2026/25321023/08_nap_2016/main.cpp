#include <iostream>
using namespace std;

int main()
{
	float income, tax = 0;

	// input
	cout << "Enter your income for 2016:\n";
	cin >> income;

	//maths
	if (income <= 2160) tax = 0;
	else if (income <= 3000) tax = (income - 2160) * 0.18;
	else if (income <=7200) tax = 168 + (income - 3000) * 0.2;
	else tax = 1072 + (income - 7200) * 0.22;

	// output
	cout << "Your tax is: " << tax << endl;
	return 0;

}