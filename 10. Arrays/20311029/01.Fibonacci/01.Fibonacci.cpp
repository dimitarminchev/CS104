#include <iostream>

using namespace std;

int main()
{
    const int N = 20;

    int fib[N] = { 1,1 };

    for (int i = 2; i < N; i++)
    {
        fib[i] = fib[i - 2] + fib[i - 1];
    }

    for (int i = 0; i < N; i++)
    {
        cout << fib[i] << " ";
    }

    return 0;
}