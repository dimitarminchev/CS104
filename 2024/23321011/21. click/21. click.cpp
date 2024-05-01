#include <iostream>

using namespace std;

int main()
{

	for (int i = 1; i <= 100; i++)
	{
		int a = (i / 10) % 10;
		int b = i / 10;

		if (i % 7 == 0 || a == 7 || b == 7)
		{
			cout << "Click" << " ";
		}
		else
		{
			cout << i << " ";
		}
	}

	return 0;
}