// 14_MinMaxOf3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int a, b, c;

	cout << "Enter a, b and c:" << endl;
	cin >> a >> b >> c;

	int min = a;

	if (min > b) min = b;
	if (min > c) min = c;

	int max = a;

	if (max < b) max = b;
	if (max < c) max = c;

	cout << "Min = " << min << " ; " << "Max = " << max;
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
