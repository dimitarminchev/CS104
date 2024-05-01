#include <iostream>
using namespace std;

int main()
{
	int min = 1000, max = -1000, n;
	int f[100];
	cout << "Please enter number of array elements: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Please enter n" << i+1 <<": ";
		cin >> f[i];
		if (min > f[i]) min = f[i];
		if (max < f[i]) max = f[i];
	}
	cout << "Min is: " << min << endl;
	cout << "Max is: " << max << endl;
	return 0;
}