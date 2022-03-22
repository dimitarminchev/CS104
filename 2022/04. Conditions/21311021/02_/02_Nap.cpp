#include <iostream> 
using namespace std;
int main()
{
	float income, tax;

	cout << "Please enter income for 2016: ";
	cin >> income;

	if (income <= 1620)
	{
		tax = 0;
	}
	else if (income > 1620 && income <= 3000)
	{
		tax = (income - 1620) * 0.18;
	}
	else if (income > 3000 && income <= 7200)
	{
		tax = 168 + (income - 3000) * 0.2;
	}
	else
	{
		tax = 1072 + (income - 7200) * 0.22;
	}

	cout << "Tax = " << tax << endl;

	return 0;
}