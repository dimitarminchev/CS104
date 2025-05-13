
#include <iostream>
using namespace std;
int main()
{
    int A[10];
	for (int i = 0 ; i < 10; i++) cin >> A[i];
	
	int b;cout << "Search:";
	cin >> b;

	cout << "Indexes:";
	for (int i = 0; i < 10; i++)
	{ 
		if (A[i] == b) cout <<  i << " ";
	}
	return 0;
}

