#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter number of  rows and columns: ";
	cin >> n;
	int ar[50][50];
	int arr2[50][50];
	int arRes[50][50] = { 0 };
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Enter a" << i + 1 << j + 1 << ": ";
			cin >> ar[i][j];
		}
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Enter b" << i + 1 << j + 1 << ": ";
			cin >> arr2[i][j];
		}
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
			{
				arRes[i][j] += ar[i][k] * arr2[k][j];
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arRes[i][j] << "\t";
		}
		cout << endl;
	}
	return 0;
}
