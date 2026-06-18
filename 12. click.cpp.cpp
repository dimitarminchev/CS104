/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>

int main() {
    int n;
    std::cout << "До кое число ще играем? ";
    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 7 == 0 || i % 10 == 7) {
            std::cout << "Цък! ";
        } else {
            std::cout << i << " ";
        }

        
        if (i % 10 == 0) {
            std::cout << std::endl;
        }
    }

    std::cout << std::endl << "Край на играта!" << std::endl;

    return 0;
}