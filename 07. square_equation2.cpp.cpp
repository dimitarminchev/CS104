/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <cmath>
#include <iomanip> 

int main() {
    double a, b, c;
    
    
    std::cout << std::fixed << std::setprecision(2);

    std::cout << "Въведете a, b и c: ";
    if (!(std::cin >> a >> b >> c)) {
        std::cout << "Грешка! Моля, въведете валидни числа!" << std::endl;
        return 1;
    }

    if (a == 0) {
        
        std::cout << "Уравнението е линейно: " << b << "x + " << c << " = 0" << std::endl;
        if (b != 0) {
            std::cout << "X = " << -c / b << std::endl;
        } else {
            std::cout << (c == 0 ? "Всяко x е решение." : "Няма решение.") << std::endl;
        }
    } else {
        double D = b * b - 4 * a * c;
        std::cout << "Дискриминанта D = " << D << std::endl;

        if (D > 0) {
            double x1 = (-b + sqrt(D)) / (2 * a);
            double x2 = (-b - sqrt(D)) / (2 * a);
            std::cout << "X1 = " << x1 << "\nX2 = " << x2 << std::endl;
        } else if (D == 0) {
            std::cout << "Двоен корен X = " << -b / (2 * a) << std::endl;
        } else {
            
            double realPart = -b / (2 * a);
            double imaginaryPart = sqrt(-D) / (2 * a);
            std::cout << "Комплексни корени:" << std::endl;
            std::cout << "X1 = " << realPart << " + " << imaginaryPart << "i" << std::endl;
            std::cout << "X2 = " << realPart << " - " << imaginaryPart << "i" << std::endl;
        }
    }

    return 0;
}