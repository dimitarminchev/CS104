#include <iostream>
using namespace std;
int main()
{
	float x, a;
	cout << "Ввъдете число" << endl;
	cin >> x;
	a =x * 100 % 10;
	cout << a << endl;
	return 0;
}