/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <cmath>   
#include <iomanip> 


double calculateFactorial(int num) {
    double res = 1.0;
    for (int i = 1; i <= num; i++) {
        res *= i;
    }
    return res;
}

int main() {
    double x, f = 0.0;
    int n;

    std::cout << "--- Изчисляване на функция f(x, n) ---" << std::endl;
    std::cout << "Въведете стойност за x: ";
    std::cin >> x;
    std::cout << "Въведете брой членове n (n > 0): ";
    std::cin >> n;


    if (n <= 0) {
        std::cout << "Грешка: n трябва да е положително число!" << std::endl;
        return 1;
    }

    for (int k = 1; k <= n; k++) {
        double numerator = pow(x, k);               
        double denominator = calculateFactorial(2 * k + 1); 
        double term = numerator / denominator;    

       
        if (k % 2 != 0) {
            f -= term; 
        } else {
            f += term; 
        }
    }

    std::cout << "------------------------------------------" << std::endl;
    std::cout << std::fixed << std::setprecision(8);
    std::cout << "Стойност f(x, n) = " << f << std::endl;

    return 0;
}