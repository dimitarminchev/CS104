#include <iostream>
using namespace std;
int main()
{
    // Създавме масив с десет елемента, първите 2 са единици
    int fib[10] = {1,1};

    // Намиране на останалите числа от редицата до 10
    for (int k = 2; k < 10; k++)
    {
        fib[k] = fib[k - 2] + fib[k - 1];
    }

    // Отпечатваме редицата
    for (int k = 0; k < 10; k++)
    {
        cout << fib[k] << " ";
    }
}
