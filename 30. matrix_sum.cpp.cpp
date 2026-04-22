/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>

int main() {
    int redove, koloni;

    std::cout << "Въведете брой редове и колони за матриците: ";
    std::cin >> redove >> koloni;

    double A[redove][koloni], B[redove][koloni], Suma[redove][koloni];


    std::cout << "Въведете елементите на матрица A:" << std::endl;
    for (int i = 0; i < redove; i++) {
        for (int j = 0; j < koloni; j++) {
            std::cin >> A[i][j];
        }
    }

    std::cout << "Въведете елементите на матрица B:" << std::endl;
    for (int i = 0; i < redove; i++) {
        for (int j = 0; j < koloni; j++) {
            std::cin >> B[i][j];
        }
    }


    std::cout << "Резултатът (A + B) e:" << std::endl;
    for (int i = 0; i < redove; i++) {
        for (int j = 0; j < koloni; j++) {
            Suma[i][j] = A[i][j] + B[i][j];
            std::cout << Suma[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    return 0;
}