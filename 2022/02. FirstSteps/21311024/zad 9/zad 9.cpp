#include <iostream>
using namespace std;
int main()
{
	int a;
	cout << "A=? (shestcifreno)" << endl;
	cin >> a;

	int a2 = (a / 10000) % 10;
	int a4 = (a / 100) % 10;
	int a6 = (a / 1) % 10;
	int pro = a2 * a4 * a6;
	cout << "Proizvedenieto e :" << pro << endl;
	return 0;
}

