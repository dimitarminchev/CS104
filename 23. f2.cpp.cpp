/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <iomanip>

int main() {
    double x;
    int n;
    double suma = 0;
    double tekushta_stepen = 1;

    std::cout << "Въведете основа (x): ";
    std::cin >> x;
    std::cout << "Въведете брой елементи (n): ";
    std::cin >> n;

    for (int k = 1; k <= n; k++) {
        tekushta_stepen *= x; 

        if (k % 2 == 0) {
            suma += tekushta_stepen;
        } else {
            suma -= tekushta_stepen;
        }
    }

    std::cout << std::fixed << std::setprecision(4);
    std::cout << "Сумата f = sum((-1)^k * x^k) e: " << suma << std::endl;

    return 0;
}