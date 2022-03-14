#include <iostream>
using namespace std;
int step2(int n)
{
	if (n <= 1)return 2;
	else return (2 * step2(n - 1));
}
int main()
{
	for (int i = 1; i <= 10; i++)
	{
		cout << "2^" << i << "=" << step2(i) << endl;
	}
	return 0;
}