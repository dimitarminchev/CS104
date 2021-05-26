#include <iostream>

int main()
{
    float income, tax;

    std::cout << "Enter your 2016 income: ";
    std::cin >> income;

    if (income <= 2160) tax = 0;
    else if (income <= 3000) tax = (income - 2160) * 0.18;
    else if (income <= 7200) tax = 168 + ((income - 3000) * 0.20);
    else tax = 1072 + ((income - 7200) * 0.22);

    std::cout << "You owe: " << tax << std::endl;
}