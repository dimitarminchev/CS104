#include <iostream>
using namespace std;
int main()
{
	int counter;

	cin >> counter;

	for (int i = 0; i < counter; i++)
	{
		cout << "Operation: "<< i + 1<<endl;
	}

    return 0;
}