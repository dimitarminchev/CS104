#include <iostream>

int main()
{
    int a;

    std::cout << "a=?" << std::endl;
    std::cin >> a;

    int a1 = (a / 1000) % 10;
    int a2 = (a / 100) % 10;
    int a3 = (a / 10) % 10;
    int a4 = (a / 1) % 10;

    int s = a1 + a2 + a3 + a4;
    int p = a1 * a2 * a3 * a4;

    std::cout << s << std::endl;
    std::cout << p << std::endl;
}