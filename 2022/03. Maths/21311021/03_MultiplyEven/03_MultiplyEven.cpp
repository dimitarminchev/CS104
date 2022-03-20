#include <iostream>
using namespace std;
int main()
{
	int n;
	int result = 1;
	bool side = true;

	cin >> n;

	for (int i = 0; i < 5; i++)
	{

		if (side)
		{
			result = result * (n % 10);
			side = false;
		}
		else
		{
			n /= 100;
			side = true;
		}
	}
	cout << "Result: " << result;

	return 0;
}