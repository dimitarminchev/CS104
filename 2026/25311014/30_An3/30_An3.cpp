#include <iostream>

int main()
{
    int n;

    std::cout << "Enter value: "; std::cin >> n;

    for (int i = 1; i <= n; i++)
    {
        std::cout << std::pow(1.0 + (1.0 / i), i) << "\n";
    }
}