#include <iostream>

using namespace std;

int main()
{
	int a1, a2, a3, a4;
	int sum = 0;
	for (int i = 1000; i <= 9999; i++)
	{
		a4 = (i / 1000) % 10;
		a3 = (i / 100) % 10;
		a2 = (i / 10) % 10;
		a1 = i % 10;

		if (a1 + a2 == a4 + a3)
		{
			sum = sum + i;
			cout << i << " ";
		}
	}
	cout << endl;
	cout << "The sum is: " << sum << endl;
	return 0;
}