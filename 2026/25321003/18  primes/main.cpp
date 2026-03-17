#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int k = 1; k < n; k++)
	{
		bool IsPreme = true;
		for (int j = 2; j < k; j++)
		{
			if (k % j == 0)
			{
				IsPreme = false;
			}
		}
		if (IsPreme)cout<< k << " ";
	}
	    return 0;
}