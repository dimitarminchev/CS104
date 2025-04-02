#include <iostream>
using namespace std;
int main()
{
    // Създаваме масив с 10 елемента, и първите два са единици
    int fib[10] = { 1,1 };

    // Изчисляваме останалитре елементи
    for (int k = 2; k < 10; k++)
    {
        fib[k] = fib[k - 2] + fib[k - 1];
    }

    // Отпечатваме резултатa
    for (int k = 0; k < 10; k++)
    {
        cout << fib[k] << " ";
    }

    return 0;
}
