#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n: " << endl;
    cin >> n;

    // find the numbers of the fibonacci sequence
    int fib[100] = { 0,1,1 };
    for (int i = 3; i < n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    // print them all
    for (int i = 0; i < n; i++)
    {
        cout << fib[i] << " ";
    }

    return 0;
}