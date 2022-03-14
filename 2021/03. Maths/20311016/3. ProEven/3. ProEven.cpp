#include <iostream>

int main()
{
    int a;

    std::cout << "a=?" << std::endl;
    std::cin >> a;

    int a6 = (a / 100000) % 10;
    int a4 = (a / 1000) % 10;
    int a2 = (a / 10) % 10;
    int pro = a6 * a4 * a2;

    std::cout << pro << std::endl;
}