#include <iostream> 
using namespace std;
int main()
{
	int a, b, c;
	int max, min;

	cout << "Please enter 3 numbers: ";
	cin >> a >> b >> c;

	min = a;
	max = b;

	if (a > b)
	{
		min = b;
		max = a;
	}

	if (c < a)
	{
		min = c;
	}

	if (c > b)
	{
		max = c;
	}

	cout << "Min: " << min << endl;
	cout << "Max: " << max << endl;

	return 0;
}