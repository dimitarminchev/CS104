#include <iostream>

int main()
{
    int a, b, c;

    std::cout << "a = ";
    std::cin >> a;
    std::cout << "b = ";
    std::cin >> b;
    std::cout << "c = ";
    std::cin >> c;

    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;

    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;

    std::cout << "The smallest number is: " << min << std::endl;
    std::cout << "The largest number is: " << max << std::endl;
}