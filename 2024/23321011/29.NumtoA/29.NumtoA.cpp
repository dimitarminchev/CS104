#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	float result = 0;
	cout << "Please enter n: ";
	cin >> n;

	for (float i = 1; i <= n; i++)
	{
		result = 1.0 / pow(i, 2);
		cout << result << " ";
	}

	return 0;
}