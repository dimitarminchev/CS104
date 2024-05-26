#include <iostream>

using namespace std;

int main() {
    int volume, flow_rate1, flow_rate2, flow_rate3;

    // Въвеждане на обема на басейна и дебитните тръби
    cout << "Въведете обема на басейна (в кубически метри): ";
    cin >> volume;
    cout << "Въведете дебита на тръба 1 (в кубически метри в час): ";
    cin >> flow_rate1;
    cout << "Въведете дебита на тръба 2 (в кубически метри в час): ";
    cin >> flow_rate2;
    cout << "Въведете дебита на тръба 3 (в кубически метри в час): ";
    cin >> flow_rate3;

    // Проверка за отрицателен дебит на тръбите
    if (flow_rate1 < 0 || flow_rate2 < 0 || flow_rate3 < 0) {
        cout << "Грешка: Една от тръбите е с отрицателен дебит." << endl;
        return 1;
    }

    // Изчисляване на времето за напълване на басейна
    int total_flow_rate = flow_rate1 + flow_rate2 + flow_rate3;
    int time_to_fill = volume / total_flow_rate;

    cout << "Басейнът ще се напълни за " << time_to_fill << " часа." << endl;

    return 0;
}
