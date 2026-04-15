/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int main() {
    int n;
    std::cout << "Въведете трицифрено число: ";
    std::cin >> n;

    

    
    int edinici = n % 10;

    
    
    int desetici = (n / 10) % 10;

    
    
    int stotici = n / 100;

  
    int obratno = edinici * 100 + desetici * 10 + stotici;

    std::cout << "Обратното число е: " << obratno << std::endl;

    return 0;
}