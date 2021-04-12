// 04. Факториел
#include <iostream>
using namespace std;
int main()
{
    // Горна граница
    const int n = 5;

    // Необходими променливи
    int fak = 1, index = 1;

    // Решение посредством цикъл с пост условие
    do
    {
        fak = fak * index;
        index = index + 1;
    } while (index <= n);

    // Отпечатваме резултата
    cout << n << "!=" << fak << endl;

    return 0;
}