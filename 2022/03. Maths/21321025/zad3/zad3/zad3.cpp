
#include <iostream>
using namespace std;
int main()
{
	int а;
	cout << "enter a 6 digit number example 123456" << endl;
	cin >> а;

	int a6 = (а / 100000) % 10;
	int a4 = (а / 1000) % 10;
	int a2 = (а / 10) % 10;
	int pro = a6 * a4 * a2;
	cout << "multiplication of even positions on a 6-digit number :" << pro << endl;
	return 0;
}