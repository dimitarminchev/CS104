#include <iostream>
using namespace std;
int main()
{
	int n, a = 1, b = 1, c = a + b;
	cin >> n;
	cout << "1 1 2 ";
	while (c <= n)
	{
		a = b;
		b = c;
		c = a + b;
		cout << c << " ";
	}
}