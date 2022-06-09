#include <iostream>
int main() {
    int x;
    std::cout << "Моля въведете 5-цифрено число: ";
    std::cin >> x;
    int a1 = (x / 10000) % 10;
    int a3 = (x / 100) % 10;
    int a5 = (x / 1) % 10;
    std::cout << "Сбор на числата с нечетна позиция: " << a1 + a3 + a5 <<
        std::endl;
    return 0;
}