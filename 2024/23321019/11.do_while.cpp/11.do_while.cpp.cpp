// Цикличен алгоритъм с подусловие
#include <iostream>
using namespace std;

int main() {
    int counter = 1;

    // Цикълът се изпълнява поне веднъж, дори и условието да не е изпълнено
    do {
        cout  << counter << endl;
        counter++; // Увеличаваме брояча с 1 на всяка итерация
    } while (counter <= 100); // Условието за продължаване на цикъла

    return 0;
}