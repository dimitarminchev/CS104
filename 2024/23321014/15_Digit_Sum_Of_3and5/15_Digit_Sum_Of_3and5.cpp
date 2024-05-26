#include <iostream>
#include <cmath>;
using namespace std;

int main()
{
    int sum = 0;
    
	for (int i = 100; i <= 999; i++)
	{
		if (i % 15 == 0)
		{
			sum = sum + i;
		}
	}
	cout << sum << endl;
	return 0;
}
