#include<iostream>
using namespace std;
int main()
{
    const int N = 100;

    // Declaring an array with N elements
    double fib[N] = { 0,1 };

    // Calculation of numbers from the Fibonacci sequence
    for (int k = 2; k < N; k++)
    {
        fib[k] = fib[k - 2] + fib[k - 1];
    }

    // Output the numbers
    for (int i = 0; i < N; i++)
    {
        cout << fib[i] << endl;
    }
    return 0;
}