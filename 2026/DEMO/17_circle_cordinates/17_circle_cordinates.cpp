#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Въвеждане на координатите на център и радиус на двата кръга
    float Cx, Cy, Cr, Dx, Dy, Dr;
    cout << "Enter circle C (Cx,Cy,r):" << endl;
    cin >> Cx >> Cy >> Cr;
    cout << "Enter circle D (Dx,Dy,r):" << endl;
    cin >> Dx >> Dy >> Dr;

    // Разстоянието между центровете
    float d = sqrt(pow(Cx - Dx, 2) + pow(Cy - Dy, 2));

    cout << "Distance between centers: " << d << endl;

    // Проверка колко общи точки имат кръговете
    if (d > Cr + Dr) {
        cout << "Circles have NO common point of intercept" << endl;
        return 0;
    }
    if (d == Cr + Dr || d == fabs(Cr - Dr)) {
        cout << "Circles have ONE common point of intercept" << endl;
        // Изчисляване на точката на допир
        float x = Cx + (Dx - Cx) * Cr / d;
        float y = Cy + (Dy - Cy) * Cr / d;
        cout << "Intersection point: (" << x << ", " << y << ")" << endl;
        return 0;
    }

    // ДВА пресечни точки - изчисляване на координатите им
    cout << "Circles have TWO common points of intercept" << endl;

    // l = разстояние от центъра C до линията на пресичане
    float l = (pow(Cr, 2) - pow(Dr, 2) + pow(d, 2)) / (2 * d);

    // h = половината на разстоянието между двете точки
    float h = sqrt(pow(Cr, 2) - pow(l, 2));

    // Координати на средната точка на пресечните точки
    float x2 = Cx + l * (Dx - Cx) / d;
    float y2 = Cy + l * (Dy - Cy) / d;

    // Първата пресечна точка
    float Px1 = x2 + h * (Dy - Cy) / d;
    float Py1 = y2 - h * (Dx - Cx) / d;

    // Втората пресечна точка
    float Px2 = x2 - h * (Dy - Cy) / d;
    float Py2 = y2 + h * (Dx - Cx) / d;

    cout << "Intersection point 1: (" << Px1 << ", " << Py1 << ")" << endl;
    cout << "Intersection point 2: (" << Px2 << ", " << Py2 << ")" << endl;

    return 0;
}