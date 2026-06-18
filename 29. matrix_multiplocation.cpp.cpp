/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>

int main() {
    int redove, koloni;
    double mnojitel;

    std::cout << "Въведете брой редове: ";
    std::cin >> redove;
    std::cout << "Въведете брой колони: ";
    std::cin >> koloni;

    double matrix[redove][koloni];


    std::cout << "Въведете елементите на матрицата:" << std::endl;
    for (int i = 0; i < redove; i++) {
        for (int j = 0; j < koloni; j++) {
            std::cout << "Елемент [" << i << "][" << j << "]: ";
            std::cin >> matrix[i][j];
        }
    }

    std::cout << "Въведете число за умножение: ";
    std::cin >> mnojitel;

    std::cout << "Резултатът e:" << std::endl;
    for (int i = 0; i < redove; i++) {
        for (int j = 0; j < koloni; j++) {
            matrix[i][j] *= mnojitel; 
            std::cout << matrix[i][j] << "\t"; 
        }
        std::cout << std::endl; 
    }

    return 0;
}