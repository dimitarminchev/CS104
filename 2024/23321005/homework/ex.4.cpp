#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double distance, speed_ship, speed_current;

    // Въвеждане на разстоянието, скоростта на кораба и скоростта на течението
    cout << "Въведете разстоянието между пристанищата (в км): ";
    cin >> distance;
    cout << "Въведете скоростта на кораба (в км/ч): ";
    cin >> speed_ship;
    cout << "Въведете скоростта на течението (в км/ч): ";
    cin >> speed_current;

    // Изчисляване на времето за пътуване при движение с течението и срещу течението
    double time_with_current = distance / (speed_ship + speed_current);
    double time_against_current = distance / abs(speed_ship - speed_current);

    // Проверка за посоката на движение на кораба
    if (speed_ship > speed_current) {
        cout << "Корабът плува с течението." << endl;
        cout << "Време за пристигане: " << time_with_current << " часа" << endl;
    } else if (speed_ship < speed_current) {
        cout << "Корабът плува срещу течението." << endl;
        cout << "Време за пристигане: " << time_against_current << " часа" << endl;
    } else {
        cout << "Корабът е стационарен или течението е същата скорост като кораба." << endl;
    }

    return 0;
}
