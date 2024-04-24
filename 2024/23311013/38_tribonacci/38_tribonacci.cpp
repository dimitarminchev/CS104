#include <iostream>
#include <cmath>
using namespace std;
#define print(x) std::cout<<x<<std::endl;

int main()
{
    int n;

    print("Enter a value of n: ");
    cin >> n;

    int fib[100] = { 0, 1, 1 };

    for (int i = 3; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2] + fib[i - 3];
    }

    for (int i = 0; i < n; i++)
    {
        print(fib[i] << " ");
    }

    return 0;
}