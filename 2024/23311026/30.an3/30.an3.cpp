#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	float result = 0;
	cout << "Please enter n: ";
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		result = pow(1.0 + (1.0 / i), i);
		cout << result << " ";
	}

	return 0;
}