#include<iostream>
using namespace std;

int main()
{
	int number;
	cout << "Enter a three digit number to reverse: ";
	cin >> number;
	
	int first = number / 100;
	int second = (number % 100) / 10;
	int third = (number % 100) % 10;

	cout << "Reverse: " << third << second << first << endl;
	return 0;
}
