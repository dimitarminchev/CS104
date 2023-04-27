#include <iostream>
using namespace std;
int main()
{
	// A .. Z
	for (int i = 65; i <= 90; i++)
	{
		cout << i << " => " << (char)i << endl;
	}

	// a .. z
	for (int i = 97; i <= 122; i++)
	{
		cout << i << " => " << (char)i << endl;
	}

	return 0;
}