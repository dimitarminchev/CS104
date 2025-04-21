#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cout << "n=";
	cin >> n;

	for (float i = 1; i <= n; i++)
	{
		cout << pow((1 + (1 / i)), i) << endl;
	}

	return 0;
}
