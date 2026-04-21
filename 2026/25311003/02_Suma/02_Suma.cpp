#include <iostream>

int main()
{
    int a, b;

    std::cout << "a=";
    if (!(std::cin >> a)) return 1;

    std::cout << "b=";
    if (!(std::cin >> b)) return 1;

    std::cout << (a + b) << std::endl;

    return 0;
}