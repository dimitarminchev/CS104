#include<iostream>
int main() {
    float a, b, p, s;
    std::cout << "a = ?, b = ?" << std::endl;
    std::cin >> a >> b;

    p = 2 * (a + b);
    s = a * b;
    std::cout << "p = " << p << std::endl;
    std::cout << "s = " << s << std::endl;
    return 0;
}