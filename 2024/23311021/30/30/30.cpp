#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	float n;
	cin >> n;

	for (float i = 1; i <= n; i++)
	{
		float element = pow(1 + (1/i),i) ;
		cout << element << " ";
	}



	return 0;
}

