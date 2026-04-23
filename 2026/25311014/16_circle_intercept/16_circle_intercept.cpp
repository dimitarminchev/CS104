#include <iostream>
#include <cmath>

int main()
{
    int
        c1_x = 0, c1_y = 0, c1_r = 0,
        c2_x = 0, c2_y = 0, c2_r = 0,
        d;

    std::cout << "Enter circle 1 x, y and r parameters: "; std::cin >> c1_x >> c1_y, c1_r;
    std::cout << "Enter circle 2 x, y and r parameters: "; std::cin >> c2_x >> c2_y, c2_r;

    d = sqrt(std::pow((c1_x - c2_x), 2) + std::pow((c1_y - c2_y), 2));

    d > c1_r + c2_r ? printf_s("No common points") : d == c1_r + c2_r ? printf_s("1 point of intercept") : printf_s("2 points of intercept");
}