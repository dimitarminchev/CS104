#include <iostream>
using namespace std;
int main() {
    cout << "Pls input disk free space in bytes and the recorded time in hours, minutes and seconds." << endl;
    int space, hours, minutes, seconds;
    cin >> space >> hours >> minutes >> seconds;
    int time = seconds + minutes * 60 + hours * 60 * 60;
    int needed_space = time * 1024;             // умножаване на общо всички секунди по 1024 за да видим колко място ще заеме записа
    if (needed_space < space) {              //проверка: Дали има достатъчно място на диска
        cout << "There is enough space." << endl;
    }
    else {
        cout << "There isn't enough space!" << endl;
    }
    return 0;
}
// 1 сек = 1кб файл
// int space в байтове и трябва да се превърне в кб.