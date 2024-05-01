#include <iostream>
using namespace std;

int main()
{
	int n, m, x, inx = 0;
	int f[100];
	int index[100];
	cout << "Please enter number of array elements: ";
	cin >> m;
	cout << "Please enter which number you want to check: ";
	cin >> x;
	for (int i = 0; i < m; i++)
	{
		cout << "Please enter n" << i + 1 << ": ";
		cin >> n;
		f[i] = n;
		if (f[i] == x)
		{
			index[inx] = i;
			inx++;
		}
	}
	cout << "index: ";
	for (int i = 0; i < inx; i++)
	{
		cout << index[i] << ", ";
	}
	return 0;
}