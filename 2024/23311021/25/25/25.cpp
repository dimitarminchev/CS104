#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int sum = 0;
	for (int i = 1000; i <= 9999; i++)
	{
		if (((i/1000%10) + (i / 100 % 10)) == ((i / 10 % 10) + i % 10) )
		{
			sum = sum + i;
			cout << i << " ";
		}

	}

	cout << "End the final number is:" <<endl;
	cout << sum;

	return 0;
}

