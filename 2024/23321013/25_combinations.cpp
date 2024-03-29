#include <iostream>
using namespace std;

// Функция за изчисляване на факториел
unsigned long long factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

// Функция за изчисляване на комбинации
unsigned long long
