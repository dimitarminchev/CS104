#include <iostream>
#include <cmath>
using namespace std;

int fak(int n)
{
	if (n <= 1) return 1;
	else return n * fak(n - 1);
}

int main()
{
	cout << "fak!= " << fak(5) << endl;
	return 0;
}