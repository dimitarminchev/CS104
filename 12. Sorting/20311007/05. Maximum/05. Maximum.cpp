#include <iostream>
#include <algorithm>
#include<conio.h>
using namespace std;

int main()
{

	int Matrix[4][4];
	int arr[10];
	int size;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
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

	for (int i = 4; i >= 0; i--)
	{
		for (int j = 4; j >= 0; j--)
		{
			cout << Matrix[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
} 
 