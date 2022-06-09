#include <iostream>
#include <cmath>
int main() {
    int menu;
    float p, s;
    std::cout << "Избор на фигурка:" << std::endl;
    std::cout << "1. Правоъгълник" << std::endl;
    std::cout << "2. Кръг" << std::endl;
    std::cout << "3. Триъгълник" << std::endl;
    std::cout << "Въведете избраната фигурка: ";
    std::cin >> menu;
    switch (menu) {
        case 1: {
            float a;
            std::cout << "Въведете размерите на правоъгълника: ";
            std::cin >> a;
            p = 4 * a;
            s = a * a;
            break;
        }
        case 2: {
            float r;
            std::cout << "Въведете диаметъра на кръга: ";
            std::cin >> r;
            p = 2 * 3.14 * r;
            s = 3.14 * r * r;
            break;
        }
        case 3: {
            float a, b, c;
            std::cout << "Въведете размерите на триъгълника: ";
            std::cin >> a >> b >> c;
            p = a + b + c;
            float p2 = p / 2;
            s = sqrt(p2 * (p2 - a) * (p2 - b) * (p2 - c));
            break;
        }
    }
    std::cout << "Периметър " << p << std::endl;
    std::cout << "Повърхнина " << s << std::endl;
    return 0;
}