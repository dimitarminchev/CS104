#include <iostream>

int step2(int n)
{
    return n <= 1 ? 2 : 2 * step2(n - 1);
}

int main()
{
    for (int k = 1; k <= 10; k++)
    {
        std::cout << "2^" << k << "=" << step2(k) << std::endl;
    }
}