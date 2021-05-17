#include <iostream>
using namespace std;
int main()
{
	int a, b, c = 0;
	cin >> a >> b;

	for (int i = a; i <= b; i++)
	{
		if (i % 3 == 0 && i % 2 != 0)
		{
			c = c + i;
		}
	}
	cout << c;
	return 0;
}