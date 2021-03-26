//Персонални финанси

#include <iostream> 
#include <cmath> 
using namespace std;
int main()

{
	int menu;
	float investment;
	float rate;

	cout << "Personal Finances 1.0 Main Menu" << endl;
	cout << "1. Personal Finances" << endl;
	cout << "2. Personal Homeover" << endl;
	cout << "3. Personal Gold" << endl;
	cout << "4. Small Business" << endl;
	cout << "5.Big Business" << endl;
	cout << "6.Gold Busines" << endl;
	cout << "Make your choise:" << endl;
	cin >> menu;
	cout << "Please enter your investment:" << endl;
	cin >> investment;

	if (menu == 1) rate = 2.3;
	else if (menu == 2) rate = 2.6;
	else if (menu == 3) rate = 2.9;
	else if (menu == 4) rate = 3.3;
	else if (menu == 5)rate = 3.5;
	else if (menu == 6)rate = 3.8;

	

	float sum = investment + (investment * rate) / 100;


	cout << "Deposit total: " << sum << endl;


	return 0;
}