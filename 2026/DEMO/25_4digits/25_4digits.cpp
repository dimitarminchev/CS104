#include <iostream>
using namespace std;
int main()
{
	for (int k = 1000; k <= 9999; k++)
	{
		int a = (k / 1000) % 10; // хилядни
		int b = (k / 100) % 10; // стотици
		int c = (k / 10) % 10; // десетици
		int d = (k / 1) % 10; // единици
		if (a + b == c + d) // хилядни + стотици = десетици + единици
		{
			cout << k << " ";
		}
	}
    return 0;
}