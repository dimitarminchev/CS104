#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

int main()
{
    int menu;
    double p, s;

    std::cout << "Shapes: \n";
    std::cout << "1. Square \n";
    std::cout << "2. Circle \n";
    std::cout << "3. Triangle \n";
    std::cout << "Number of shape: ";
    std::cin >> menu;

    if (menu == 1)
    {
        double a;
        std::cout << "Enter side length: ";
        std::cin >> a;
        p = 4 * a;
        s = a * a;
    }
    else if (menu == 2)
    {
        double r;
        std::cout << "Enter circle radius: ";
        std::cin >> r;
        p = 2 * M_PI * r;
        s = M_PI * pow(r, 2);
    }
    else if (menu == 3)
    {
        double a, b, c;
        std::cout << "Enter first side lenght: ";
        std::cin >> a;
        std::cout << "Enter second side lenght: ";
        std::cin >> b;
        std::cout << "Enter third side lenght: ";
        std::cin >> c;
        p = a + b + c;
        double p2 = p / 2;
        s = sqrt(p2 * (p2 - a) * (p2 - b) * (p2 - c));
    }

    std::cout << "Perimeter = " << p << std::endl;
    std::cout << "Area = " << s << std::endl;
}