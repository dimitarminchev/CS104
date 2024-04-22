#include <iostream>
using namespace std;
int main()
{
	int min = 0, max = 0, n, m;
	int f[100] = { 0 };
	cout << "Please enter number of array elements: ";
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cout << "Please enter n" << i + 1 << ": ";
		cin >> n;
		f[i] = n;
		if (min > f[i]) min = f[i];
		if (max < f[i]) max = f[i];
	}
	cout << "Min is: " << min << endl;
	cout << "Max is: " << max << endl;
	return 0;
}