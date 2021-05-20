#include <iostream>

int main()
{
    int number;
    std::cout << "Enter six-digit number: " << std::endl;
    std::cin >> number;

    int d2 = (number / 10000) % 10;
    int d4 = (number / 100) % 10;
    int d6 = number % 10;

    int result = d2 * d4 * d6;
    std::cout << "The result is: " << result << std::endl;
}