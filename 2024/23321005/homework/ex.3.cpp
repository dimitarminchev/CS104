#include <iostream>

using namespace std;

int main() {
    int a, b, c;

    // Въвеждане на числата a, b и c
    cout << "Въведете числата a, b и c (a + b = c): ";
    cin >> a >> b >> c;

    // Проверка за въведено нула
    if (a == 0) {
        cout << "Липсващото число е: " << c - b << endl;
    } else if (b == 0) {
        cout << "Липсващото число е: " << c - a << endl;
    } else if (c == 0) {
        cout << "Липсващото число е: " << a + b << endl;
    } else {
        cout << "Грешка: Нито едно от числата не е нула." << endl;
    }

    return 0;
}
