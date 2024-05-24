#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n, x;
	int sum = 0;
	cout << "Please enter n, x: ";
	cin >> n >> x;

	for (int i = 1; i <= n; i++)
	{
		sum = sum + (pow((-1), i)) * (pow(x, i));
	}
	cout << "Sum is: " << sum << endl;
	return 0;
}