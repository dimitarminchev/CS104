#include <iostream>

int main()
{
    int numbers[10]{ 2, 2, -1, -1, -1, 3, 5, -2, -2, 4 }, value;
    bool isNumExists = 0;

    std::cout << "Enter number to search its indexes: "; std::cin >> value;
    std::cout << "The number '" << value << "' is located in the next array's index(es):\n\n";

    for (int i = 0; i < sizeof(numbers) / sizeof(int); i++) { if (numbers[i] == value) {isNumExists = 1; std::cout << i << "\n";} }

    if (isNumExists == 0) { std::cout << "The number is not found."; }
}