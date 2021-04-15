#include <iostream>

int main()
{
    int input;
    std::cin >> input;

    int result = input / 5;

	std::cout << result << " with two buckets";

    int remainder = input % 5;

    if (remainder != 0) {
        if (remainder <= 2) {
            std::cout << " and 1 with 2 liters bucket";
        }
        else if (remainder == 3) {
            std::cout << " and 1 with 3 liters bucket";
        }
        else {
            std::cout << " and 2 with 2 liters bucket";
        }
    }

    std::cout << std::endl;
}