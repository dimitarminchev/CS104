#include <iostream>
using namespace std;
int main()
{
	int n;
	int sum = 0;
	bool side = true;

	cin >> n;

	for (int i = 0; i < 5; i++)
	{
		if (side)
		{
			sum += n % 10;
			side = false;
		}
		else
		{
			n /= 100;
			side = true;
		}
	}
	cout << "Sum: " << sum;

	return 0;
}