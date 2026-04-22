/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <iomanip>

int main() {
    double dohod, danuk;
    const double STAVKA = 0.10; 

    std::cout << "Въведете общия доход за 2016 г. в лева: ";
    std::cin >> dohod;

    if (dohod < 0) {
        std::cout << "Грекка. Доходът не може да е отрицателен!" << std::endl;
    } else {
        
        danuk = dohod * STAVKA;

        std::cout << std::fixed << std::setprecision(2);
        std::cout << "------------------------------------" << std::endl;
        std::cout << "Общ доход: " << dohod << " lv." << std::endl;
        std::cout << "Дължим данък (10%): " << danuk << " lv." << std::endl;
        std::cout << "Чиста сума за получаване: " << dohod - danuk << " lv." << std::endl;
        std::cout << "------------------------------------" << std::endl;
    }

    return 0;
}