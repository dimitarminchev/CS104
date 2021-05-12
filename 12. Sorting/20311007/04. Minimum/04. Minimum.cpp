#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int Matrix[3][3];
	int arr[10];
	int size;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> Matrix[i][j];
		}
	}
	cin >> size;
	int* arr1 = new int[size];
	for (int i = 0; i < size; i++)
	{
		cin >> arr1[i];
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			int m = i;
			int n = j + 1;
			while (true) {
				if (n == 3) {
					n = 0;
					m++;
					if (m == 3) break;
				}

				if (Matrix[i][j] > Matrix[m][n]) swap(Matrix[i][j], Matrix[m][n]);
				n++;
			}
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << Matrix[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}