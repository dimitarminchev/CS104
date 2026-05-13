#include <iostream>	
using namespace std;

int main()
{
	int n, sum = 0;
	cin >> n;
	if (n > 2 and n < 33333)
	{
		while (n > 1)
		{
			if (n % 2 == 0)
			{
				n /= 2;
				cout << n << " ";
			}
			else if (n % 3 == 0)
			{
				n /= 3;
				cout << n << " ";
			}
			else
			{
				n += 1;
				cout << n << " ";
			}
			sum += 1;
		}
		cout << endl;
		cout << sum;
	}
	else return 0;
	cout << endl;
	return 0;
}
