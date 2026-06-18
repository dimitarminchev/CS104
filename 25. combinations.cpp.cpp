/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>


double factoriel(int n) {
    if (n <= 1) return 1;
    return n * factoriel(n - 1);
}


long long combinations(int n, int k) {
    return factoriel(n) / (factoriel(k) * factoriel(n - k));
}

int main() {
    std::cout << "--- Изчисляване на възможни комбинации (Тото) ---" << std::endl;

    // Резултати за трите популярни игри
    std::cout << "5 от 35: " << combinations(35, 5) << " комбинации" << std::endl;
    std::cout << "6 от 42: " << combinations(42, 6) << " комбинации" << std::endl;
    std::cout << "6 от 49: " << combinations(49, 6) << " комбинации" << std::endl;

    return 0;
}