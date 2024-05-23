#include <iostream>

using namespace std;

int main()
{
	int num, a1, a2, a3, a4, a5, a6;
	cout << "Number: ";
	cin >> num;

	a6 = (num / 100000) % 10;
	a5 = (num / 10000) % 10;
	a4 = (num / 1000) % 10;
	a3 = (num / 100) % 10;
	a2 = (num / 10) % 10;
	a1 = num % 10;

	cout << a2 * a4 * a6 << endl;

	return 0;
}