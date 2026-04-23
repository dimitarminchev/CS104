#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	cout << "Enter c: ";
	cin >> c;

		int min = a;
		if (b < min)
		{
			min = b;
		}
		if (c < min)
		{
			min = c;
		}

		cout << "The minimum value is: " << min << endl;
		int max = a;
		if (b > max)
		{
			max = b;
		}
		if (c > max)
		{
			max = c;
		}
		cout << "The maximum value is: " << max << endl;



}