#include <iostream>
int main() {
    int a;
    std::cout << "Моля въведете 6-цифрено число: ";
    std::cin >> а;
    int a6 = (а / 100000) % 10;
    int a4 = (а / 1000) % 10;
    int a2 = (а / 10) % 10;
    int pro = a6 * a4 * a2;
    cout << "Умножение на четните позиции на 6-цифрено число: " << pro
         << std::endl;
    return 0;
}