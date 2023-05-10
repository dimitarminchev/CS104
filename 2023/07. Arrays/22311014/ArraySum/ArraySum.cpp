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

    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    cout << "Sum of " << n << " elements is equal to " << sum << endl;

    return 0;
}
