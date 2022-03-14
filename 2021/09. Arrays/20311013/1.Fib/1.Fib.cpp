#include <iostream>
using namespace std;
int main()
{
    int const n = 10;
    int Fib[n] = { 1,1 };
    for (int k = 2; k < n; k++)
    {
        Fib[k] = Fib[k - 2] + Fib[k - 1];
    }
    for (int k = 0; k < n; k++)
    {
        cout << Fib[k] << " ";
    }
    return 0;
}