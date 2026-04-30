#include <iostream>
using namespace std;
int main()
{
	int sum = 0;
	for (int k = 100; k <= 999; k++)
	{
		if (k % 15 == 0) // :3 & :5 => :15
		{
			cout << k << " ";
			sum = sum + k;
		}
	}
	cout << endl << "sum=" << sum << endl;
	return 0;
}