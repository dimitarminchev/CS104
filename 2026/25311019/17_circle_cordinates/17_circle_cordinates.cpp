#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    float Ax, Ay, Ar, Bx, By, Br;
    cout << "Enter circle A (x, y, r): ";
    cin >> Ax >> Ay >> Ar;
    cout << "Enter circle B (x, y, r): ";
    cin >> Bx >> By >> Br;

    // 1. Разстояние между центровете
    float d = sqrt(pow(Bx - Ax, 2) + pow(By - Ay, 2));

    // Проверка за наличие на пресечни точки
    if (d > Ar + Br) {
        cout << "Circles are too far apart." << endl;
    }
    else if (d < abs(Ar - Br)) {
        cout << "One circle is inside the other." << endl;
    }
    else if (d == 0 && Ar == Br) {
        cout << "Circles are identical (infinite points)." << endl;
    }
    else {
        // 2. Изчисляване на a и h
        float a = (pow(Ar, 2) - pow(Br, 2) + pow(d, 2)) / (2 * d);
        float h = sqrt(pow(Ar, 2) - pow(a, 2));

        // 3. Намиране на точка P(Px, Py)
        float Px = Ax + a * (Bx - Ax) / d;
        float Py = Ay + a * (By - Ay) / d;

        // 4. Намиране на точките C и D
        
        float Cx = Px + h * (By - Ay) / d;
        float Cy = Py - h * (Bx - Ax) / d;

        float Dx = Px - h * (By - Ay) / d;
        float Dy = Py + h * (Bx - Ax) / d;

        if (h == 0) {
            cout << "Circles touch at one point: (" << Cx << ", " << Cy << ")" << endl;
        }
        else {
            cout << fixed << setprecision(2);
            cout << "Point C: (" << Cx << ", " << Cy << ")" << endl;
            cout << "Point D: (" << Dx << ", " << Dy << ")" << endl;
        }
    }

    return 0;
}