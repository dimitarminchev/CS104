#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int  sum = 0;

    for (int k = 10; k <= 21; k++)
    {
        if (k % 3 == 0)
        {
            sum = sum + k;
        }
    }
    cout << sum << endl;

    return 0;
}