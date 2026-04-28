#include <iostream>
using namespace std;
int main()
{
    for (int k = 1; k <= 100; k++)
    {
        if (k % 7 == 0 || k % 10 == 7 || k/ 10 == 7)
        {
            cout <<  " click ";
		}
		else cout << k << " ";
    }
    cout << endl;
    return 0;
}