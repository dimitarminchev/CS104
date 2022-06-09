#include <iostream>
int main() {
    float income, tax;
    std::cout << "Моля въведете доход за календарната 2016 година: ";
    std::cin >> income;
    if (income <= 1620) {
        tax = 0;
    } else if (income > 1620 && income <= 3000) {
        tax = (income - 1620) * 0.18;
    } else if (income > 3000 && income <= 7200) {
        tax = 168 + (income - 3000) * 0.2;
    } else if (income > 7200) {
        tax = 1072 + (income - 7200) * 0.22;
    }
    std::cout << "Годишния данък е = " << tax << std::endl;
    return 0;
}