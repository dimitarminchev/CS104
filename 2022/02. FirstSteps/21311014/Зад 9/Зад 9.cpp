#include <iostream>
using namespace std;
int main()
{
	int x;
	cout << "Моля, въведете пет цифрено число:" << endl;
	cin >> x;

	int a1 = (x / 100000) % 10;
	int a2 = (x / 10000) % 10;
	int a3 = (x / 1000) % 10;
	int a4 = (x / 100) % 10;
	int a5 = (x / 10) % 10;
	int a6 = (x / 1) % 10;

	int pro = a6 * a4 * a2;

	cout << "Произведението е:" << pro << endl;

	return 0;
}
