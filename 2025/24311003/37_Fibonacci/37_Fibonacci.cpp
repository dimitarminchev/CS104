// Chislata ot redicata na fibonacci
#include <iostream>
using namespace std;
int main()
{
    const int N = 100;
    int fib[N] = { 1,1 };
    for (int k = 2; k < N; k++)
    {
        fib[k] = fib[k - 1] + fib[k - 2];
    }
    for (int k = 0; k < N; k++)
        cout << fib[k] << " ";
    return 0;
}

