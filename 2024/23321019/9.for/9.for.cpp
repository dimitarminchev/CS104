//Цикличен алгоритъм с предварително известен брой изпълнения.
#include <iostream>
using namespace std;

int main() {
    // Предварително известен брой изпълнения на цикъла
    const int numIterations = 100;

    // Цикълът ще се изпълни 100 пъти
    for (int i = 1; i <= numIterations; ++i) {
        cout << i << endl;
    }

    return 0;
}
