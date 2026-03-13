#include<iostream>
using namespace std;

int main()
{
	int a;
	cout << "Enter number = ";
	cin >> a;

	int c1 = a % 10;
	int c2 = (a / 10) % 10;
	int c3 = a / 100;

	int reversed = c1 * 100 + c2 * 10 + c3;

	cout << "Reversed number = " << reversed << endl;

		return 0;

}