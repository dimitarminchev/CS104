#include <iostream>
using namespace std;
int main()
{
	int counter;

	cin >> counter;

	int i=0;
	do
	{
		cout << "Operation: " << i + 1 << endl;
		i++;
	} while (i < counter);

	return 0;
}