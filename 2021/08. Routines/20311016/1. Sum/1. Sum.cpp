#include <iostream>

int sum(int a = 2, int b = 3)
{
    return a + b;
}

int main()
{
    std::cout << sum() << std::endl;
    std::cout << sum(1) << std::endl;
    std::cout << sum(1, 2) << std::endl;
}