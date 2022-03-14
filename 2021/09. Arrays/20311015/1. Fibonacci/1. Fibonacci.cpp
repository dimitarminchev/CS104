#include <iostream>
using namespace std;

int main()
{
    const int n = 20;
    int Fib[n] = { 1,1 };

    for (int i = 2; i < n; i++)
        Fib[i] = Fib[i - 2] + Fib[i - 1];

    for (int j = 0; j < n; j++)
        cout << Fib[j] << " ";

    return 0;
}