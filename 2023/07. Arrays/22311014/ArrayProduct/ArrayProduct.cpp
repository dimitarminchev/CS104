#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "n=";
    cin >> n;

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
    cout << "Product of " << n << " elements is equal to " << pro << endl;

    return 0;
}
