/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double x;
    int n;
    double suma = 0;
    double tekushta_stepen = 1;

    std::cout << "Въведете основа (x): ";
    std::cin >> x;
    std::cout << "Въведете степен (n): ";
    std::cin >> n;

    
    for (int k = 1; k <= n; k++) {
        tekushta_stepen *= x; 
        suma += tekushta_stepen;
    }

 

    std::cout << std::fixed << std::setprecision(4);
    std::cout << "Сумата f = sum(x^k) за k от 1 до " << n << " e: " << suma << std::endl;

    return 0;
}