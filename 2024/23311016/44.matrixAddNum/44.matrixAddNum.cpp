#include <iostream>
using namespace std;

int main()
{
	int n, a, b;
	cout << "Enter number to multiply by: ";
	cin >> n;
	cout << "Enter number of  rows: ";
	cin >> a;
	cout << "Enter number of columns: ";
	cin >> b;
	
	int ar[50][50];
	int arRes[50][50];
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			cout << "Enter a" << i+1 << j+1 << ": ";
			cin >> ar[i][j];
			arRes[i][j] = ar[i][j] * n;
		}
	}
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			cout << arRes[i][j] << "\t";
		}
		cout << "" << endl;
	}
	return 0;
}