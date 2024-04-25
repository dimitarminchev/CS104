#include <iostream>
using namespace std;

int main()
{
	int n, a;
	cout << "Enter number to multiply by: ";
	cin >> n;
	cout << "Enter number of  rows and columns: ";
	cin >> a;
	
	int ar[50][50];
	int arRes[50][50];
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			cout << "Enter a" << i+1 << j+1 << ": ";
			cin >> ar[i][j];
			arRes[i][j] = ar[i][j] * n;
		}
	}
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			cout << arRes[i][j] << "\t";
		}
		cout << endl;
	}
	return 0;
}