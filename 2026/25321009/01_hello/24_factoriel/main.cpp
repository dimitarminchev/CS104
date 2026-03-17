#include <iostream>
#include <cmath>
using namespace std;
	int fak(int n)
	{
		if (n == 1) return 1;
		else return n * fak(n - 1);
	}
	int main()
	{
		int n;
		cout << "enter n => " << endl;
		cin >> n;
	
		cout << n << "! = " << fak(n) << endl;

	return 0;
}