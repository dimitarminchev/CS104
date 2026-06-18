/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>

int main() {
    int n;
    std::cout << "Въведете граница n: ";
    std::cin >> n;

    std::cout << "Простите числа до " << n << " са: " << std::endl;

    
    for (int i = 2; i <= n; i++) {
        bool isPrime = true;

        
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false; 
                break;           
            }
        }

        
        if (isPrime) {
            std::cout << i << " ";
        }
    }

    std::cout << std::endl;
    return 0;
}