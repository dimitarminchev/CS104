// 27 fibonacci
#include<iostream>
using namespace std;
int main()
{
    int Fib[20] = { 1,1 };

    // смятaме 100 числа от редицата
    for (int k = 2; k < 20; k++)
        Fib[k] = Fib[k - 2] + Fib[k - 1];

    // Отпечатваме числата
    for (int k = 0; k < 20; k++)
        cout << Fib[k] << " ";

    return 0;
}
