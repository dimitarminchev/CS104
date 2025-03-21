#include <iostream>
using namespace std;

int main() {
    double length, width;

    // Въвеждаме дължината и ширината на правоъгълника
    cout << "Въведете дължината на правоъгълника: ";
    cin >> length;
    cout << "Въведете ширината на правоъгълника: ";
    cin >> width;

    // Изчисляваме периметъра и лицето
    double perimeter = 2 * (length + width);
    double area = length * width;

    // Извеждаме резултатите
    cout << "Периметър на правоъгълника: " << perimeter << endl;
    cout << "Лице на правоъгълника: " << area << endl;

    return 0;
}
