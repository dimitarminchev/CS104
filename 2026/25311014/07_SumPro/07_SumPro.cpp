#include <iostream>

int main()
{
    int value;

    std::cout << "Enter value: "; std::cin >> value;

    int
        digit_1 = value - (value - (value % 10)),
        digit_2 = (value - (value - (value % 100))  - digit_1) / 10,
        digit_3 = (value - (value - (value % 1000)) - digit_2) / 100,
        digit_4 = value / 1000;

    std::cout << "Sum: "            << digit_1 + digit_2 + digit_3 + digit_4 << "\n"
              << "Multiplication: " << digit_1 * digit_2 * digit_3 * digit_4 << "\n\n";
}