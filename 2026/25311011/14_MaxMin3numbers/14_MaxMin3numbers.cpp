#include <iostream>
using namespace std;

int main()
{
	int a, b, c;

	cout << "Enter(a, b, c): ";
	cin >> a >> b >> c;

	int min = a;

	if (min > b) min = b;
	if (min > c) min = c;

	int max = a;

	if (max < b) max = b;
	if (max < c) max = c;

	cout << "Min = " << min << endl;
	cout << "Max = " << max;
	return 0;
}