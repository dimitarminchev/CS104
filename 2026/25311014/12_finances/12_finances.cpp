#include <iostream> 
#include <cmath> 

int main()
{
    float investment;
    
    std::cout << "Please enter your investment:\n"; std::cin >> investment;

    int menu;
    std::cout << "Bank menu:" << "\n"
              << "1) 2%"      << "\n"
              << "2) 3%"      << "\n"
              << "3) 4%"      << "\n"
              << "4) 5%"      << "\n"
              << "Choose: ";
    std::cin  >> menu;

    std::cout << "Receive: " << investment + (investment * (0.01 + menu / 100.0)) << "\n";

    return 0;

}