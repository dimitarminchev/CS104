#include <iostream>
using namespace std;

int main()
{
    int a;

	cout << "enter a three digit number please: ";
	cin >> a;

	int a1 = (a / 1) % 10;
	int a2 = (a / 10) % 10;
	int a3 = (a / 100) % 10;

	cout << "your selected number in reverse is: " << a1 * 100 + a2 * 10 + a3 << endl;

	return 0;
}