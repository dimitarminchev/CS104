#include <iostream>
using namespace std;
int main()
{
	int f,result;

	cin >> f;

	f == 0 ? f = 1 : f = f;

	result = 1;
	for (int i = 0; i < f; i++)
	{
		result *= (i+1);
	}

	cout << result;

	return 0;
}