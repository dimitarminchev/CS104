#include <iostream>

int main()
{
    int menu;
    double investment, rate;

    std::cout << "Main Menu: \n";
    std::cout << "1. Personal Finance \n";
    std::cout << "2. Perosnal Homeover \n";
    std::cout << "3. Personal Gold \n";
    std::cout << "4. Small Business \n";
    std::cout << "5. Big Business \n";
    std::cout << "6. Gold Business \n";
    std::cout << "Choose finance type: ";
    std::cin >> menu;
    std::cout << "Enter your investment sum: ";
    std::cin >> investment;

    if (menu == 1) rate = 2.3;
    else if (menu == 2) rate = 2.6;
    else if (menu == 3) rate = 2.9;
    else if (menu == 4) rate = 3.3;
    else if (menu == 5) rate = 3.5;
    else if (menu == 6) rate = 3.8;
    else rate = 1;

    double sum = investment + (investment * rate) / 100;
    std::cout << "Investment return (1 year): " << sum << std::endl;
}