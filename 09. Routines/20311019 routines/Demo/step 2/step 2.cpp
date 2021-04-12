#include <iostream>
#include <cmath>
using namespace std;

int step2(int n)
{
	if (n <= 1) return 2;
	else return 2 * step2(n - 1);
}

int main()
{
	cout << step2(5) << endl;
	return 0;
}