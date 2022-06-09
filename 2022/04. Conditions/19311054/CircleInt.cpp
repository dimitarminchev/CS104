#include <iostream>
#include <cmath>
int main() {
    float x1, y1, r1, x2, y2, r2;
    std::cout << "Моля въведете стойностите за първия кръг (x,y,r): ";
    std::cin >> x1 >> y1 >> r1;

    std::cout << "Моля въведете стойностите за втория кръг (x,y,r): ";
    std::cin >> x2 >> y2 >> r2;
    float d = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

    if (d > r1 + r2) {
        std::cout << "Кръговете не се пресичат";
    } else if (d == r1 + r2) {
        std::cout << "Кръговете имат една точка на пресичане";
    } else if (d < r1 + r2) {
        std::cout << "Кръговете имат две точки на пресичане";
    }
    return 0;
}