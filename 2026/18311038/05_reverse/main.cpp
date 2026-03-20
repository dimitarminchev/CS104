#include<iostream>
using namespace std;
int main()
{
	int a;

	cout << "Enter 3 digit number to reverse:\n";
	cin >> a;

	int a1 = (a / 1) % 10;
	int a2 = (a / 10) % 10;
	int a3 = (a / 100) % 10;

	cout << a1 << a2 << a3 << endl;
	return 0;
}