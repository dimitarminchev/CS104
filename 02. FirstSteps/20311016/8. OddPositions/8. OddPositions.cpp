#include <iostream>

int main()
{
    int number;
    std::cout << "Enter five-digit number: " << std::endl;
    std::cin >> number;

    int d1 = (number / 10000) % 10;
    int d3 = (number / 100) % 10;
    int d5 = number % 10;

    int sum = d1 + d3 + d5;
    std::cout << "The sum is: " << sum << std::endl;
}