#include <iostream>
using namespace std;
int main()
{
	int number;
	cout << "Insert 6 digits:";
	cin >> number;

	if (number < 100000 || number > 999999)
	{
		cout << "Please insert a valid digit" << endl;
		return 1;
	}
	int product = 1;
	int digits[6];

	for (int i = 5; i >= 0; i--)
	{
		digits[i] = number % 10;
		number /= 10;
	}
	for (int i = 0; i < 6; i += 2)
	{
		product *= digits[i];
	}
	cout << "The sum is:" << product << endl;
	return 0;

}