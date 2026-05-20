#include <iostream>

int main()
{
    int numbers[10]{ 2, 2, -1, -1, -1, 3, 5, -2, -2, 4 }, count = 0, value;

    std::cout << "Enter number to search: "; std::cin >> value;

    for (int i = 0; i < sizeof(numbers) / sizeof(int); i++) { if (numbers[i] == value) { count++; } }

    std::cout << "The array contains number '" << value << "' " << count << " time(s)";
}