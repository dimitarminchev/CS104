/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>

int main() {
    int n;
    std::cout << "Въведете брой елементи в масива: ";
    std::cin >> n;

    int masiv[n];
    std::cout << "Въведете " << n << " числа: " << std::endl;
    for (int i = 0; i < n; i++) {
        std::cin >> masiv[i];
    }

 
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (masiv[j] > masiv[j + 1]) {
                int temp = masiv[j];
                masiv[j] = masiv[j + 1];
                masiv[j + 1] = temp;
            }
        }
    }

    std::cout << "Сортираният масив: ";
    for (int i = 0; i < n; i++) {
        std::cout << masiv[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}