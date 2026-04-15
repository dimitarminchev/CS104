/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>

int main() {
    int n;
    long long suma = 0; 

    std::cout << "Въведете n: ";
    std::cin >> n;

    if (n < 1) {
        std::cout << "Въведете естествено число, по-голямо от 0." << std::endl;
    } else {
       
        for (int i = 1; i <= n; i++) {
            suma += i; 
        }

        std::cout << "Сумата на числата от 1 до " << n << " e: " << suma << std::endl;
        
    }

    return 0;
}