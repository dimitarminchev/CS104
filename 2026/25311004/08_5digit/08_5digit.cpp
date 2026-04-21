#include<iostream>
using namespace std;
int main()
{
	int A;
	cout << "Enter Numbers: ";
	cin >> A;
	int A1 = (A / 10000) % 10;
	int A2 = (A / 1000) % 10;
	int A3 = (A / 100) % 10;
	int A4 = (A / 10) % 10;
	int A5 = (A / 1) % 10;
	cout << "Sum: " << A1 + A3 + A5;
	return 0;
}