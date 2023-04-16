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

    double pro = 1;

    for (int i = 0; i < n; i++)
    {
        pro *= a[i];
    }

    cout << "Product of " << n << " elements = " << pro << endl;
    return 0;
}