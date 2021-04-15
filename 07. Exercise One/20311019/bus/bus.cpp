#include <iostream>
using namespace std;
int main()
{
	int pas1, pas2;
	cout << "passengers for bus 1=";
	cin >> pas1;
	cout << "passengers for bus 2=";
	cin >> pas2;
	int passengers = pas1 + pas2;
	int perbus = passengers/3;
	int diff1 = perbus - pas1;
	int diff2 = perbus - pas2;

	cout << "bus1= " << diff1 << "  bus2= " << diff2 << "  bus3= " << perbus;
	return 0;
}