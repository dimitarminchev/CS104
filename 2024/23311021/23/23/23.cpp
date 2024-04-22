#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int num, sum = 0;
	cin >> num;
	for (int i = 1; i <= num; i++)
	{
		if (sum == 0)
		{
			sum = i;
		}
		else
		{
			sum = sum * i;
		}

	}
	cout << sum;

	return 0;
}

