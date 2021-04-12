#include <iostream>

int main()
{
    double words, a, b, c;
    std::cout << "Words: ";
    std::cin >> words;
    std::cout << "A: ";
    std::cin >> a;
    std::cout << "B: ";
    std::cin >> b;
    std::cout << "C: ";
    std::cin >> c;

    double remainder = (words - 20) > 0 ? (words - 20) : 0;

    std::cout << (a + b + (remainder * c));
}