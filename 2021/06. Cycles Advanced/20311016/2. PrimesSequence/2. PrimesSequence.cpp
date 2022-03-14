// 2. �������� ����� �� �������� �����
#include <iostream>
#include <cmath>

int main()
{
    int n;

    std::cout << "Upper Limit: ";
    std::cin >> n;

    for (int k = 2; k <= n; k++)
    {
        bool isPrime = true;

        for (int j = 2; j <= sqrt(k); j++)
        {
            if (k % j == 0)
            {
                isPrime = false;
            }
        }

        if (isPrime)
        {
            std::cout << k << " ";
        }
    }
}