#include <iostream>
using namespace std;

int current=0;

int result(int power)
{
	current = pow(2, power);

	return 0;
}

int main()
{
	int p;

	cin >> p;

	for (int i= 0; i < p; i++)
	{
		int power = i + 1;

		result(power);
		cout << "Current: " << current<<endl;
	}

	return 0;
}