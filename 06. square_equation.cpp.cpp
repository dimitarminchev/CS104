/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>   // Библиотека за sqrt() - корен квадратен

int main() {
    double a, b, c;
    std::cout << "Въведете коефициенти a, b и c: " << std::endl;
    std::cin >> a >> b >> c;

    if (a == 0) {
        std::cout << "Това не е квадратно уравнение (a не може да е 0)." << std::endl;
    } else {
        
        double D = b * b - 4 * a * c;

        if (D > 0) {
            
            double x1 = (-b + sqrt(D)) / (2 * a);
            double x2 = (-b - sqrt(D)) / (2 * a);
            std::cout << "D = " << D << ". Има два корена: x1 = " << x1 << ", x2 = " << x2 << std::endl;
        } 
        else if (D == 0) {
            
            double x = -b / (2 * a);
            std::cout << "D = 0. Има един корен: x = " << x << std::endl;
        } 
        else {
            
            std::cout << "D = " << D << ". Уравнението няма реални корени." << std::endl;
        }
    }

    return 0;
}