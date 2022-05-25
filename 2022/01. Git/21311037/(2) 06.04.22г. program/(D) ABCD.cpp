#include <iostream>
using namespace std;
int main()
{
    int a, b, br = 0;
    cin >> a >> b;
    for(int d=a; d<=b; d++)
    {
        int d1 = (d / 1000) % 10;
        int d2 = (d / 100) % 10;
        int d3 = (d / 10) % 10;
        int d4 = (d / 1) % 10;
        if (d == d1 + d2*d2 + d3*d3*d3 + d4*d4*d4*d4)
        br = br + 1;
    }
    cout << br << endl;
	return 0;
}
