// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    double A, B;
    std::cout << "Enter length A and width B (separated by space): ";
    if (!(std::cin >> A >> B)) {
        std::cerr << "Invalid input\n";
        return 1;
    }

    double perimeter = 2.0 * (A + B);
    std::cout << "Perimeter: " << perimeter << '\n';
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu