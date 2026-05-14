#include <iostream>
using namespace std;
int main()

{
	int A[10] = { 2,2,-1,-1,-1,3,5,-2,-2,4 };
	for (int k = 0; k < 10; k++) cout << A[k] << " ";
	int x;
	cout <<endl<< "x=";
	cin >> x;

	bool found = false;

	cout << "Indexes:"<< endl;
	for (int k = 0; k < 10; k++)
	{
		if (A[k] == x)
		{
			cout << k << " ";
			found = true;
		}
		cout << A[k] << " ";
	}
	if (found==false) cout << endl << "Not found!:" << endl;


	return 0;
}