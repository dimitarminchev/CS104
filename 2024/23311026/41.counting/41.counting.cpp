#include <iostream>
using namespace std;
int main()
{
	int n, m, x, count = 0;
	int f[100] = { 0 };
	cout << "Please enter number of array elements: ";
	cin >> m;
	cout << "Please enter which number you want to check: ";
	cin >> x;
	for (int i = 0; i < m; i++)
	{
		cout << "Please enter n" << i + 1 << ": ";
		cin >> n;
		f[i] = n;
		if (f[i] == x) count++;
	}
	cout << x << " repeats " << count << " times." << endl;
	return 0;
}