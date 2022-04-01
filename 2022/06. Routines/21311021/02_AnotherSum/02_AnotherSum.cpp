#include <iostream>
#include<math.h>
using namespace std;

int f(int x, int n)
{
	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		int power = i + 1;

		sum += pow(x, power);
	}

	return sum;
}

int main()
{
	int x, n;

	cout << "Data: ";
	cin >> x >> n;

	int result = f(x, n);

	cout << "Result: " << result;

	return 0;
}