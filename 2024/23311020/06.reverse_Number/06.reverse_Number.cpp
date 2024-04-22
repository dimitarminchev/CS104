#include <iostream>

using namespace std;
int main()
{
	int num;
	cout << "3num= ";
	cin >> num;

	int a1 = (num / 100)%10;
	int a2 = (num / 10)%10;
	int a3 = (num / 1)%10;

	cout << a3 << a2 << a1 << endl;

	return 0;
}
