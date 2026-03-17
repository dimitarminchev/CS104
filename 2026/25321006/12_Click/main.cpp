#include<iostream>
using namespace std;
int main()
{
	for (int x = 1; x < 100; x++)
	{
		int x1 = (x / 10) % 10;
		int x2 = (x % 10) % 10;

		if (x % 7 == 0 || x1 == 7 || x2 == 7)
		{
			cout << "Click ";
		}
		else
		{
			cout << x << " ";
		}
	}
	return 0;
}