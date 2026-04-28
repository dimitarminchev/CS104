#include <iostream>

int main()
{
    int income; std::cout << "Enter your income: "; std::cin >> income;

    if (income < 0) { std::cout << "How did you get there?"; }
    else 
    {
        std::cout << "Tax: ";
        if (income < 1721) { std::cout << income * 0.2; }
        else if (income >= 1721 && income <= 3000) { std::cout << income * 0.22 + 120; }
        else if (income >= 3000 && income <= 7200) { std::cout << income * 0.24 + 1072; }
    }
}