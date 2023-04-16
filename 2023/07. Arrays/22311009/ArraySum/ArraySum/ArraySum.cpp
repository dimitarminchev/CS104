#include<iostream>
using namespace std;
int main()
{
    const int n = 100;
    double a[n];

    for (int i = 0; i < n; i++)
    {
        a[i] = i + 1;
    }

    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    cout << "The sum of " << n << " elements = " << sum << endl;

    return 0;
}