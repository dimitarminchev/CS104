// 07_SumPro.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int a;


	cout << "Enter a 4 digit number:";
	cin >> a;


	int a4 = (a / 1000) % 10;
	int a3 = (a / 100) % 10;
	int a2 = (a / 10) % 10;
	int a1 = (a / 1) % 10;


	cout << "The sum of digits:" << a4 + a3 + a2 + a1 << endl;
	cout << "The multiplication of digits:" << a4 * a3 * a2 * a1 << endl;
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
