/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>

int main() {
    int n;
    int suma = 0;

    std::cout << "Колко числа искате да събираме (n): ";
    std::cin >> n;

  
    for (int i = 1; i <= n; i++) {
        std::cout << "Сегашно число: " << i << std::endl;
        suma = suma + i; 
    }

    std::cout << "---------------------------" << std::endl;
    std::cout << "Сумата на числата от 1 до " << n << " e: " << suma << std::endl;

    return 0;
}