#include <iostream>
using namespace std;
int main()
{
	for (int k = 1; k < 100; k++)
	{
		int a = k / 10;
		int b = k % 10;
		if (a == 7 || b == 7 || k % 7 == 0)
		{
			cout << "Click ";
		}
		else
		{
			cout << k << " ";
		}
	}
    return 0;
}
