#include <iostream>
using namespace std;
int main()
{
    int n, curSum;
    cin >> n ;

    int a[100];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < (n-1-i); j++)
        {
            if (a[j] >a[j+1])
            {
                int curSum = a[j];
                a[j] = a[j + 1];
                a[j + 1] = curSum;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}