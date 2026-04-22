/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>

int main() {
    int n;
    int suma = 0;

 
    do {
        std::cout << "Въведете число (0 за край): ";
        std::cin >> n;

        
        suma += n; 

    } while (n != 0); 

    std::cout << "---------------------------" << std::endl;
    std::cout << "Общата сума е: " << suma << std::endl;
    std::cout << "Програмата завърши." << std::endl;

    return 0;
}