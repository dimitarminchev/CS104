#include <iostream>

int main()
{
    int value;

    std::cout << "Enter value: "; std::cin >> value;

    int
        digit_1 = value - (value - (value % 10)),
        digit_2 = (value - (value - (value % 100)) - digit_1) / 10,
        digit_3 = (value - (value - (value % 1000)) - digit_2) / 100,
        digit_4 = (value - (value - (value % 10000)) - digit_2) / 1000,
        digit_5 = (value - (value - (value % 100000)) - digit_2) / 10000,
        digit_6 = value / 100000;

    std::cout << digit_1 * digit_3 * digit_5;
}