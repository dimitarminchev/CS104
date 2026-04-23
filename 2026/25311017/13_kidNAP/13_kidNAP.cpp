#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float tax = 0;
	float income;	
	cout << "Please enter your income: ";
		cin >> income;

		if (income < 1720)
		{
			cout << "You are not required to pay tax." << endl;
		}
		else if (income >= 1721 && income <= 3000)
		{
			tax = (income - 1720) * 0.20;
			cout << "Your tax is: " << tax <<"lv" << endl;
		}
		else if (income >= 3001 && income <= 7200)
		{
			tax = 120 + (income - 3000) * 0.22;
			cout << "Your tax is: " << tax << "lv" << endl;
		}
		else if (income >= 7201)
		{
			tax = 1072 + (income - 7200) * 0.24;
			cout << "Your tax is: " << tax << "lv" << endl;
		}
		return 0;
}