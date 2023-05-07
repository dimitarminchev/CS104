#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "n=";
    cin >> n;

    double fib[n] = {0,1};

    for (int k = 2; k < n; k++)
    {
        fib[k] = fib[k-2] + fib[k-1];
    }

    for (int i = 0; i < n; i++)
    {
        cout << fib[i] << endl;
    }
    return 0;
}
