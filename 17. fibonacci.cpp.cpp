/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>

int main() {
    int n;
    long long a = 0; 
    long long b = 1; 
    long long sledvashto = 0;

    std::cout << "Въведете граница на редицата на Фибоначи: ";
    std::cin >> n;

    std::cout << "Редицата: ";

    
    if (n >= 0) std::cout << a << " ";
    
    
    while (a + b <= n) {
        sledvashto = a + b;
        std::cout << sledvashto << " ";
        
        
        a = b;          
        b = sledvashto; 
    }

    std::cout << std::endl;
    return 0;
}