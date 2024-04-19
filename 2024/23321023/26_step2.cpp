#include <iostream>
using namespace std;

int fak (int n)

{
	if (n == 1) return 1;
	else return n * fak(n - 1);
}

int main()
{
	int n;
	cout << "n="; cin >> n;
	cout << "n!=" << fak(n) << endl;
	return 0;
}

