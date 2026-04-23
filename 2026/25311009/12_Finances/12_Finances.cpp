// 12_Finances.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float investment;

	cout << "Enter your investment" << endl;

	cin >> investment;
	
	int menu;
	cout << "Bank menu:" << endl;
	cout << "1) 2%" << endl;
	cout << "2) 3%" << endl;
	cout << "3) 4%" << endl;
	cout << "4) 5%" << endl;
	cout << "Choose: ";

	cin >> menu;

	float receive;
	if (menu == 1) receive = investment + (investment * 0.02); //2%
	if (menu == 2) receive = investment + (investment * 0.03); //3%
	if (menu == 3) receive = investment + (investment * 0.04); //4%
	if (menu == 4) receive = investment + (investment * 0.05); //5%

	cout << "Receive: " << receive << endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
