#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float Ax, Ay, Ar, Bx, By, Br;
    float d, a;

    cout << "Enter circle A (x,y,r):" << endl;
    cin >> Ax >> Ay >> Ar;
    cout << "Enter circle B (x,y,r):" << endl;
    cin >> Bx >> By >> Br;

    d = sqrt(pow(Ax - Bx, 2) + pow(Ay - By, 2));

    // Проверка за състояние на кръговете
    if (d > Ar + Br) {
        cout << "Circles has No common point of intercept" << endl;
        return 0;
    }
    if (d == Ar + Br || d == fabs(Ar - Br)) {
        cout << "Circles has ONE common point of tangency" << endl;

        // Точка на допир за външно допиране (d == Ar + Br)
        if (d == Ar + Br) {
            float Tx = Ax + (Bx - Ax) * Ar / d;
            float Ty = Ay + (By - Ay) * Ar / d;
            cout << "Tangency point: (" << Tx << ", " << Ty << ")" << endl;
        }
        // Точка на допир за вътрешно допиране (d == |Ar - Br|)
        else {
            float sign = (Ar > Br) ? 1.0f : -1.0f;
            float Tx = Ax + (Bx - Ax) * Ar / d * sign;
            float Ty = Ay + (By - Ay) * Ar / d * sign;
            cout << "Internal tangency point: (" << Tx << ", " << Ty << ")" << endl;
        }
        return 0;
    }

    if (d < fabs(Ar - Br)) {
        cout << "One circle is inside the other without touching" << endl;
        return 0;
    }

    // Две точки на допир за външни и вътрешни тангенси
    cout << "Circles has FOUR tangency points (2 external, 2 internal)" << endl;

    // Външни тангенси
    a = (pow(Ar, 2) - pow(Br, 2) + pow(d, 2)) / (2 * d);
    float h = sqrt(pow(Ar, 2) - pow(a, 2));

    float Cx = Ax + a * (Bx - Ax) / d;
    float Cy = Ay + a * (By - Ay) / d;

    float Tx1 = Cx + h * (By - Ay) / d;
    float Ty1 = Cy - h * (Bx - Ax) / d;
    float Tx2 = Cx - h * (By - Ay) / d;
    float Ty2 = Cy + h * (Bx - Ax) / d;

    cout << "\nExternal tangency points:" << endl;
    cout << "Point 1: (" << Tx1 << ", " << Ty1 << ")" << endl;
    cout << "Point 2: (" << Tx2 << ", " << Ty2 << ")" << endl;

    // Вътрешни тангенси
    a = (pow(Ar, 2) - pow(Br, 2) - pow(d, 2)) / (-2 * d);
    h = sqrt(pow(Ar, 2) - pow(a, 2));

    Cx = Ax + a * (Bx - Ax) / d;
    Cy = Ay + a * (By - Ay) / d;

    Tx1 = Cx + h * (By - Ay) / d;
    Ty1 = Cy - h * (Bx - Ax) / d;
    Tx2 = Cx - h * (By - Ay) / d;
    Ty2 = Cy + h * (Bx - Ax) / d;

    cout << "\nInternal tangency points:" << endl;
    cout << "Point 1: (" << Tx1 << ", " << Ty1 << ")" << endl;
    cout << "Point 2: (" << Tx2 << ", " << Ty2 << ")" << endl;

    return 0;
}