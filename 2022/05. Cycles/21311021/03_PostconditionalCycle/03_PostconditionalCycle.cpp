#include <iostream>
using namespace std;
int main()
{
	int counter;

	cin >> counter;

	int i = 0;
	while (true)
	{
		if (i >= counter)
			break;

		cout << "Operation: " << i + 1 << endl;

		i++;
	}

	return 0;
}