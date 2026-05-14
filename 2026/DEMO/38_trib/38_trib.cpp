#include <iostream>
using namespace std;
int main()
{
    const int N = 10; // брой елемнти

    // Създавме масив с N елемента, първите 3 са единици
    int trib[N] = { 1,1,1 };

    // Намиране на останалите числа от редицата до N
    for (int k = 3; k < N; k++)
    {
        trib[k] = trib[k - 3] + trib[k - 2] + trib[k - 1];
    }

    // Отпечатваме редицата на Трибуначи до N
    for (int k = 0; k < N; k++)
    {
        cout << trib[k] << " ";
    }
}
