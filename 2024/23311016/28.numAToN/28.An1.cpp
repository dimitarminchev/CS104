#include <iostream>

using namespace std;

int main()
{
	int n;
	float result = 0;
	cout << "Please enter n: ";
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		result = 1.0 / i;
		cout << result << " ";
	}

	return 0;
}