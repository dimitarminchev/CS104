// do_while.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int i = 1;
	do
	{
		cout << i << " ";
		i = i + 1;
	} 
	while (i <= 100);
	cout << endl;
	return 0;
}