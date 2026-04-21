#include <iostream>

int main()
{
    int value;

    std::cout << "Enter value: "; std::cin >> value;

    std::cout << "Sum: "            << value % 10 + (value / 10) % 10 + (value / 100) % 10 + (value / 1000) % 10 << "\n"
              << "Multiplication: " << value % 10 * (value % 10) / 10 * (value % 100) / 10 * (value % 1000) / 10 << "\n";
}