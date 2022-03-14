#include <iostream>

int main()
{
    int a;

    std::cout << "a=?" << std::endl;
    std::cin >> a;

    int a1 = (a / 100) % 10;
    int a2 = (a / 10) % 10;
    int a3 = a % 10;

    std::cout << a3 << a2 << a1;
}