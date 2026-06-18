/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>

int main() {
    int n;
    std::cout << "Въведете число (програмата ще спре при 0): ";
    std::cin >> n;

    
    while (n != 0) {
        if (n > 0) {
            std::cout << "Числото " << n << " е положително." << std::endl;
        } else {
            std::cout << "Числото " << n << " е отрицателно." << std::endl;
        }

        
        std::cout << "Въведете следващо число (0 за край): ";
        std::cin >> n;
    }

    std::cout << "Програмата завърши." << std::endl;

    return 0;
}