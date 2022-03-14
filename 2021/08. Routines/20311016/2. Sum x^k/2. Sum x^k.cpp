#include <iostream>
#include <cmath>

int f(int x = 1, int n = 1)
{
    int sum = 0;

    for (int k = 1; k <= n; k++)
    {
        sum = sum + pow(x, k);
    }

    return sum;
}

int main()
{
    int x, n;

    std::cout << "x=";
    std::cin >> x;
    std::cout << "n=";
    std::cin >> n;

    std::cout << "f=" << f(x, n) << std::endl;
}