#include <iostream>
#include <cmath>

int main()
{
    int n;

    std::cout << "Upper Limit: ";
    std::cin >> n;

    for (int k = 2; k <= n; k++)
    {
        std::cout << k << ": ";
        for (int j = 2; j < k; j++)
        {
            if (k % j == 0)
            {
                std::cout << j << ", ";
            }
        }

        std::cout << std::endl;
    }
}