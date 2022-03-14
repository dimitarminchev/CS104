#include <iostream>
using namespace std;
int main()
{
    const int N = 20;

    int Fib[N] = { 1,1 };

    for (int k = 2; k < N; k++)
    {
        Fib[k] = Fib[k - 2] + Fib[k - 1];
    }

    for (int k = 0; k < N; k++)
    {
        cout << Fib[k] << " ";
    }

    return 0;
}