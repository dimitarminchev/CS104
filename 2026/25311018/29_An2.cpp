#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cout << "Enter n: ";
	cin >> n;

	for (float k = 1; k <= n; k++)
	{
		float An = (1 / pow(k,2));
		cout << An << endl;
	}
	return 0;
}