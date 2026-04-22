/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>


long long stepenNaDvoika(int n) {
    if (n == 0) {
        return 1;
    }
    return 2 * stepenNaDvoika(n - 1);
}

int main() {
    int n;
    std::cout << "Въведете степен n (за 2^n): ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Моля,въведете положително число." << std::endl;
    } else {
        std::cout << "2 на степен " << n << " e: " << stepenNaDvoika(n) << std::endl;
    }

    return 0;
}