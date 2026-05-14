#include <iostream>
using namespace std;
int main()
{
    // Целочислен масив с 10 елемента
    int A[10] = { 2,2,-1,-1,-1,3,5,-2,-2,4 };

    // Брояч за срещанията на число X
    int counter = 0, x;
    cout << "x=";
    cin >> x;

    // Обхождане на елементите на масива и търсене на числото X
    for (int k = 0; k < 10; k++)
    {
        if (A[k] == x) counter++;
        cout << A[k] << " ";
    }
    cout << endl << "Count: " << counter << endl;

    return 0;
}