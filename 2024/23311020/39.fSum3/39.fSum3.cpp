#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n, x;
	int sum = 0;
	int f[100] = { 0 };
	cout << "Please enter x, n: ";
	cin >> x >> n;

	for (int i = 0; i < n; i++)
	{
		f[i] = (pow((x), i + 1));
		sum = sum + f[i];
	}
	cout << "Sum is: " << sum << endl;
	return 0;
}