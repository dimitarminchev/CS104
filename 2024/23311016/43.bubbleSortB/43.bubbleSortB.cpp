#include <iostream>
using namespace std;

int main()
{
	int n, m, curNum;
	int arr[100][100];
	cout << "Please enter number of rows: ";
	cin >> n;
	cout << "Please enter number of columns: ";
	cin >> m;
	cout << "Please enter the elements of the array: ";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}
	for (int x = 0; x < n * m; x++)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				int ni = i, nj = j + 1;
				if (nj == m)
				{
					ni = i + 1;
					nj = 0;
				}
				if (ni < n && arr[i][j] > arr[ni][nj])
				{
					curNum = arr[i][j];
					arr[i][j] = arr[ni][nj];
					arr[ni][nj] = curNum;
				}
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	return 0;
}
