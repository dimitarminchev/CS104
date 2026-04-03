#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float investment;
	cout  << "Enter the amount of money to invest: ";
	cin >> investment;


	int menu;
	cout << "Bank Finance Menu:" << endl;
	cout << "1) 2% " << endl;
	cout << "2) 3% " << endl;
	cout << "3) 4% " << endl;
	cout << "4) 5% " << endl;
	cout << "Choose the interest rate: ";
	cin >> menu;
	
	float receive;
	if (menu == 1)
	{
		receive = investment + (investment * 0.02);
	}
	else if (menu == 2)
	{
		receive = investment + (investment * 0.03);
	}
	else if (menu == 3)
	{
		receive = investment + (investment * 0.04);
	}
	else if (menu == 4)
	{
		receive = investment + (investment * 0.05);
	}
	else
	{
		cout << "Invalid choice." << endl;
	}

	cout << "The amount of money you will receive after one year is: " << receive << endl;

	return 0;





}
