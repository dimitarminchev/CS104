#include <iostream>
int main() {
    int a;
    std::cout << "Моля въведете 3-цифрено число: ";
    std::cin >> a;
    int a1 = (a / 100) % 10;
    int a2 = (a / 10) % 10;
    int a3 = (a / 1) % 10;
    std::cout << "Резултат в прав ред: " << a3 << a2 << a1;
    return 0;
}