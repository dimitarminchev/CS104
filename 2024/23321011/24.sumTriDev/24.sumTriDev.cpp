#include <iostream>

using namespace std;

int main()
{
	int sum = 0;
	for (int i = 100; i <= 999; i++)
	{
		if (i % 5 == 0 && i % 3 == 0)
		{
			sum = sum + i;
			cout << i << " ";
		}
	}
	cout << "The sum is: " << sum << endl;
	return 0;
}