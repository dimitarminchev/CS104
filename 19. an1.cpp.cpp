/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <iomanip> 

int main() {
    int n_max;
    std::cout << "Въведете брой елементи на редицата (n): ";
    std::cin >> n_max;

    std::cout << std::fixed << std::setprecision(4);

    std::cout << "Редицата An = 1/n e:" << std::endl;

    for (int n = 1; n <= n_max; n++) {
        
        double an = 1.0 / n;
        
        std::cout << "a" << n << " = " << an << std::endl;
    }

    return 0;
}