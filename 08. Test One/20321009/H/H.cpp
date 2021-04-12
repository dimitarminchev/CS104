#include <iostream>
using namespace std;
int main()
{
	int a, a1 = 0;
	cin >> a;

	for (int i = 10; i <= a; i++)
	{
		a1 = a1 + (i / 10) + (i % 10);
	}
	cout << a1 << endl;
	return 0;
}