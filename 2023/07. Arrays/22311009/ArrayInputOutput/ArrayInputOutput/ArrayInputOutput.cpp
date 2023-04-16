#include <iostream>
#include<iostream>
using namespace std;
int main()
{
    const int n = 10;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}