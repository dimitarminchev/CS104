#include <iostream>
#include <cmath>
using namespace std;


int main()
{

	// Създаваме масив с 10 елемента
	int arr[10] = { 1, -1, 2, -2, 3, -3, 4, -4, 5, -5 };

	// Отпечатване елементите на масива
	cout << "Unsorted array: ";
	for (int k = 0; k < 10; k++) printf("%d ", arr[k]);
	cout << endl;

	// Сортиране
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

	// Отпечатване на сортирания масив
	cout << "Sorted array: ";
	for (int k = 0; k < 10; k++) printf("%d ", arr[k]);
	cout << endl;

	return 0;
}
