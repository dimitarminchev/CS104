// 09_6digit.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int number;

	cin >> number;

	int a6 = (number / 100000) % 10;
	int a5 = (number / 10000) % 10;
	int a4 = (number / 1000) % 10;
	int a3 = (number / 100) % 10;
	int a2 = (number / 10) % 10;
	int a1 = (number / 1) % 10;

	int multipl = a2 * a4 * a6;

	cout << multipl << endl;
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
