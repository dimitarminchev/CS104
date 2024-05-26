#include <iostream>

using namespace std;

int main()
{
	int num, a1, a2, a3, a4, a5;
	cout << "Number: ";
	cin >> num;

	a5 = (num / 10000) % 10;
	a4 = (num / 1000) % 10;
	a3 = (num / 100) % 10;
	a2 = (num / 10) % 10;
	a1 = num % 10;

	cout << a1 + a3 + a5 << endl;

	return 0;
}