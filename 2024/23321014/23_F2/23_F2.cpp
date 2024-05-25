#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x, n, sum = 0;
    cin >> x >> n;

	for (int i = 1; i <= n; i++)
	{
		sum += ((pow((-1), i)) * pow(x, i));
	}
	cout << sum << endl;
	return 0;
}
