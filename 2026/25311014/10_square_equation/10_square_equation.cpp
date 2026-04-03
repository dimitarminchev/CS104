#include <iostream>

int main()
{
    int a, b, c, D, x1, x2;

    std::cout << "Enter a, b, and c: "; std::cin >> a >> b >> c;

    D = std::pow(b, 2) - 4 * a * c;

    std::cout << "Discriminant: " << D << "\n";

    if (D > 0) 
    { 
        std::cout << "x1: " << (-b + sqrt(D)) / 2 * a << "\n" 
                  << "x2: " << (-b - sqrt(D)) / 2 * a; 
    }
    else if (D == 0) { std::cout << "x1: " << -b / 2 * a; }
    else { std::cout << "No roots"; }
}