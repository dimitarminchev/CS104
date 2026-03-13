#include<iostream>
using namespace std;

int main()
{
	int num;

	cout << "Enter 3 digit number to reverse: ";
	cin >> num;

	int n1 = (num / 1) % 10;
	int n2 = (num / 10) % 10;
	int n3 = (num / 100) % 10;

	cout << n1 << n2 << n3 << endl;
	return 0;

}