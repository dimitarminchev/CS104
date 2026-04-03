// 05_Moneyinthepocket.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int oneec, twoec, fiveeec, tenec, twentyec, fiftyec, oneeuro, twoeuro;


	cout << "oneec=";
	cin >> oneec;


	cout << "twoec=";
	cin >> twoec;


	cout << "fiveeec=";
	cin >> fiveeec;


	cout << "tenec=";
	cin >> tenec;


	cout << "twentyec=";
	cin >> twentyec;

	cout << "fiftyec=";
	cin >> fiftyec;


	cout << "oneeuro=";
	cin >> oneeuro;


	cout << "twoeuro=";
	cin >> twoeuro;


	cout << "Pocket money:" << oneec * 0.01 + twoec * 0.02 + fiveeec * 0.05 + tenec * 0.10 + twentyec * 0.20 + fiftyec * 0.50 + oneeuro + twoeuro * 2.00 << " euro" << endl;
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
