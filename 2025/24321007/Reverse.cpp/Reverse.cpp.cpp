#include <iostream>
using namespace std;

int main()
{
   
	int a;

	cout << "Please enter a number" << endl;
	cin >> a;

	int a1 = (a / 100) % 10;
	int a2 = (a / 10) % 10;
	int a3 = (a / 1) % 10;

	cout << a3 << a2 << a1;
	return 0;
}

