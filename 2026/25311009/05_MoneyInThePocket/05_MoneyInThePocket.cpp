// 05_MoneyInThePocket.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	float one_ec, two_ec, five_ec, ten_ec, twenty_ec, fifty_ec, one_e, two_e;


	cout << "Enter euro cents : 0.01, 0.02, 0.05, 0.10, 0.20, 0.50, 1.00, 2,00" << endl;
	cin >> one_ec >> two_ec >> five_ec >> ten_ec >> twenty_ec >> fifty_ec >> one_e >> two_e;

	one_ec = one_ec / 100;
	two_ec = two_ec * 2 / 100;
	five_ec = five_ec * 5 / 100;
	ten_ec = ten_ec * 10 / 100;
	twenty_ec = twenty_ec * 20 / 100;
	fifty_ec = fifty_ec * 50 / 100;
	two_e = two_e * 2;

	cout << one_ec + two_ec + five_ec + ten_ec + twenty_ec + fifty_ec + one_e + two_e << " " << "euro" << endl;



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
