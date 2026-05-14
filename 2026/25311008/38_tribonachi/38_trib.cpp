// 38_tribonachi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	// Creating a massive with N elemnts, of which the first three are 1
	const int N = 10; 
	double trib[N] = { 1,1,1 };
	

	// Finding other numbers from the row of 10
	for (int k = 3; k < N; k++)
	{
		trib[k] = trib[k - 3] + trib[k - 2] + trib[k - 1];
	}
	// Printing the row
	for (int k = 0; k < N; k++)
	{
		cout << trib[k] << " ";
	}
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
