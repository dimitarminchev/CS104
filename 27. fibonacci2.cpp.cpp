/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>

long long fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int broi;
    std::cout << "Колко числа от редицата на Фибоначи искате да видите? ";
    std::cin >> broi;

    std::cout << "Редицата: ";
    for (int i = 0; i < broi; i++) {
        std::cout << fibonacci(i) << " ";
    }

    std::cout << std::endl;
    return 0;
}