#include <iostream>
	using namespace std;


int main()
{
	int sum = 0;

	for (int k = 100; k <= 999; k++)
	{
		if (k % 15 == 0)
		{
			sum = sum + k;
			cout << k << " ";
		}

	}
	cout << endl << sum << endl;
                 
		return 0;
}




