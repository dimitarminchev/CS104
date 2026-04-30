#include <iostream>

int main()
{
    int sum = 0, n;

    std::cout << "Enter numbers amount: "; std::cin >> n;

    for (int i = 0; i <= n; i++) { sum += i; }

    std::cout << sum;
}