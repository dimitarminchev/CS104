#include <iostream>
using namespace std;
int main()
{
    // Целочислен масив с 10 елемента
    int A[10] = { 2,2,-1,-1,-1,3,5,-2,-2,4 };

    // Променливи за минимум и максимум
    int min = 1000, max = -1000;

    // Цикъл за обхождане на елементите на масива
    for (int k = 0; k < 10; k++)
    {
        if (A[k] < min) min = A[k]; 
        if (A[k] > max) max = A[k];
        cout << A[k] << " ";
    }
    cout << endl;

    // Минимално и максимално число
    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;

    return 0;
}