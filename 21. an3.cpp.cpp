/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <cmath>   
#include <iomanip> 

int main() {
    int n_max;
    std::cout << "Въведете брой елементи (n): ";
    std::cin >> n_max;

    std::cout << std::fixed << std::setprecision(8);
    std::cout << "Редицата An = (1 + 1/n)^n:" << std::endl;

    for (int n = 1; n <= n_max; n++) {
    
        double osnova = 1.0 + (1.0 / n);
        
        
        double an = pow(osnova, n);
        
        std::cout << "a" << n << " = " << an << std::endl;
    }

    return 0;
}