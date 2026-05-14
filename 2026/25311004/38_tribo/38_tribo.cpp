#include <iostream>
using namespace std;
int main()
{
	int trib[10] = { 1,1,1 };
	for (int k = 3; k < 10; k++)
	{
		trib[k] = trib[k - 3] + trib[k - 2] + trib[k - 1];
	}
	for (int k = 0; k < 10; k++)
	{
		cout << trib[k] << " ";
	}
}