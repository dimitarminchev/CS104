#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	float n;
	cin >> n;
	//cout << ":" << endl;
	for (float i = 1; i <= n; i++)
	{
		float element = 1 / (i * i);
		cout << element << " ";
	}



	return 0;
}

