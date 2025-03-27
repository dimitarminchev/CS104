#include <iostream>
using namespace std;

bool containsSeven(int number) {
	while (number > 0)
	{
		if (number % 10 == 7)
		{
			return true;
		}
		number /= 10;
	}
	return false;
}

int main()
{
	int n;
	cout << "n=";
	cin >> n;

	for (int i = 1; i < n; i++)
	{
		if (i % 7 == 0 || containsSeven(i)) {
			cout << "click ";
		}
		else {
			cout << i << " ";
		}
	}
}