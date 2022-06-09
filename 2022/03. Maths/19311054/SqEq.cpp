#include <iostream>
#include <cmath>
int main() {
    float a, b, c;
    // Въвеждане на коефициентите на уравнението
    std::cout << "a,b,c = ?" << std::endl;
    std::cin >> a >> b >> c;
    // Хамалски сметки на уравнението
    float d = pow(b, 2) - 4 * a * c;
    float x1 = ((-b) + sqrt(d)) / (2 * a);
    float x2 = ((-b) - sqrt(d)) / (2 * a);
    // Извеждане на резилтата
    std::cout << "d = " << d << std::endl;
    std::cout << "x1 = " << x1 << std::endl;
    std::cout << "x2 = " << x2 << std::endl;
    return 0;
}