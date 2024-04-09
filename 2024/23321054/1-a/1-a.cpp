// 1-a.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
// Функция за изчисляване на факториел
unsigned long long factorial(int n) 
{
    if (n == 0 || n == 1) 
    {
        return 1;
    }
    else 
    {
        unsigned long long result = 1;
        for (int i = 2; i <= n; ++i) 
        {
            result *= i;
        }
        return result;
    }
}
int main() 
{
    int num;
    std::cout << "Въведете цяло положително число: 
    std::cin >> num;
    if (num < 0) 
    {
        std::cerr << "Грешка: Въведете положително число!" << std::endl;
        return 1;
    }
// Изчисляване и извеждане на факториел
    std::cout << "Факториел на " << num << " е: " << factorial(num) << std::endl;

    return 0;
}

