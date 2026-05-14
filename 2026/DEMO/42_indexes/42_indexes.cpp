#include <iostream>
using namespace std;
int main()
{
    // Целочислен масив с 10 елемента
    int A[10] = { 2,2,-1,-1,-1,3,5,-2,-2,4 };
    for (int k = 0; k < 10; k++) cout << A[k] << " ";

    // Търсено число число X
    int x;
    cout << endl << "x=";
    cin >> x;

    // Отрили ли сме търсеното число
    bool found = false;

    // Обхождане на елементите на масива и търсене на числото X
    cout << "Indexes: " << endl;
    for (int k = 0; k < 10; k++)
    {
        if (A[k] == x) 
        {
            cout << k << endl;
            found = true;
        }
    }

    // Ако не сме намерили числото, то извеждаме съобщение
    if (found == false) cout << "Not found!" << endl;

    return 0;
}