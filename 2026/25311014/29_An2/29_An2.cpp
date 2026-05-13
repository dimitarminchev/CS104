#include <iostream>

int main()
{
    int n;

    std::cout << "Enter value: "; std::cin >> n;

    for (int i = 1; i <= n; i++)
    {
        std::cout << 1.0 / std::pow(i, 2) << "\n";
    }
}