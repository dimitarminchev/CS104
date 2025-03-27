#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cout << "n=";
	cin >> n;

	for (int k = 1; k <= n; k++)
	{
		double Ak = pow((1+ (1.0/k)),k);
		cout << Ak << endl;
	}

	return 0;
}
