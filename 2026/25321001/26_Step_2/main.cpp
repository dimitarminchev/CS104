#include<iostream>
using namespace std;

int step2(int n)
{
	if (n == 1) return 2;
	return 2 * step2(n - 1);
}

int main()
{
	int n;
	cout << "n=";
	cin >> n;

	cout << "2^ " << n << " = " << step2(n) << endl;
	
	return 0;
}