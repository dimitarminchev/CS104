#include <iostream>
using namespace std;
int main()
{
	int n, a = 1, b = 1, c = a + b;
	cin >> n;
	cout << "1 1 ";
	while (c < n)
	{
		cout << c << " ";
		a = b;
		b = c;
		c = a + b;
	}
	return 0;
}