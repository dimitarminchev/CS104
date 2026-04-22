/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>

int main() {
    std::cout << "Четирицифрени числа, отговарящи на условието:" << std::endl;

    
    for (int i = 1000; i <= 9999; i++) {
        
        int hilyadi = i / 1000;          
        int stotici = (i / 100) % 10;    
        int desetici = (i / 10) % 10;    
        int edinici = i % 10;            

        
        if ((hilyadi + stotici) == (desetici + edinici)) {
            std::cout << i << " ";
        }
    }

    std::cout << std::endl << "Готово!" << std::endl;

    return 0;
}