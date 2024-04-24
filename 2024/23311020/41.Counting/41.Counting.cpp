#include <iostream>
using namespace std;

int main()
{
	int n, x, count = 0;
	int f[100];
	cout << "Please enter number of array elements: ";
	cin >> n;
	cout << "Please enter which number you want to check: ";
	cin >> x;
	for (int i = 0; i < n; i++)
	{
		cout << "Please enter n" << i + 1 << ": ";
		cin >> f[i];
		if (f[i] == x) count++;
	}
	cout << x << " repeats " << count << " times." << endl;
	return 0;
}