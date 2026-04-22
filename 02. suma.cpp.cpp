/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int main() {
    
    int a, b, suma;

    
    std::cout << "Въведете първото цяло число: ";
    std::cin >> a;

    
    std::cout << "Въведете второто цяло число: ";
    std::cin >> b;

    
    suma = a + b;

    
    std::cout << "Сумата е: " << suma << std::endl;

    return 0;
}