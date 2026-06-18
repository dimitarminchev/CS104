/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int main() {
    
    double a, b, lice, perimetur;

    std::cout << "Въведете страна a: ";
    std::cin >> a;

    std::cout << "Въведете страна b: ";
    std::cin >> b;

    
    lice = a * b;

    
    perimetur = 2 * (a + b);

    std::cout << "--- Резултати ---" << std::endl;
    std::cout << "Лице (S) = " << lice << std::endl;
    std::cout << "Периметър (P) = " << perimetur << std::endl;

    return 0;
}