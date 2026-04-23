#include <iostream>

int main()
{
    int value;

    std::cout << "Enter number: "; std::cin >> value;

    std::cout << value % 10 << (value / 10) % 10 << (value / 100) % 10;
}