#include <iostream>
using namespace std;

int main()
{
	int n, a, b;
	cout << "Enter n: ";
	cin >> n;
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
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
			cout << arRes[i][j] <<"   ";
		}
		cout << "" << endl;
	}
	return 0;
}