#include <iostream>
using namespace std;

int main()
{
	int A;
	cout << "Enter 4-digit number: ";
	cin >> A;
	int A1 = A / 1000;
	int A2 = (A / 100) % 10;
	int A3 = (A / 10) % 10;
	int A4 = A % 10;

	int sum = A1 + A2 + A3 + A4;
	int product = A1 * A2 * A3 * A4;
	cout << sum << endl;
	cout << product << endl;
	return 0;
}