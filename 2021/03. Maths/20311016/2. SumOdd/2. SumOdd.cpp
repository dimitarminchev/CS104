#include <iostream>

int main()
{
    int a;

    std::cout << "a=?" << std::endl;
    std::cin >> a;

    int a1 = (a / 10000) % 10;
    int a3 = (a / 100) % 10;
    int a5 = a % 10;
    int sum = a1 + a3 + a5;

    std::cout << sum << std::endl;
}