#include <iostream>
using namespace std;

int main()
{
	int n;
	int arr[100];
	cout << "Please enter number of array elements: ";
	cin >> n;
	cout << "Please enter the elements of the array: ";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < (n - i - 1); j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int curNum = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = curNum;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	return 0;
}