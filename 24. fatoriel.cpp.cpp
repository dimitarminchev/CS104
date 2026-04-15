/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>


long long factoriel(int n) {
    
    if (n <= 1) {
        return 1;
    }
    
    return n * factoriel(n - 1);
}

int main() {
    int chislo;
    std::cout << "Въведете число за изчисляване на факториел: ";
    std::cin >> chislo;

    if (chislo < 0) {
        std::cout << "Факториелът не е дефиниран за отрицателни числа." << std::endl;
    } else {
        std::cout << chislo << "! = " << factoriel(chislo) << std::endl;
    }

    return 0;
}