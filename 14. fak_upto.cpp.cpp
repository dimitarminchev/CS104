/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>

int main() {
    int n;
    
    long long faktorial = 1; 

    std::cout << "Въведете n: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Факториел не е дефиниран за отрицателни числа." << std::endl;
    } else if (n == 0) {
        std::cout << "0! = 1" << std::endl;
    } else {
        
        for (int i = 1; i <= n; i++) {
            faktorial *= i; 
        }

        std::cout << n << "! = " << faktorial << std::endl;
    }

    return 0;
}