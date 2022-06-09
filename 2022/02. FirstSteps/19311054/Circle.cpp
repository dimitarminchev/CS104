#include<iostream>
#include<cmath>
int main() {
    float r, p, s;
    float PI = acos(-1.0);
    std::cout << "r = ";
    std::cin >> r;

    p = 2 * PI * r;
    s = PI * pow(r, 2);
    std::cout << "p = " << p << std::endl;
    std::cout << "s = " << s << std::endl;
    return 0;
}