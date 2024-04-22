#include<iostream>
using namespace std;
int step(int n)
{
	if (n > 1)
		return 2 * step(n - 1);
	else
		return 2;
}
int main()
{
	int n;
	cout << "Enter n: ";
	cin >> n;
	cout << "2^" << n << "=" << step(n) << endl;
	return 0;
}