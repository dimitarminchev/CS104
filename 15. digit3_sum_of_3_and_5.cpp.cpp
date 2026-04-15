/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>

int main() {
    long long suma = 0;

    
    for (int i = 100; i <= 999; i++) {
       
        if (i % 3 == 0 && i % 5 == 0) {
            suma += i;
        }
    }

    std::cout << "Сумата на всички трицифрени числа, кратни на 3 и 5, е: " << suma << std::endl;

    return 0;
}