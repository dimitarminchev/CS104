// 09. Отпечатайте триъгълник от числа

#include <iostream>
using namespace std;
int main()
{
	int size;

	cout << "Enter triangle size: ";
	cin >> size;

	for (int i = 1; i <= size; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j << " ";
		}
		cout << endl;
	}

    return 0;
}