#include <iostream>
#include <cmath>

int main()
{
    double c1_x, c1_y, c1_r;
    double c2_x, c2_y, c2_r;

    std::cout << "Enter circle 1 (x y r): ";
    std::cin >> c1_x >> c1_y >> c1_r;

    std::cout << "Enter circle 2 (x y r): ";
    std::cin >> c2_x >> c2_y >> c2_r;

    double dx = c2_x - c1_x;
    double dy = c2_y - c1_y;
    double d = std::sqrt(dx * dx + dy * dy);

    // Нет пересечения
    if (d > c1_r + c2_r) {
        std::cout << "No intersection\n";
        return 0;
    }

    // Одна точка (внешнее касание)
    if (d == c1_r + c2_r) {
        double x = c1_x + dx * (c1_r / d);
        double y = c1_y + dy * (c1_r / d);
        std::cout << "1 intersection point: (" << x << ", " << y << ")\n";
        return 0;
    }

    // Две точки пересечения
    double a = (c1_r * c1_r - c2_r * c2_r + d * d) / (2 * d);
    double h = std::sqrt(c1_r * c1_r - a * a);

    double xm = c1_x + a * dx / d;
    double ym = c1_y + a * dy / d;

    double rx = -dy * (h / d);
    double ry = dx * (h / d);

    double x1 = xm + rx;
    double y1 = ym + ry;
    double x2 = xm - rx;
    double y2 = ym - ry;

    std::cout << "2 intersection points:\n";
    std::cout << "P1 = (" << x1 << ", " << y1 << ")\n";
    std::cout << "P2 = (" << x2 << ", " << y2 << ")\n";

    return 0;
}