#include <iostream>
#include <cmath>

int main()
{
    int b1, b2, b3 = 31;
    std::cout << "Buses: ";
    std::cin >> b1 >> b2;

    int sum = b1 + b2 + b3;
    int avg = sum / 3.0;

    std::cout << "Bus 1: " << (b1 - avg) * -1 << " Bus 2: " << (b2 - avg) * -1 << " Bus 3: " << (b3 - avg) * -1;
}