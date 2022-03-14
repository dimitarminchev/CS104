#include<iostream>
#include<cmath>

int main()
{
    int x, n, sum = 0;

    std::cout << "x=";
    std::cin >> x;
    std::cout << "n=";
    std::cin >> n;

    int* f = new int[n];

    for (int i = 0; i < n; i++)
    {
        f[i] = pow(x, i + 1);
        sum = sum + f[i];
    }

    std::cout << "sum = " << sum << std::endl;
}