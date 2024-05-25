#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cout << "Enter Number: ";
	cin >> n;

	int sum = 0;

	for (int i = 1; i <= n; i++)
	{
		sum = sum + i;
	}

	cout << sum << endl;

	return 0;
}