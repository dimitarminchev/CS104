#include <iostream>
int main() {
    int a, b, c;
    std::cout << "a,b,c = ?" << std::endl;
    std::cin >> a >> b >> c;
    int min = a;
    if (b < min)
        min = b;
    else if (c < min)
        min = c;
    int max = a;
    if (b > max)
        max = b;
    else if (c > max)
        max = c;
    std::cout << "min = " << min << std::endl;
    std::cout << "max = " << max << std::endl;
    return 0;
}