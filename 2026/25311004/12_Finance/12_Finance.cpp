#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float investment;
	cout << "Enter the amount of investment: " << endl;
	cin >> investment;

	int menu;
	cout << "Bank menu: " << endl;
	cout << "1) 2% " << endl;
	cout << "2) 3% " << endl;
	cout << "3) 4% " << endl;
	cout << "4) 5% " << endl;
	cout << "Choose: " << endl;
	cin >> menu;

	float receive;
	if (menu == 1) receive = investment + (investment * 0.02);
	if (menu == 2) receive = investment + (investment * 0.03);
	if (menu == 3) receive = investment + (investment * 0.04);
	if (menu == 4) receive = investment + (investment * 0.05);

	cout << "Receive: " << receive << endl;

	return 0;

}