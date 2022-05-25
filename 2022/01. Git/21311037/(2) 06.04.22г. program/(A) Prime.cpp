#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;

	for (int k = a; k <= b; k++)
	{
		// 1. Initial statement that K i
		bool isPrime = true;
		// 2. It there a divider of K?
		for (int j = 2; j <= k - 1; j++)
			if (k % j == 0)
				isPrime = false;
		// 3. Check if it is Prime?
		if (k != 1 && isPrime == true)
			cout << k << " ";
	}
	cout << endl;
	return 0;
}
