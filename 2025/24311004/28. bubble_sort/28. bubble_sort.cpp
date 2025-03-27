#include <iostream>
using namespace std;
int main()
{
	int arr[10] = { 1, -1, 2, -2, 3, -3, 4, -4, 5, -5 }, temp;

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (arr[i] < arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
}