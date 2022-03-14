#include <iostream>
#include <cmath>

int main()
{
    int a, b, c;

    std::cout << "a=?, b=?, c=?" << std::endl;
    std::cin >> a >> b >> c;

    float d = pow(b, 2) - 4 * a * c;
    float x1 = ((-b) + sqrt(d)) / (2 * a);
    float x2 = ((-b) - sqrt(d)) / (2 * a);

    std::cout << "d=" << d << std::endl;
    std::cout << "x1=" << x1 << std::endl;
    std::cout << "x2=" << x2 << std::endl;
}