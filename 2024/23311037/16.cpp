#include <iostream>
#include <cmath>

struct Point {
    double x, y;
};

Point findIntersection(double x1, double y1, double r1, double x2, double y2, double r2) {
    double x = (r1 * r1 - r2 * r2 + x2 * x2 - x1 * x1 + y2 * y2 - y1 * y1) / (2 * (x2 - x1));
    double y = std::sqrt(r1 * r1 - (x - x1) * (x - x1));
    return {x, y};
}

int main() {
    double x1 = 2.0, y1 = 3.0, r1 = 3.0;
    double x2 = 1.0, y2 = -1.0, r2 = 4.0;

    Point intersection1 = findIntersection(x1, y1, r1, x2, y2, r2);
    Point intersection2 = {intersection1.x, -intersection1.y};

    std::cout << "Intersection Point 1: (" << intersection1.x << ", " << intersection1.y << ")\n";
    std::cout << "Intersection Point 2: (" << intersection2.x << ", " << intersection2.y << ")\n";

    return 0;
}