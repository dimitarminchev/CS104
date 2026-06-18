/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath> 

int main() {
    double r;
    const double PI = 3.141592653589793; 

    std::cout << "Въведете радиус (r): ";
    std::cin >> r;

    
    double obikolka = 2 * PI * r;

    
    double lice_krug = PI * r * r;

    
    double obem_sfera = (4.0 / 3.0) * PI * r * r * r;

    std::cout << "--- Резултати за кръг ---" << std::endl;
    std::cout << "Обиколка = " << obikolka << std::endl;
    std::cout << "Лице = " << lice_krug << std::endl;

    std::cout << "--- Резултати за сфера ---" << std::endl;
    std::cout << "Обем на сферата = " << obem_sfera << std::endl;

    return 0;
}